package Solved_Gold.backTracking;
import java.util.*;

public class 계란으로계란치기16987 {
    static int result = 0;
    static int max = 0;
    static int n;
    static int[] b = new int[10]; // 내구도
    static int[] w = new int[10]; // 무게

    static void egg(int a) { // 손에 a 계란 들기

        if (a == n) { // 가장 오른쪽 계란
            if (max < result)
                max = result;
            return;
        } else if (b[a] <= 0) { // 깨진 계란
            egg(a + 1); // 가장 최근에 든 계란의 한 칸 오른쪽
            return;
        } else {
            for (int i = 0; i < n; i++) {
                // 깨지지 않은 계란만 치기.
                if (b[i] > 0 && i != a) {
                    b[i] -= w[a];
                    b[a] -= w[i];
                    if (b[i] <= 0)
                        result++;
                    if (b[a] <= 0)
                        result++;

                    egg(a + 1);
                    // 가장 최근에 든 계란 한 칸 오른쪽 계란 들기.

                    if (b[i] <= 0)
                        result--;
                    if (b[a] <= 0)
                        result--;
                    b[i] += w[a];
                    b[a] += w[i];

                }
            }

        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt(); // 계란 개수

        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt(); // 내구도
            w[i] = sc.nextInt(); // 무게
        }

        egg(0); // 백트래킹 시작
        System.out.println(max);

        sc.close();
    }
}

