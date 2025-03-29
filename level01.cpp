#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

std::vector<int> arithmeticCalculation(const std::vector<int>& arr) {
    std::vector<int> result;
    for (int x : arr) {
        // Example arithmetic operation: square each element and then add 5
        result.push_back((x * x) + 5);
    }
    return result;
}

std::vector<int> filterValues(const std::vector<int>& arr) {
    std::vector<int> filtered;
    for (int x : arr) {
        if (x >= 1 && x <= 20) {
            filtered.push_back(x);
        }
    }
    return filtered;
}

int main() {
    // Sample input list
    std::vector<int> inputList = {15, 3, 8, 22, 1, 19, 5, 12, 0, 25};

    // Step 1: Sort the list
    bubbleSort(inputList);

    // Step 2: Perform arithmetic calculations
    std::vector<int> calculatedValues = arithmeticCalculation(inputList);

    // Step 3: Filter values between 1 and 20
    std::vector<int> filteredValues = filterValues(calculatedValues);

    // Print the final result
    std::cout << "Filtered values between 1 and 20: ";
    for (int value : filteredValues) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}