import java.util.*;

public class Main {
    public static void main(String[] args) {
        int n = 3;
        Scanner scanner = new Scanner(System.in);
        while(n>0){
            int a = scanner.nextInt();
            System.out.println(a);
            n--;
        }
        scanner.close();
    }
}