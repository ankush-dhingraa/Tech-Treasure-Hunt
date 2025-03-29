import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class level02 {
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
            if (x >= 1 && x <= 20) {
                filtered.add(x);
            }
        }
        return filtered;
    }

    public static void main(String[] args) {
        // Sample input list
        List<Integer> inputList = new ArrayList<>(Arrays.asList(15, 3, 8, 22, 1, 19, 5, 12, 0, 25));

        // Step 1: Sort the list
        bubbleSort(inputList);
        
        // Step 2: Perform arithmetic calculations
        List<Integer> calculatedValues = arithmeticCalculation(inputList);

        // Step 3: Filter values between 1 and 20
        List<Integer> filteredValues = filterValues(calculatedValues);

        // Print the final result
        System.out.print("Filtered values : ");
        for (int value : filteredValues) {
            System.out.print(value + " ");
        }
        System.out.println();
    }
}
