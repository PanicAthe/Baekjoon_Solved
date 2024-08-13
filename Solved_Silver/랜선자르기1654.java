package Solved_Silver;

import java.util.Arrays;
import java.util.Scanner;

public class 랜선자르기1654 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // K: 이미 가지고 있는 랜선의 개수
        // N: 필요한 랜선의 개수
        int K = sc.nextInt();
        int N = sc.nextInt();

        // 랜선의 길이를 저장할 배열
        int[] cables = new int[K];

        // 랜선 길이 입력 받기
        for (int i = 0; i < K; i++) {
            cables[i] = sc.nextInt();
        }

        // 이분 탐색을 통해 최대 길이의 랜선 찾기
        long result = findMaxLength(cables, N);

        // 결과 출력
        System.out.println(result);

        sc.close();
    }

    // 이분 탐색을 통해 랜선의 최대 길이를 찾는 함수
    public static long findMaxLength(int[] cables, int N) {
        Arrays.sort(cables);
        long left = 0;
        long right = cables[cables.length-1];  // 랜선 중 가장 긴 길이
        long maxLen = 0;

        while (left <= right) {
            long mid = (left + right) / 2;
            int count = 0;
            for (int cable : cables) {
                if(mid == 0 ) break;
                count += cable / mid;  // mid 길이로 만들 수 있는 랜선 개수
            }
            if(count >= N) {
                if(maxLen <  mid) {
                    maxLen =  mid;
                }
                else{
                    left = mid + 1;
                }
            }
            else{
                right = mid - 1;
            }
        }

        return maxLen;
    }

}