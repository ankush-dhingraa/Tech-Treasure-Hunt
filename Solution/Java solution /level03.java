import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class SortingAlgorithms {
    public static void bubbleSort(List<Integer> arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr.get(j) > arr.get(j + 1)) {
                    int temp = arr.get(j);
                    arr.set(j, arr.get(j + 1));
                    arr.set(j + 1, temp);
                }
            }
        }
    }

    public static void selectionSort(List<Integer> arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr.get(j) < arr.get(minIndex)) {
                    minIndex = j;
                }
            }
            int temp = arr.get(i);
            arr.set(i, arr.get(minIndex));
            arr.set(minIndex, temp);
        }
    }

    public static void insertionSort(List<Integer> arr) {
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            int key = arr.get(i);
            int j = i - 1;
            while (j >= 0 && arr.get(j) > key) {
                arr.set(j + 1, arr.get(j));
                j--;
            }
            arr.set(j + 1, key);
        }
    }

    public static List<Integer> arithmeticCalculation(List<Integer> arr) {
        List<Integer> result = new ArrayList<>();
        for (int x : arr) {
            result.add((x * x) + 5); // Square each element and add 5
        }
        return result;
    }

    public static List<Integer> filterValues(List<Integer> arr) {
        List<Integer> filtered = new ArrayList<>();
        for (int x : arr) {
            if (x >= 1 && x <= 200) {
                filtered.add(x);
            }
        }
        return filtered;
    }

    public static void printList(List<Integer> list) {
        for (int value : list) {
            System.out.print(value + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        List<Integer> inputList = new ArrayList<>(Arrays.asList(15, 3, 8, 22, 1, 19, 5, 12, 0, 25, 14, 18, 200, 250, 150));

        List<Integer> bubbleSortedList = new ArrayList<>(inputList);
        bubbleSort(bubbleSortedList);
        System.out.print("Bubble Sorted List: ");
        printList(bubbleSortedList);

        List<Integer> selectionSortedList = new ArrayList<>(inputList);
        selectionSort(selectionSortedList);
        System.out.print("Selection Sorted List: ");
        printList(selectionSortedList);

        List<Integer> insertionSortedList = new ArrayList<>(inputList);
        insertionSort(insertionSortedList);
        System.out.print("Insertion Sorted List: ");
        printList(insertionSortedList);

        List<Integer> calculatedValues = arithmeticCalculation(bubbleSortedList);
        List<Integer> filteredValues = filterValues(calculatedValues);

        System.out.print("\nFiltered values: ");
        printList(filteredValues);
    }
}
