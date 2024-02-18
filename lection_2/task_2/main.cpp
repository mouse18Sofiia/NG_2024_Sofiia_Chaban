#include <iostream>

int main()
{
    int index = 0;
    int number = -1;
    int weight = -1;
    int minm = -1;
    int maxm = -1;

    std::cout << "Enter the size of the array:" << std::endl;
    std::cin >> weight;

    int *arr = new int[weight];

    for (int index = 0; index < weight; index++) {
        std::cout << "Please enter a number in your array: " << std::endl;
        std::cin >> number;
        arr[index] = number;
    }

    minm = arr[0];
    maxm = arr[0];

    for (int index = 1; index < weight; index++) {
        if (minm > arr[index]) {
            minm = arr[index];
        }
        if (maxm < arr[index]) {
            maxm = arr[index];
        }
    }

    std::cout << "Min element: " << minm << std::endl;
    std::cout << "Max element: " << maxm << std::endl;

    delete[] arr; // Freeing up memory

    return 0;
}
