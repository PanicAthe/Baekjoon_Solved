package Solved_Silver;

import java.util.*;

public class 나무자르기2805 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt(); // 나무의 수
        int M = sc.nextInt(); // 가져갈 나무 길이
        int[] trees = new int[N];

        for (int i = 0; i < N; i++) {
            trees[i] = sc.nextInt();
        }

        Arrays.sort(trees);

        int left = 0; // 최소 높이
        int right = trees[N - 1]; // 최대 높이
        int mid = 0;

        while (left <= right) {
            mid = (left + right) / 2;

            long sum = 0;

            for (int i = 0; i < N; i++) {
                if (trees[i] > mid) {
                    sum += trees[i] - mid;
                }
            }

            if (sum >= M) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        System.out.println(right);
        sc.close();
    }
}
