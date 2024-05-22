#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct my_Values
    {
        int age;
        string name;
        float score;
        string level;
    } my_Values, my_Values2, my_Values3;

    my_Values.age = 28;
    my_Values.name = "Segun";
    my_Values.score = 98.5;
    my_Values.level = 5;

    my_Values2.age = 18;
    my_Values2.name = "Daniel";
    my_Values2.score = 28.5;
    my_Values2.level = 2;

    my_Values3.age = 12;
    my_Values3.name = "Love";
    my_Values3.score = 18.5;
    my_Values3.level = 3;

    cout << my_Values.age << endl;

    return 0;
}
