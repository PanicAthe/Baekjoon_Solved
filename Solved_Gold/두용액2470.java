package Solved_Gold;
import java.util.Arrays;
import java.util.Scanner;

public class 두용액2470 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // N: 용액의 수
        int N = sc.nextInt();
        int[] liquids = new int[N];

        for (int i = 0; i < N; i++) {
            liquids[i] = sc.nextInt();
        }

        Arrays.sort(liquids);

        int left = 0;
        int right = N - 1;
        int minSum = Integer.MAX_VALUE;
        int bestLeft = liquids[left];
        int bestRight = liquids[right];

        while (left < right) {
            int sum = liquids[left] + liquids[right];

            if (Math.abs(sum) < minSum) {
                minSum = Math.abs(sum);
                bestLeft = liquids[left];
                bestRight = liquids[right];
            }

            if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }

        // 결과 출력
        System.out.println(bestLeft + " " + bestRight);

        sc.close();
    }
}
