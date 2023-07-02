/*
    Tugas Pertemuan 14
    Aulia Diaz Gustiavani
    A11.2022.14446
    A11.4212
    Big.O Linear Search
*/

#include <iostream>
#include <chrono>

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 64;

    auto start = std::chrono::high_resolution_clock::now();

    int result = linearSearch(arr, n, key);

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "Waktu yang dibutuhkan: " << duration.count() << " mikrodetik" << std::endl;

    if (result != -1)
    {
        std::cout << "Elemen ditemukan pada indeks: " << result << std::endl;
    }
    else
    {
        std::cout << "Elemen tidak ditemukan dalam array" << std::endl;
    }

    return 0;
}
