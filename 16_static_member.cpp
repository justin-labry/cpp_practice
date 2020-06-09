//
// Created by Labry on 2020/05/09.
//

#include <boost/program_options.hpp>
#include <iostream>

using namespace boost::program_options;
using namespace std;

void on_my_age(int age)
{
    cout << "On m_age: " << age << '\n';
}

void on_tree(int tree) {
    cout<<"On tree: "<< tree<< endl;
}

void on_dog(string dog) {
    cout<<"On dog: "<< dog<< endl;
}

int main_16(int argc, const char* argv[]) {

    try
    {
        cout<<"hello"<<endl;
        boost::program_options::options_description desc{"Options"};
        desc.add_options()
                ("help,h", "Help screen")
                ("pi", value<float>()->default_value(3.14f), "Pi")
                ("m_age", value<int>()->notifier(on_my_age), "Age")
                ("tree",value<int>()->notifier(on_tree),"Tree")
                ("dog",value<string>()->notifier(on_dog),"Dog");

        variables_map vm;
        store(parse_command_line(argc, argv, desc), vm);
        notify(vm);

        if (vm.count("help"))
            cout << desc << '\n';
        else if (vm.count("m_age"))
            cout << "Age: " << vm["m_age"].as<int>() << '\n';
        else if (vm.count("pi"))
            cout << "Pi: " << vm["pi"].as<float>() << '\n';
        else if (vm.count("tree"))
            cout << "Labry's Tree: " << vm["tree"].as<int>() << '\n';

        cout << "Labry's Tree: " << vm["tree"].as<int>() << '\n';
        cout << "Labry's dog: " << vm["dog"].as<string>() << '\n';
    } catch (const error &ex) {
        cerr << ex.what() << '\n';
    }

    return 0;
}
