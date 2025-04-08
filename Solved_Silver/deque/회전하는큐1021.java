package Solved_Silver.deque;

import java.util.LinkedList;
import java.util.Scanner;

public class 회전하는큐1021 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(); // 처음 큐에 들어 있는 수 개수
        int m = sc.nextInt(); // 뽑을려는 수 개수

        LinkedList<Integer> dq = new LinkedList<>();

        for (int i = 1; i < n + 1; i++) {
            dq.addLast(i);
        }

        int count = 0;
        for (int i = 0; i < m; i++) {
            int target = sc.nextInt();
            int index = dq.indexOf(target);

            if (index > dq.size() / 2) { // 오른쪽에 가까이 있음.
                while (dq.peekFirst() != target) {
                    dq.addFirst(dq.pollLast()); // 오른쪽으로 밀기
                    count++;
                }
            } else {
                while (dq.peekFirst() != target) {
                    dq.addLast(dq.pollFirst()); // 왼쪽으로 밀기
                    count++;
                }
            }
            dq.pollFirst();
        }
        System.out.println(count);

    }

}

