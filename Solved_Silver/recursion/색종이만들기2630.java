package Solved_Silver.recursion;

import java.util.Scanner;

public class 색종이만들기2630 {

    static int[] count = { 0, 0 };
    static int[][] map;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        map = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                map[i][j] = sc.nextInt();
            }
        }
        sequence(0, 0, n);
        System.out.println(count[0]+"\n"+count[1]);

    }

    static void sequence(int x, int y, int size) { // x,y 부터 x+size, y+size까지
        int base = map[x][y];
        boolean isOk = true;
        for (int i = x ; i < x + size; i++) {
            for (int j = y; j < y + size; j++) {
                if (base != map[i][j]) {
                    size /= 2; // 더 작은 4분면으로 나누기.
                    sequence(x, y, size);
                    sequence(x + size, y, size);
                    sequence(x + size, y + size, size);
                    sequence(x, y + size, size);
                    isOk = false;
                    break;
                }
            }
            if (!isOk) {
                break;
            }
        }
        if (isOk) {
            count[base]++;
        }

    }

}

