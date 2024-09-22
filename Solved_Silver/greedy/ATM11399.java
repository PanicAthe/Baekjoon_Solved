package Solved_Silver.greedy;

import java.util.Arrays;
import java.util.Scanner;

public class ATM11399 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] list = new int[n];

        for(int i = 0; i < n; i++) {
            list[i] = sc.nextInt();
        }

        Arrays.sort(list);

        int sum = list[0];
        for(int i = 1; i < n; i++) {
            list[i] = list[i - 1] + list[i];
            sum += list[i];
        }

        System.out.println(sum);
    }
}
