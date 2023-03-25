/*
    TUGAS 2
    Algoritma dan Pemrograman
    Aulia Diaz Gustiavani
    A11.2022.14446
    A11.4212
*/

#include <iostream>

using namespace std;

//DEKLARASI MAX
    int max(int a, int b) {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }

//DEKLARASI MIN
    int min(int a, int b) {
        if (a < b) {
            return a;
        } else {
            return b;
        }
    }

//DEKLARASI MAX ARRAY
   int maxArray(int arr[], int n) {
       int max = arr[0];

       for(int i = 1; i < n; i++) {
          if(arr[i] > max) {
             max = arr[i];
          }
       }
       return max;
    }

//DEKLARASI MIN ARRAY
    int minArray(int arr2[], int n) {
       int min = arr2[0];

       for(int i = 1; i < n; i++) {
          if(arr2[i] < min) {
             min = arr2[i];
          }
       }
       return min;
    }

//DEKLARASI IS EVEN
    bool isEven(int num) {
       return (num % 2 == 0);
    }

//DEKLARASI IS ODD
    bool isOdd(int num2) {
       return (num2 % 2 != 0);
    }

//DEKLARASI IS FACTOR
    bool isFactor(int n, int num3) {
       return (n % num3 == 0);
    }

//DEKLARASI SEARCH
    int search(int arr3[], int n, int x) {
       for(int i = 0; i < n; i++) {
          if(arr3[i] == x) {
             return i;
          }
       }
       return -1;
    }

//DEKLARASI IS FOUND
    bool isFound(int arr4[], int n, int x) {
       for(int i = 0; i < n; i++) {
          if(arr4[i] == x) {
             return true;
          }
       }
       return false;
    }

//DEKLARASI SUM EVEN
    int sumEven(int arr5[], int n) {
       int sum = 0;
       for(int i = 0; i < n; i++) {
          if(arr5[i] % 2 == 0) {
             sum += arr5[i];
          }
       }
       return sum;
    }

//DEKLARASI SUM ODD
    int sumOdd(int arr6[], int n) {
       int sum2 = 0;
       for(int i = 0; i < n; i++) {
          if(arr6[i] % 2 != 0) {
             sum2 += arr6[i];
          }
       }
       return sum2;
    }

int main() {

    //DEFINISI MAX
    cout << "1. Max" << endl;
    int num1, num2;
    cout << "Masukkan bilangan pertama: ";
    cin >> num1;
    cout << "Masukkan bilangan kedua: ";
    cin >> num2;

    int max_num = max(num1, num2);

    cout << "Bilangan maksimumnya adalah " << max_num << endl;

    cout << " " << endl;

    //DEFINISI MIN
    cout << "2. Min" << endl;
    int numm, numn;
    cout << "Masukkan bilangan pertama: ";
    cin >> numm;
    cout << "Masukkan bilangan kedua: ";
    cin >> numn;

    int min_num = min(numm, numn);

    cout << "Bilangan minimumnya adalah " << min_num << endl;

    cout << " " << endl;

    //DEFINISI MAX ARRAY
    cout << "3. Max Array" << endl;
    int n;
    cout << "Masukkan jumlah array : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cout << "Inputkan bilangan ke-" << i+1 << " : ";
        cin >> arr[i];
    }
    n = sizeof(arr) / sizeof(arr[0]);
    int max = maxArray(arr, n);
    cout << "Nilai maksimum dari array tersebut adalah : " << max << endl;

    cout << " " << endl;

    //DEFINISI MIN ARRAY
    cout << "4. Min Array" << endl;
    cout << "Masukkan jumlah array : ";
    cin >> n;
    int arr2[n];

    for (int i = 0; i < n; i++){
        cout << "Inputkan bilangan ke-" << i+1 << " : ";
        cin >> arr2[i];
    }
    n = sizeof(arr2) / sizeof(arr2[0]);
    int min = minArray(arr2, n);
    cout << "Nilai minimum dari array tersebut adalah : " << min << endl;

    cout << " " << endl;

    //DEFINISI IS EVEN
    cout << "5. Is Even" << endl;
    int num;
    cout << "Masukkan sebuah bilangan bulat : ";
    cin >> num;
    if(isEven(num)) {
      cout << num << " merupakan bilangan Genap" << endl;
    } else {
      cout << num << " bukan merupakan bilangan Genap" << endl;
    }

    cout << " " << endl;

    //DEFINISI IS ODD
    cout << "6. Is Odd" << endl;
    cout << "Masukkan sebuah bilangan bulat : ";
    cin >> num2;
    if(isOdd(num2)) {
      cout << num2 << " merupakan bilangan Ganjil" << endl;
    } else {
      cout << num2 << " bukan merupakan bilangan Ganjil" << endl;
    }

    cout << " " << endl;

    //DEFINISI IS FACTOR
    cout << "7. Is Factor" << endl;
    int num3;
    cout << "Masukkan sebuah bilangan bulat : ";
    cin >> n;
    cout << "Masukkan sebuah bilangan bulat faktor : ";
    cin >> num3;
    if(isFactor(n, num3)) {
      cout << num3 << " merupakan faktor dari " << n <<  endl;
    } else {
      cout << num3 << " bukan merupakan faktor dari " << n <<  endl;
    }

    cout << " " << endl;

    //DEFINISI SEARCH
    cout << "8. Search" << endl;
    int x;
    cout << "Masukkan jumlah elemen array : ";
    cin >> n;
    int arr3[n];
    for(int i = 0; i < n; i++) {
        cout << "Inputkan bilangan ke-" << i+1 << " : ";
      cin >> arr3[i];
    }
    cout << "Masukkan sebuah bilangan yang ingin Anda cari : ";
    cin >> x;
    int result3 = search(arr3, n, x);
    if(result3 == -1) {
      cout << "Bilangan " << x << " tidak ditemukan dalam array tersebut" << endl;
    } else {
      cout << "Bilangan " << x << " ditemukan pada indeks ke-" << result3 << " dalam array" << endl;
    }

    cout << " " << endl;

    //DEFINISI IS FOUND
    cout << "9. Is Found" << endl;
    cout << "Masukkan jumlah elemen array : ";
    cin >> n;
    int arr4[n];
    for(int i = 0; i < n; i++) {
            cout << "Inputkan bilangan ke-" << i+1 << " : ";
      cin >> arr4[i];
    }
    cout << "Masukkan sebuah bilangan yang ingin Anda cek keberadaannya : ";
    cin >> x;
    if(isFound(arr4, n, x)) {
      cout << "Bilangan " << x << " ditemukan dalam array tersebut" << endl;
    } else {
      cout << "Bilangan " << x << " tidak ditemukan dalam array" << endl;
    }

    cout << " " << endl;

    //DEFINISI SUM EVEN
    cout << "10. Sum Even" << endl;
    cout << "Masukkan jumlah elemen array : ";
    cin >> n;
    int arr5[n];

    for(int i = 0; i < n; i++) {
            cout << "Inputkan bilangan ke-" << i+1 << " : ";
      cin >> arr5[i];
    }
    int sum = sumEven(arr5, n);
    cout << "Jumlah bilangan genap di dalam array : " << sum << endl;

    cout << " " << endl;

    //DEKLARASI SUM ODD
    cout << "11. Sum Odd" << endl;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr6[n];

    for(int i = 0; i < n; i++) {
            cout << "Inputkan bilangan ke-" << i+1 << " : ";
      cin >> arr6[i];
    }
    int sum2 = sumOdd(arr6, n);
    cout << "Jumlah bilangan ganjil di dalam array : " << sum2 << endl;

    return 0;
}
