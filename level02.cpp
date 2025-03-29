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

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
        if (x >= 1 && x <= 200) {
            filtered.push_back(x);
        }
    }
    return filtered;
}

void printVector(const std::vector<int>& vec) {
    for (int value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Sample input list
    std::vector<int> inputList = {15, 3, 8, 22, 1, 19, 5, 12, 0, 25, 14, 18, 200, 250, 150};

    // Step 1: Sort the list using different sorting algorithms
    std::vector<int> bubbleSortedList = inputList;
    bubbleSort(bubbleSortedList);
    std::cout << "Bubble Sorted List: ";
    printVector(bubbleSortedList);

    std::vector<int> selectionSortedList = inputList;
    selectionSort(selectionSortedList);
    std::cout << "Selection Sorted List: ";
    printVector(selectionSortedList);

    std::vector<int> insertionSortedList = inputList;
    insertionSort(insertionSortedList);
    std::cout << "Insertion Sorted List: ";
    printVector(insertionSortedList);

    // Step 2: Perform arithmetic calculations on the bubble sorted list
    std::vector<int> calculatedValues = arithmeticCalculation(bubbleSortedList);

    // Step 3: Filter values between 1 and 200
    std::vector<int> filteredValues = filterValues(calculatedValues);

    // Print the final result
    std::cout << "Filtered values between 1 and 200: ";
    printVector(filteredValues);

    return 0;
}