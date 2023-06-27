/*
    LATIHAN 1
    AULIA DIAZ GUSTIAVANI
    A11.2022.14446
    A11.4212
*/

#include <iostream>

using namespace std;

struct PersegiPanjang{
    float panjang = 5;
    float lebar = 6;
};

struct Lingkaran{
    float radius;
};

struct Kerucut{
    float radius;
    float tinggi;
};

struct Bola{
    float radius;
};

float luasPersegiPanjang(PersegiPanjang pp){
    return pp.panjang * pp.lebar;
}

float luasLingkaran(Lingkaran ling){
    return (22.0/7) * ling.radius * ling.radius;
}

float volumeKerucut(Kerucut ker){
    return (1.0/3) * (22.0/7) * ker.radius * ker.radius * ker.tinggi;
}

float volumeBola(Bola bola){
    return (4.0/3) * (22.0/7) * bola.radius * bola.radius * bola.radius;
}

int main()
{
    PersegiPanjang pp;
    cout << "Masukkan Panjang : ";
    cin >> pp.panjang;
    cout << "Masukkan Lebar : ";
    cin >> pp.lebar;
    cout << "Luas Persegi Panjang : " << luasPersegiPanjang(pp) << endl;
    cout << endl;

    Lingkaran ling;
    cout << "Masukkan Radius Lingkaran : ";
    cin >> ling.radius;
    cout << "Luas Lingkaran : " << luasLingkaran(ling) << endl;
    cout << endl;

    Kerucut ker;
    cout << "Masukkan Radius Kerucut : ";
    cin >> ker.radius;
    cout << "Masukkan Tinggi Kerucut : ";
    cin >> ker.tinggi;
    cout << "Volume Kerucut : " << volumeKerucut(ker) << endl;
    cout << endl;

    Bola bola;
    cout << "Masukkan Radius Bola : ";
    cin >> bola.radius;
    cout << "Volume Bola : " << volumeBola(bola) << endl;
    cout << endl;

    return 0;
}
