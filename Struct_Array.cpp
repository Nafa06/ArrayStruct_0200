#include <iostream>
using namespace std;

struct Hero
{
    string name;
    string role;
    string tipe;
};

int main()
{
    Hero arhero[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Hero ke-" << i + 1 << endl;
        cout << "Masukkan nama hero = ";
        cin >> arhero[i].name;
        cout << "Masukkan role = ";
        cin >> arhero[i].role;
        cout << "masukkan tipe hero =";
        cin >> arhero[i].tipe;
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "Tampilkan Hero ke-" << i + 1 << endl;
        cout << endl;

        cout << "Nama hero =" << arhero[i].name << endl;
        cout << "Role hero =" << arhero[i].role << endl;
        cout << "Tipe hero =" << arhero[i].tipe << endl;
    }
}