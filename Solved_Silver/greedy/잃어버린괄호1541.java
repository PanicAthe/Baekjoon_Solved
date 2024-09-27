package Solved_Silver.greedy;

import java.util.Scanner;

public class 잃어버린괄호1541 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            String s = sc.nextLine().trim(); // 입력값의 앞뒤 공백 제거

            String[] subtractionParts = s.split("-"); // '-' 기준으로 나눔
            int sum = 0;

            // 첫 번째 덧셈 그룹 처리
            for (String addPart : subtractionParts[0].split("\\+")) {
                sum += Integer.parseInt(addPart);
            }

            // 이후의 덧셈 그룹들은 모두 빼야 함
            for (int i = 1; i < subtractionParts.length; i++) {
                int tempSum = 0;
                for (String addPart : subtractionParts[i].split("\\+")) {
                    tempSum += Integer.parseInt(addPart);
                }
                sum -= tempSum;
            }

            System.out.println(sum);
        } catch (Exception e) {
            e.printStackTrace(); // 예외를 출력 (디버깅 용도)
        } finally {
            sc.close(); // Scanner 닫기
        }
    }
}
