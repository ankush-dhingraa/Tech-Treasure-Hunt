import java.util.Scanner;

public class level01 {

    // Method to decrypt the encrypted text using the given shift
    public String decrypt(String encryptedText, int shift) {
        StringBuilder decrypted = new StringBuilder(encryptedText);
        for (int i = 0; i < decrypted.length(); i++) {
            char c = decrypted.charAt(i);
            c -= shift; // Reverse the shift to get the original text
            decrypted.setCharAt(i, c);
        }
        return decrypted.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Level01 level01 = new Level01(); // Create an instance of Level01

        // User inputs encrypted text and shift value
        System.out.print("Enter the encrypted password: ");
        String encryptedPassword = scanner.nextLine();
        System.out.print("Enter the shift value: ");
        int shift = scanner.nextInt();

        // Decrypt and display
        String decryptedPassword = level01.decrypt(encryptedPassword, shift);
        System.out.println("Decrypted Password: " + decryptedPassword);

        scanner.close();
    }
}