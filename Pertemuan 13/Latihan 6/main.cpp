/*
    LATIHAN 6
    AULIA DIAZ GUSTIAVANI
    A11.2022.14446
    A11.4212
*/

#include <iostream>
using namespace std;

enum Nilai {
    A,
    B,
    C,
    D,
    E
};

int main() {
    Nilai nilaiMahasiswa = A;

    switch (nilaiMahasiswa) {
        case A:
            cout << "Nilai Anda adalah A" << endl;
            break;
        case B:
            cout << "Nilai Anda adalah B" << endl;
            break;
        case C:
            cout << "Nilai Anda adalah C" << endl;
            break;
        case D:
            cout << "Nilai Anda adalah D" << endl;
            break;
        case E:
            cout << "Nilai Anda adalah E" << endl;
            break;
    }

    return 0;
}

