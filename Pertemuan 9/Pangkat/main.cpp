/*
    TUGAS REKURSIF PANGKAT
    PERTEMUAN 9
    AULIA DIAZ GUSTIAVANI
    A11.2022.14446
    Kelp A11.4212
*/

#include <iostream>

using namespace std;

double pangkatRekursif(double angka, int pangkat)
{
    if (pangkat == 0)
        return 1;
    else if (pangkat > 0)
        return angka * pangkatRekursif(angka, pangkat - 1);
    else
        return 1 / (angka * pangkatRekursif(angka, -pangkat - 1));
}

int main()
{
    double angka;
    int pangkat;
    cout << "Masukkan angka : ";
    cin >> angka;
    cout << "Masukkan pangkat : ";
    cin >> pangkat;

    double hasil = pangkatRekursif(angka, pangkat);
    cout << "Hasil pangkat dari " << angka << " pangkat " << pangkat << " adalah " << hasil << endl;

    return 0;
}
