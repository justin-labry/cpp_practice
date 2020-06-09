//
// Created by Labry on 2020/06/02.
//

#include <fstream>
#include <iostream>
#include <streambuf>

using namespace std;

int main_25() {
    if(true) {

        ofstream ofs("my_data.txt");
        cout<<"ofs.rdbuf:" << ofs.rdbuf()->pubsetbuf(0,10000)<<endl;

        if(!ofs) {
            cerr << "Couldn't open file"<<endl;
            exit(1);
        }

        ofs <<"Line 1" << endl;
        ofs <<"line 2" << endl;

        ofs.close();

        ifstream ifs("my_data.txt");

        while(ifs) {
            std::string str;
            getline(ifs, str);

            cout<< str << endl;
        }

        ifs.close();

    }
}