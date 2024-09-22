package Solved_Gold.dp;

import java.util.Scanner;

public class 평범한배낭12865 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // N: 물품의 수
        // K: 버틸 수 있는 무게
        int N = sc.nextInt();
        int K = sc.nextInt();

        int[] weight = new int[N + 1];
        int[] value = new int[N + 1];

        // 물품의 무게와 가치를 입력받음
        for (int i = 1; i <= N; i++) {
            weight[i] = sc.nextInt();
            value[i] = sc.nextInt();
        }

        // DP 테이블 초기화
        int[][] dp = new int[N + 1][K + 1];

        // DP를 사용하여 최대 가치를 계산
        for (int i = 1; i <= N; i++) { // 모든 물건
            for (int w = 0; w <= K; w++) { // 모든 무게
                if (weight[i] <= w) {
                    // 직전 물건까지 계산한 가치와 현재 물건을 포함한 가치 비교하기.
                    dp[i][w] = Math.max(dp[i - 1][w], dp[i - 1][w - weight[i]] + value[i]);
                } else { //현재 물건의 무게가 목표 무게보다 클때. 직전 물건까지 계산했던 dp 값 가져옴
                    dp[i][w] = dp[i - 1][w];
                }
            }
        }

        // 결과 출력
        System.out.println(dp[N][K]);

        sc.close();
    }
}
