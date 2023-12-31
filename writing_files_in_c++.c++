#include <iostream>
#include <fstream>
using namespace std;

int main(){
    cout<<"Writing Files in C++"<<endl;
    ofstream out("sample.txt");
    cout<<"Enter few text that will be entered in the File"<<endl;
    string input;
    cin>>input;
    //entering just first word from the the entered text
    out<<input;

    out.close();
    return 0;

}


