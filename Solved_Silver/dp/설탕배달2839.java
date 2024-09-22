package Solved_Silver.dp;

import java.util.Scanner;

public class 설탕배달2839 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] dp = new int[n+1];
        dp[0] = -1;
        dp[1] = -1;
        dp[2] = -1;
        dp[3] = 1;

        if(3<n){
            dp[4] = -1;
            if(4<n)
                dp[5] = 1;
        }

        for(int i = 6; i <= n; i++) {
            if(dp[i-3]==-1 && dp[i-5]==-1){
                dp[i] = -1;
            }
            else{
                if(dp[i-3]==-1){
                    dp[i] = dp[i-5]+1;
                }
                else if(dp[i-5]==-1){
                    dp[i] = dp[i-3]+1;
                }
                else
                    dp[i] = Math.min(dp[i-3], dp[i-5]) + 1;
            }
        }

        System.out.println(dp[n]);
    }
}
