package Solved_Silver.backTracking;
import java.util.Arrays;
import java.util.Scanner;

public class N과M15666 {

    static boolean[] isUsed = new boolean[10001];
    static int[] arr;
    static int[] temp;
    static int n, m;
    static int count;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        arr = new int[n];
        temp = new int[n];
        for (int i = 0; i < n; i++) {
            int tempNum = sc.nextInt();
            if (!isUsed[tempNum]) {
                arr[i] = tempNum;
                isUsed[tempNum] = true;
            } else {
                count++;
            }
        }
        Arrays.sort(arr);
        backTrack(0, count);
    }

    static void backTrack(int k, int index) {
        if (k == m) {
            for (int i = 0; i < k; i++) {
                System.out.print(temp[i] + " ");
            }
            System.out.println();
            return;

        } else {
            for (int i = index; i < n; i++) {
                temp[k] = arr[i];
                backTrack(k + 1, i);
            }

        }

    }

}

