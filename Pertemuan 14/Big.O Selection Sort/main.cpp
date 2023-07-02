/*
    Tugas Pertemuan 14
    Aulia Diaz Gustiavani
    A11.2022.14446
    A11.4212
    Big.O Selection Sort
*/

#include <iostream>
#include <chrono>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; ++i)
    {
        int minIndex = i;
        for (int j = i+1; j < n; ++j)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    auto start = std::chrono::high_resolution_clock::now();

    selectionSort(arr, n);

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
