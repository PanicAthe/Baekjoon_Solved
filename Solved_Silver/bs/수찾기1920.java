import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr);

        int m = sc.nextInt();

        for(int i = 0; i < m; i++) {
            int target = sc.nextInt();
            int left = 0;
            int right = n - 1;
            int mid = 0;
            boolean flag = false;
            while(left <= right) {
                mid = (left + right) / 2;
                if(arr[mid] == target) {
                    System.out.println(1);
                    flag = true;
                    break;
                }else if(arr[mid] < target) {
                    left = mid + 1;
                }else {
                    right = mid - 1;
                }
            }
            if(!flag) {
                System.out.println(0);
            }
        }

    }

}
