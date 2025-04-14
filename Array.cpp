#include <iostream>
using namespace std;

// menambahkan array
string Matkul[] = {"Matematika", "Pemdas"};

float Nilai_Akhir[2] = {7.5, 9.0};

char grade[5];

int main()
{
    cout << "Nama matakuliah = " << Matkul[1] << endl;
    Matkul[0] = "Logika Teknik Pemrograman";
    cout << "Nama matakuliah = " << Matkul[0] << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "Nilai akhir ke-" << i + 1 << " = " << Nilai_Akhir[i] << endl;
    }

    cout << "Input grade = " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan grade ";
        cin >> grade[i];
    }
    cout << endl;
    cout << "Tampilkan grade" << endl;
    cout << endl;

    for (int i = 0; i < 5; i++){
        cout << grade[i] << endl;
    }
}