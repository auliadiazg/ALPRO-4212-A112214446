/*
    PERTEMUAN 8
    AULIA DIAZ GUSTIAVANI
    A11.2022.14446
    A11.4212
    SOAL 1
*/

#include <iostream>

using namespace std;

void genapterkecil(int arr[], int n);
int ganjil(int x);

int main()
{
    int arr[]={7,8,5,7,8,2,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    genapterkecil (arr, n);
    return 0;
}
int ganjil(int x)
{
    return (x%2==1);
}

void genapterkecil(int arr[], int n){
int genapterkecil = 9999999999999;
int index = -1;

for (int i=0; i<n; i++)
{
    if (arr[i]%2==0 && arr[i]<genapterkecil)
    {
        genapterkecil = arr[i];
        index = i;
    }
}
    if (genapterkecil==99999999999999)
    {
        cout << " tidak ada bilangan genap";
    }
    else
    {
        cout << "Bilangan genap terkecil adalah " <<
        genapterkecil << " dan terdapat pada index ke-"<< index<< endl;
    }
}
