import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static String reverse(String string) {
        return new StringBuilder(string).reverse().toString();
    }

    public static boolean palindromic(String string) {
        int len = string.length();
        for (int i = 0; i < len / 2; i++) {
            if (string.charAt(i) != string.charAt(len - 1 - i)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        int N = reader.nextInt();
        String M = reader.next();

        int cnt  = 0;
        while (cnt <= 30) {
            if (palindromic(M)) {
                System.out.println(cnt);
                return;
            }

            cnt++;

            BigInteger int1 = new BigInteger(M, N);
            BigInteger int2 = new BigInteger(reverse(M), N);
            BigInteger ans = int1.add(int2);

            M = ans.toString(N);
        }

        System.out.println("Impossible!");
    }
}