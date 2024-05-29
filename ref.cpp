#include <iostream>
#include <string>

using namespace std;

int main()
{
    string value = "activities";
    string &ref_value = value;
    // cout << "The original value is " << value;
    // cout << "The value from reference is " << ref_value;

    //  To get the memory address of the variable
    // cout << "The memory address of the variable " << &ref_value;

    // A pointer is a variable that stores the memory address as its value
    // HOW TO STORE THE MEMORY ADDRESS INTO A POINTER

    string *point_val = &ref_value;
    cout << "The address from the memory is " << point_val << endl;
    cout << "The value from the memory is " << *point_val << endl;

    // Modify the value of a pointer automatically change the value of the original variable.
    *point_val = "understanding";
    cout << "The value from the pointer is " << *point_val << endl;
    cout << "The value from the original variable is " << value << endl;
}