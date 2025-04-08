package Solved_Gold.dp;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class 펠론드롬10942 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] nums = new int[n];
        int[][] dp = new int[n][n];

        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            nums[i] = Integer.parseInt(st.nextToken());
            dp[i][i] = 1; // 모든 단일 요소는 팰린드롬
        }

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                dp[i][i + 1] = 1; // 연속된 두 요소가 같다면 팰린드롬
            }
        }

        for (int gap = 2; gap < n; gap++) {
            for (int i = 0; i < n - gap; i++) {
                int j = i + gap;
                if (nums[i] == nums[j] && dp[i + 1][j - 1] == 1) {
                    dp[i][j] = 1;
                }
            }
        }

        int q = Integer.parseInt(br.readLine());
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < q; i++) {
            st = new StringTokenizer(br.readLine());
            int s = Integer.parseInt(st.nextToken()) - 1;
            int e = Integer.parseInt(st.nextToken()) - 1;
            sb.append(dp[s][e]).append("\n");
        }
        System.out.print(sb);
    }
}

