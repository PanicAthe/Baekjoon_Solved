package Solved_Silver;

import java.util.Scanner;

public class 피보나치함수1003 {
    static int[][] dp = new int[41][2];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        dp[0][0] = 1;
        dp[0][1] = 0;
        dp[1][0] = 0;
        dp[1][1] = 1;

        for (int i = 0; i < T; i++) {
            int n = sc.nextInt();
            fibonacci(n);
            System.out.println(dp[n][0] + " " + dp[n][1]);
        }

    }

    public static void fibonacci(int n) {
        if(dp[n][0]==0 && dp[n][1]==0) {
            fibonacci(n-1);
            fibonacci(n-2);
            dp[n][0] = dp[n-1][0] + dp[n-2][0];
            dp[n][1] = dp[n-2][1] + dp[n-2][1];
        }
    }
}
