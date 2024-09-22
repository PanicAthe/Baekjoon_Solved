package Solved_Silver.greedy;

import java.util.Scanner;

public class 동전ZERO11047 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int sum = 0;
        for(int i = n-1; i >= 0; i--) {
            if(arr[i] <= k){
                int temp = k/arr[i];
                sum += temp;
                k -= arr[i]*temp;
                if(k==0) break;
            }
        }

        System.out.println(sum);

    }
}
