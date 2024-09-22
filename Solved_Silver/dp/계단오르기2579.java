package Solved_Silver.dp;

import java.util.Scanner;

public class 계단오르기2579 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // 계단의 갯수
        int[] num = new int[n];
        for (int i = 0; i < n; i++) {
            num[i] = sc.nextInt();
        }

        // n이 1 또는 2일 때 처리
        if (n == 1) {
            System.out.println(num[0]);
            return;
        }
        if (n == 2) {
            System.out.println(num[0] + num[1]);
            return;
        }

        int[] dp = new int[n];
        dp[0] = num[0];
        dp[1] = num[1] + num[0];
        dp[2] = Math.max(num[0], num[1]) + num[2];

        for (int i = 3; i < n; i++) {
            dp[i] = Math.max(dp[i - 3] + num[i - 1], dp[i - 2]) + num[i];
        }

        System.out.println(dp[n - 1]);
        sc.close();
    }
}
