package Solved_Silver;

import java.util.Scanner;

public class 계단오르기2579 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // 계단 갯수
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int[] dp = new int[n];
        dp[0] = arr[0];
        dp[1] = arr[1] + dp[0];
        dp[2] = dp[0];

        for(int i = 3; i < n; i++) {
            dp[i] = Math.max(arr[i-1] + dp[i-3] + arr[i]
                    , dp[i-2] + arr[i]);
        }

        System.out.println(dp[n-1]);

    }
}
