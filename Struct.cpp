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
    Hero arhero;
    cout << "Masukkan nama hero = ";
    cin >> arhero.name;
    cout << "Masukkan role = ";
    cin >> arhero.role;
    cout << "masukkan tipe hero =";
    cin >> arhero.tipe;

    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;

    cout << "Nama hero =" << arhero.name << endl;
    cout << "Role hero =" << arhero.role << endl;
    cout << "Tipe hero =" << arhero.tipe << endl;
}