/*
    TUGAS REKURSIF PEMBAGIAN
    PERTEMUAN 9
    AULIA DIAZ GUSTIAVANI
    A11.2022.14446
    Kelp A11.4212
*/

#include <iostream>

using namespace std;

int pembagianRekursif(int a, int b)
{
    if (a < b)
        return 0;
    else
        return 1 + pembagianRekursif(a - b, b);
}

int main()
{
    int x, y;
    cout << "Masukkan bilangan pertama : ";
    cin >> x;
    cout << "Masukkan bilangan kedua : ";
    cin >> y;

    int hasil = pembagianRekursif(x, y);
    cout << "Hasil pembagian dari " << x << " dibagi oleh " << y << " adalah " << hasil << endl;

    return 0;
}
