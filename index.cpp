// #include <iostream>
// int main() {
//     std::cout << "Welcome to C++ class. This class promised to be exciting." << std::endl;
//     std::cout << "This is the first class. It started late due to some technical issues \n";
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string name;
    // cout << "Please enter your name";
    // getline(cin, name);
    // // cin >> name;

    // cout << "Welcome " << name << " to c++ class. This class promised to be exciting." << std::endl;
    // return 0;

    string fname = "Yemi", lname = "Sunday", location = "Ogbomosho", myClass = "NID 2";
    int cplusplus, pyton, javaScript, java;

    const int age = 50;
    char character = 'r';
    float price = 45.7;
    double score = 78.8;
    bool status = true;
    double answer = 34E2;
    float result = 43e3;

    string output = "Welcome " + fname + " " + lname + " to c++ class. This class promised to be exciting";
    // string output2 = fname.append(" " + lname);
    cout << output << std::endl;
}
