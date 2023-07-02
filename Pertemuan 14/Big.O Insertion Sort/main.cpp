/*
    Tugas Pertemuan 14
    Aulia Diaz Gustiavani
    A11.2022.14446
    A11.4212
    Big.O Insertion Sort
*/

#include <iostream>
#include <chrono>

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {96, 91, 85, 43, 54};
    int n = sizeof(arr) / sizeof(arr[0]);

    auto start = std::chrono::high_resolution_clock::now();

    insertionSort(arr, n);

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "Waktu yang dibutuhkan: " << duration.count() << " mikrodetik" << std::endl;

    std::cout << "Array yang diurutkan: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
