#include <iostream>
#include <string>
using namespace std;

struct Skill
{
    string skill1;
    string skill2;
    string skill3;
};

struct Hero
{
    string name;
    string role;
    string tipe;
    Skill Skill;
};

int main()
{
    Hero arhero[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Hero ke-" << i + 1 << endl;
        cout << "Masukkan nama hero = ";
        getline(cin, arhero[i].name);
        cout << "Masukkan role hero = ";
        getline(cin, arhero[i].role);
        cout << "masukkan tipe hero = ";
        cin >> arhero[i].tipe;
        cout << endl;
        cin.ignore();

        cout << "masukkan skil 1 =";
        getline(cin, arhero[i].Skill.skill1);
        cout << "masukkan skil 2 =";
        getline(cin, arhero[i].Skill.skill2);
        cout << "masukkan skil 3 =";
        getline(cin, arhero[i].Skill.skill3);
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

        cout << "Skill 1 =" << arhero[i].Skill.skill1 << endl;
        cout << "Skill 2 =" << arhero[i].Skill.skill2 << endl;
        cout << "Skill 3 =" << arhero[i].Skill.skill3 << endl;
        cout << endl;
    }
}