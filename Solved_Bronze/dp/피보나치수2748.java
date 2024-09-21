package Solved_Bronze;
import java.util.Scanner;

public class 피보나치수2748 { //public class Main 으로 넣어야
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        if (n == 0) {
            System.out.println(0);
            sc.close();
            return;
        } else if (n == 1) {
            System.out.println(1);
            sc.close();
            return;
        }

        long[] dp = new long[n + 1];

        dp[0] = 0;
        dp[1] = 1;

        for(int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        // 결과 출력
        System.out.println(dp[n]);

        sc.close();
    }
}


