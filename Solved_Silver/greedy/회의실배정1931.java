package Solved_Silver.greedy;

import java.util.*;

public class 회의실배정1931 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[][] meetings = new int[n][2];

        // 입력 받기
        for (int i = 0; i < n; i++) {
            meetings[i][0] = sc.nextInt(); // 시작 시간
            meetings[i][1] = sc.nextInt(); // 종료 시간
        }

        // 회의 종료 시간 기준으로 오름차순 정렬 (같은 경우 시작 시간 기준 오름차순)
        Arrays.sort(meetings, (a, b) -> {
            if (a[1] == b[1]) { //종료 시간이 같다면
                return a[0] - b[0]; // a가 더 작다면 그대로 a, b순서
            }
            return a[1] - b[1];
        });

        // 그리디 알고리즘을 사용하여 최대 회의 개수 찾기
        int count = 0;
        int endTime = 0;

        for (int i = 0; i < n; i++) {
            if(meetings[i][0]>=endTime){
                endTime = meetings[i][1];
                count ++;
            }
        }

        System.out.println(count);
    }
}
