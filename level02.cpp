#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void insertionSort(vector<int>& arr) {
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

vector<int> arithmeticCalculation(const vector<int>& arr) {
    vector<int> result;
    for (int x : arr) {
        // Example arithmetic operation: square each element and then add 5
        result.push_back((x * x) + 5);
    }
    return result;
}

vector<int> filterValues(const vector<int>& arr) {
    vector<int> filtered;
    for (int x : arr) {
        if (x >= 1 && x <= 200) {
            filtered.push_back(x);
        }
    }
    return filtered;
}

void printVector(const vector<int>& vec) {
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    // Sample input list
    vector<int> inputList = {15, 3, 8, 22, 1, 19, 5, 12, 0, 25, 14, 18, 200, 250, 150};

    // Step 1: Sort the list using different sorting algorithms
    vector<int> bubbleSortedList = inputList;
    bubbleSort(bubbleSortedList);
    cout << "Bubble Sorted List: ";
    printVector(bubbleSortedList);

    vector<int> selectionSortedList = inputList;
    selectionSort(selectionSortedList);
    cout << "Selection Sorted List: ";
    printVector(selectionSortedList);

    vector<int> insertionSortedList = inputList;
    insertionSort(insertionSortedList);
    cout << "Insertion Sorted List: ";
    printVector(insertionSortedList);

    // Step 2: Perform arithmetic calculations on the bubble sorted list
    vector<int> calculatedValues = arithmeticCalculation(bubbleSortedList);

    // Step 3: Filter values between 1 and 200
    vector<int> filteredValues = filterValues(calculatedValues);

    // Print the final result
    cout << "Filtered values between 1 and 200: ";
    printVector(filteredValues);

    return 0;
}