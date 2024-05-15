// #include <iostream>
// using namespace std;
// int main()
// {

//     int age_tunde = 20;
//     int age_yemi = 27;
//     age_tunde = 500;

//     int aOs[10];

//     aOs[0] = 10;
//     aOs[1] = 23;
//     aOs[2] = 12;
//     aOs[3] = 45;
//     aOs[4] = 34;
//     aOs[5] = 32;
//     aOs[6] = 52;
//     aOs[7] = 15;
//     aOs[8] = 56;
//     aOs[9] = 24;

//     // cout << aOs[5];
//     // aOs[8] = 25;
//     // cout << aOs[8];

//     string names[5] = {"Yemi", "Tope", "Kayode", "Ola", "Miracle"};
//     // cout << names[4];

//     // for (int i = 0; i < 10; i++)
//     // {
//     //     cout << aOs[i] << endl;
//     // }

//     // for (int i = 0; i < 10; i++)
//     // {
//     //     cout << names[i] << endl;
//     // }

//     // for (int i : aOs)
//     // {
//     //     printf("%d", i);
//     //     printf("\n");
//     // }

//     // for (string nam : names)
//     // {
//     //     printf("%s", nam.c_str());
//     //     printf("\n");
//     // }

//     string names[] = {"Micheal", "John", "Olu", "Sunday", "Ade", "Oluchukwu"};

//     for (string nam : names)
//     {
//         // cout << nam << endl;
//     }

//     cout << "Size1 of names 1" + sizeof(names);

//     int size = sizeof(names) / sizeof(string);
//     cout << "Size2 of names 2" + size << endl;

//     // int classNum[3][4] = {{1, 2, 3, 4}, {12, 13, 14, 15}, {20, 21, 22, 23}};

//     // string className[3][4] = {{"Ola", "Olu", "Oni", "Oti"}, {"Micheal", "Miche", "Man", "Mon"}, {"Tola", "Tolu", "Tosin", "Tos"}};
//     // string names[3][4];
//     // names[0][0] = "Micheal";
//     // names[0][1] = "Tolu";

//     // cout << className[1][2];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             // cout << className[i][j] << endl;
//         }
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int age_tunde = 20;
    int age_yemi = 27;
    age_tunde = 500;

    int aOs[10];

    aOs[0] = 10;
    aOs[1] = 23;
    aOs[2] = 12;
    aOs[3] = 45;
    aOs[4] = 34;
    aOs[5] = 32;
    aOs[6] = 52;
    aOs[7] = 15;
    aOs[8] = 56;
    aOs[9] = 24;

    string names[] = {"Micheal", "John", "Olu", "Sunday", "Ade", "Oluchukwu"};

    for (string nam : names)
    {
        cout << nam << endl;
    }

    cout << "Size of names: " << sizeof(names) << endl;

    int size = sizeof(names) / sizeof(string);
    cout << "Number of elements in names: " << size << endl;

    return 0;
}
