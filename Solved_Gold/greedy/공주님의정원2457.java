package Solved_Gold.greedy;

import java.util.Scanner;

public class 공주님의정원2457 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[][] f = new int[n][2];

        for (int i = 0; i < n; i++) {
            f[i][0] = sc.nextInt() * 100 + sc.nextInt();
            f[i][1] = sc.nextInt() * 100 + sc.nextInt();
        }

        int t = 301;
        // int t_next = t;
        int count = 0;
        while (t < 1201) {
            int t_next = t;
            for (int i = 0; i < n; i++) {
                if (f[i][0] <= t && t_next < f[i][1]) {
                    t_next = f[i][1];
                }
            }
            if (t_next == t) {
                System.out.println(0);
                return;
            }
            t = t_next;
            count++;
        }
        System.out.println(count);

    }
}