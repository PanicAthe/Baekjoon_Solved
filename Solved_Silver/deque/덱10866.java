package Solved_Silver.deque;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;

public class 덱10866 {

    public static void main(String[] args) {
        Deque<Integer> dq = new ArrayDeque<>();

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            String input = sc.next();
            switch (input) {
                case "push_back" -> {
                    dq.addLast(sc.nextInt());
                    break;
                }
                case "push_front" -> {
                    dq.addFirst(sc.nextInt());
                    break;
                }
                case "front" -> {
                    if (dq.isEmpty()) {
                        System.out.println(-1);
                    } else {
                        System.out.println(dq.peekFirst());
                    }
                    break;
                }
                case "back" -> {
                    if (dq.isEmpty()) {
                        System.out.println(-1);
                    } else {
                        System.out.println(dq.peekLast());
                    }
                    break;
                }
                case "pop_back" -> {
                    if (dq.isEmpty()) {
                        System.out.println(-1);
                    } else {
                        System.out.println(dq.peekLast());
                        dq.pollLast();
                    }
                    break;
                }
                case "pop_front" -> {
                    if (dq.isEmpty()) {
                        System.out.println(-1);
                    } else {
                        System.out.println(dq.peekFirst());
                        dq.pollFirst();
                    }
                    break;
                }
                case "empty" -> {
                    if (dq.isEmpty()) {
                        System.out.println(1);
                    } else {
                        System.out.println(0);
                    }
                    break;
                }
                case "size" -> {
                    System.out.println(dq.size());
                    break;
                }
            }
        }
    }

}

