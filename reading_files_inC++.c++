#include <iostream>
#include <fstream>

using namespace std;

// c++ : file I/operator delete

// # usefull classes
// 1) fstream
// 2)ifstean
// 3)ofstream

int main()
{
    cout << "Files Operation in C++" << endl;
    string s;
    string s2;
    ifstream in("sample.txt");
    // for just print first line in file we use the following code
    in >> s;
    cout<<s<< endl;
    // for print whole word we will use following code
    in >> s2;
    getline(in,s2);
    cout<<s2;
    in.close();
    return 0;
}