/*
    LATIHAN 4
    AULIA DIAZ GUSTIAVANI
    A11.2022.14446
    A11.4212
*/

#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int tahunLulus;
};

int main() {
    int size;
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> size;

    Mahasiswa* mahasiswa = new Mahasiswa[size];

    for (int i = 0; i < size; i++) {
        cout << "Data Mahasiswa " << i + 1 << endl;
        cout << "NIM : ";
        cin >> mahasiswa[i].nim;
        cout << "Nama : ";
        cin >> mahasiswa[i].nama;
        cout << "Jurusan : ";
        cin >> mahasiswa[i].jurusan;
        cout << "Tahun Lulus : ";
        cin >> mahasiswa[i].tahunLulus;
        cout << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "NIM : " << mahasiswa[i].nim << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Jurusan : " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus : " << mahasiswa[i].tahunLulus << endl;
        cout << endl;
    }

    delete[] mahasiswa;

    return 0;
}
