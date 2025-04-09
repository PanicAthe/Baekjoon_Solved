import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; i++) {

            int n = sc.nextInt();
            long arr[] = new long[n];
            for (int j = 0; j < n; j++) {
                arr[j] = sc.nextInt();
            }

            long max = arr[n-1];
            long sum = 0;
            for (int j = n - 2; j >= 0; j--) {
                if(arr[j] < max){
                    sum += max - arr[j];
                }else if(arr[j] > max){
                    max = arr[j];
                }
            }

            System.out.println(sum);
        }
    }
}
