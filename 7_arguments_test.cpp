//
// Created by Labry on 2020/05/09.
//

#include <boost/program_options.hpp>
#include <iostream>

using namespace boost::program_options;
using namespace std;

void on_age(int age)
{
  cout << "On m_age: " << age << '\n';
}

int main_7(int argc, const char* argv[]) {

  try
  {
    cout<<"hello"<<endl;
      boost::program_options::options_description desc{"Options"};
    desc.add_options()
      ("help,h", "Help screen")
      ("pi", value<float>()->default_value(3.14f), "Pi")
      ("m_age", value<int>()->notifier(on_age), "Age");

    variables_map vm;
    store(parse_command_line(argc, argv, desc), vm);
    notify(vm);

    if (vm.count("help"))
      cout << desc << '\n';
    else if (vm.count("m_age"))
      cout << "Age: " << vm["m_age"].as<int>() << '\n';
    else if (vm.count("pi"))
      cout << "Pi: " << vm["pi"].as<float>() << '\n';
  } catch (const error &ex) {
    cerr << ex.what() << '\n';
  }

    return 0;
}
