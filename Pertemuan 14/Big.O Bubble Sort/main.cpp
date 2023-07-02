/*
    Tugas Pertemuan 14
    Aulia Diaz Gustiavani
    A11.2022.14446
    A11.4212
    Big.O Bubble Sort
*/

#include <iostream>
#include <chrono>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = 0; j < n-i-1; ++j)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {46, 26, 64, 24, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    auto start = std::chrono::high_resolution_clock::now();

    bubbleSort(arr, n);

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
