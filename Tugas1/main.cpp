/*
    TUGAS1
    Algoritma dan Pemrograman
    Aulia Diaz Gustiavani
    A11.2022.14446
    Kelp. 4212
*/

#include <iostream>

using namespace std;

//PENJUMLAHAN
int jumlah(int a, int b){
    int hasilJumlah = a + b;
    return hasilJumlah;
}

//PENGURANGAN
int kurang(int a, int b){
    int hasilKurang = a - b;
    return hasilKurang;
}

//TOTAL ARRAY
int hitungTotal(int arr[], int n){
    int total = 0;
    for(int i=0; i<n; i++){
        total += arr[i];
    }
    return total;
}

//RATA-RATA ARRAY
float hitungRataRata(int arr[], int n) {
   int total = 0;
   for (int i = 0; i < n; i++) {
      total += arr[i];
   }
   float rata = static_cast<float> (total)/n;
   return rata;
}


int main()
{
    int x, y;
    cout << "Input bilangan pertama : ";
    cin >> x;
    cout << "Input bilangan kedua : ";
    cin >> y;
    int hasilJumlah = jumlah(x,y);
    cout << "Hasil penjumlahan : " << hasilJumlah << endl;

    cout << "---------------------------------" << endl;

    int p, q;
    cout << "Input bilangan pertama : ";
    cin >> p;
    cout << "Input bilangan kedua : ";
    cin >> q;
    int hasilKurang = kurang(p,q);
    cout << "Hasil pengurangan : " << hasilKurang << endl;

    cout << "---------------------------------" << endl;

    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Masukkan bilangan ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    int total = hitungTotal(arr, n);
    cout << "Jumlah nilai total dari Array adalah : " << total << endl;

    float rata = hitungRataRata(arr, n);
    cout << "Rata-rata dari Array adalah : " << rata << endl;

    return 0;
}

