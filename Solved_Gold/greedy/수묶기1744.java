import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        int zeroCount = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] == 0) zeroCount++;
        }
        Arrays.sort(arr);

        long sum = 0;
        //양수 큰 수부터 두개씩 곱하기
        int i;
        for (i = n - 1; i >= 0; i--) {
            if (arr[i] == 1) { //1
                sum++;
            } else if (arr[i] > 0) { //양수
                if (i > 0) { //마지막 수는 아님
                    if (arr[i - 1] <= 1) //곱할 수가 1이랑 같거나 작음
                        sum += arr[i]; //곱하지 않고 더하기
                    else sum += arr[i--] * arr[i];
                } else {
                    sum += arr[i]; //마지막 수면 그냥 더하기
                }
            } else { // 0이거나 음수
                break;
            }
        }

        //제일 작은 음수 끼리 곱하기
        for (int j = 0; j <= i; j++) {
            if(arr[j]>=0){
                break;
            }else{
                if(j==i){ //마지막 음수, 가장 큰 음수
                    if(zeroCount<1){ //
                        sum+=arr[j];
                    }else{
                        zeroCount--;
                    }
                }else{ //마지막 음수 아님.
                    if(j+1<n){ // 다음 수가
                        if(arr[j+1]<0){
                            sum+=arr[j++]*arr[j];
                        }else if(arr[j+1]==0){
                            zeroCount--;
                        }else{
                            sum+=arr[j];
                        }
                    }
                }
            }
        }

        System.out.println(sum);
    }
}
