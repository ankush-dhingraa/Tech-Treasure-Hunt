import java.util.Scanner;

public class level01 {
    public static String decrypt(String encryptedText, int shift) {
        StringBuilder decrypted = new StringBuilder(encryptedText);
        for (int i = 0; i < decrypted.length(); i++) {
            decrypted.setCharAt(i, (char) (decrypted.charAt(i) - shift)); // Reverse the shift
        }
        return decrypted.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // User inputs encrypted text and shift value
        System.out.print("Enter the encrypted password: ");
        String encryptedPassword = scanner.next();
        System.out.print("Enter the shift value: ");
        int shift = scanner.nextInt();
        
        // Decrypt and display
        String decryptedPassword = decrypt(encryptedPassword, shift);
        System.out.println("Decrypted Password: " + decryptedPassword);
        
        scanner.close();
    }
}