/*
    TUGAS REKURSIF PERKALIAN
    PERTEMUAN 9
    AULIA DIAZ GUSTIAVANI
    A11.2022.14446
    Kelp A11.4212
*/

#include <iostream>

using namespace std;

int perkalianRekursif(int a, int b)
{
    if (b == 0)
        return 0;
    else
        return a + perkalianRekursif(a, b - 1);
}

int main()
{
    int x, y;
    cout << "Masukkan bilangan pertama : ";
    cin >> x;
    cout << "Masukkan bilangan kedua : ";
    cin >> y;

    int hasil = perkalianRekursif(x, y);
    cout << "Hasil perkalian dari " << x << " dan " << y << " adalah  " << hasil << endl;
    return 0;
}
