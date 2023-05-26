/*
    TUGAS REKURSIF PENGURANGAN
    PERTEMUAN 9
    AULIA DIAZ GUSTIAVANI
    A11.2022.14446
    Kelp A11.4212
*/

#include <iostream>

using namespace std;

int penguranganRekursif(int a, int b)
{
    if (b == 0)
        return a;
    else
        return penguranganRekursif(a - 1, b - 1);
}

int main()
{
    int x, y;
    cout << "Masukkan bilangan pertama : ";
    cin >> x;
    cout << "Masukkan bilangan kedua : ";
    cin >> y;

    int hasil = penguranganRekursif(x, y);
    cout << "Hasil pengurangan dari " << x << " dan " << y << " adalah " << hasil << endl;
    return 0;
}
