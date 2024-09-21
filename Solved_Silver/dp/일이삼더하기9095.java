package Solved_Silver;

import java.util.Scanner;

public class 일이삼더하기9095 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] list = new int[11];
        list[1] = 1;
        list[2] = 2;
        list[3] = 4;

        for(int i=4; i<11; i++){
            list[i] = list[i-1] + list[i-2] + list[i-3];
        }

        int T = sc.nextInt();
        int q = 0;
        for (int i = 0; i < T; i++) {
            q = sc.nextInt();
            System.out.println(list[q]);
        }


    }
}
