package Solved_Gold;
import java.util.Arrays;
import java.util.Scanner;

public class 공유기설치2110 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // N: 집의 개수
        // C: 공유기 개수
        int N = sc.nextInt();
        int C = sc.nextInt();

        int[] houses = new int[N];

        // 집의 좌표 입력 받기
        for (int i = 0; i < N; i++) {
            houses[i] = sc.nextInt();
        }

        // 이분 탐색을 통해 최대 거리 찾기
        long result = findMaxLength(houses, C);

        // 결과 출력
        System.out.println(result);

        sc.close();
    }

    public static long findMaxLength(int[] houses, int C) {
        Arrays.sort(houses);
        long left = 1; // 최소 거리 1로 설정
        long right = houses[houses.length - 1] - houses[0];  // 최대 거리
        long maxLen = 0;

        while (left <= right) {
            long mid = (left + right) / 2; // 공유기가 놓아질 거리
            int count = 1;
            int prevHouse = houses[0];

            for (int i = 1; i < houses.length; i++) {
                if (houses[i] - prevHouse >= mid) {
                    count++;
                    prevHouse = houses[i];
                }
            }

            if (count >= C) {
                maxLen = mid;
                left = mid + 1;  // 더 큰 길이를 찾아본다.
            } else {
                right = mid - 1;  // 더 작은 길이를 찾아본다.
            }
        }

        return maxLen;
    }
}
