#include <iostream>
#include <vector>

int main() {
    // Ask the user for the size of the array
    int N;
    std::cout << "Enter the size of the array: ";
    std::cin >> N;

    // Create a vector to store the elements of the array
    std::vector<int> array(N);

    // Prompt the user to enter the elements of the array
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < N; ++i) {
        std::cin >> array[i];
    }

    // Calculate the sum of all elements
    int total_sum = 0;
    for (int num : array) {
        total_sum += num;
    }

    // Calculate the sum of all even elements
    int even_sum = 0;
    for (int num : array) {
        if (num % 2 == 0) {
            even_sum += num;
        }
    }

    // Calculate the sum of all odd elements
    int odd_sum = 0;
    for (int num : array) {
        if (num % 2 != 0) {
            odd_sum += num;
        }
    }

    // Print the results
    std::cout << "Sum of all elements: " << total_sum << std::endl;
    std::cout << "Sum of all even elements: " << even_sum << std::endl;
    std::cout << "Sum of all odd elements: " << odd_sum << std::endl;

    return 0;
}
