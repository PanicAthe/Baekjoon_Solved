package Solved_Bronze.dp;

import java.util.Scanner;

public class 부녀회장이될테야2775 {
    static int[][] dp = new int[15][15];

    public static void main(String[] args) {
        for (int i = 0; i < 15; i++) {
            dp[0][i] = i;
        }
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while (T-- > 0) {
            int k = sc.nextInt();
            int n = sc.nextInt();
            solve(k, n);
            System.out.println(dp[k][n]);
        }

    }

    public static void solve(int k, int n) {
        if(dp[k][n]==0 && n>0){
            solve(k, n-1);
            solve(k-1, n);
            dp[k][n]=dp[k][n-1] + dp[k-1][n];
        }

    }
}
