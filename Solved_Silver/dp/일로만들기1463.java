package Solved_Silver.dp;

import java.util.*;

public class 일로만들기1463 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] list = new int[N + 1];
        list[1] = 0;

        for (int i = 2; i <= N; i++) {
            list[i] = list[i - 1] + 1; // 기본적으로 -1 연산을 추가

            if (i % 2 == 0) {
                list[i] = Math.min(list[i], list[i / 2] + 1);
            }
            if (i % 3 == 0) {
                list[i] = Math.min(list[i], list[i / 3] + 1);
            }
        }

        System.out.println(list[N]);
        sc.close();
    }
}
