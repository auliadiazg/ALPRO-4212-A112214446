/*
    Tugas Pertemuan 14
    Aulia Diaz Gustiavani
    A11.2022.14446
    A11.4212
    Big.O Binary Search
*/

#include <iostream>
#include <chrono>

int binarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {11, 12, 22, 25, 64};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 25;

    auto start = std::chrono::high_resolution_clock::now();

    int result = binarySearch(arr, 0, n - 1, key);

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

