package Solved_Gold.bfs;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class 빙산2573 {

    static int dx[] = { 0, 0, -1, 1 };
    static int dy[] = { 1, -1, 0, 0 };

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(); // 여백까지 포함됨.
        int m = sc.nextInt();
        int map[][] = new int[n][m];
        int iceNum = 0; // 빙산 개수

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                    sc.nextInt();
                    continue;
                } else {
                    int temp = sc.nextInt();
                    if (temp != 0) {
                        map[i][j] = temp;
                        iceNum++;
                    }
                }
            }
        }

        int year = 0;
        while (true) {
            Queue<int[]> q = new LinkedList<>();
            boolean[][] visited = new boolean[n][m];
            for (int i = 1; i < n - 1; i++) {
                for (int j = 1; j < m - 1; j++) {
                    if (map[i][j] != 0) {
                        q.offer(new int[] { i, j });
                        visited[i][j] = true;
                        break;
                    }
                }
                if (!q.isEmpty()) // 시작할 빙산 하나 고르고 for문 끝내기.
                    break;
            }

            int[][] nextMap = new int[n][m];
            int nextIceNum = 0; // 빙산 개수 업데이트
            int count = 1; // 이어진 빙산 개수
            while (!q.isEmpty()) {
                int[] cur = q.poll();
                int zeroCount = 0;
                for (int i = 0; i < 4; i++) {
                    int nx = cur[0] + dx[i];
                    int ny = cur[1] + dy[i];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;
                    if (map[nx][ny] == 0) { // 녹은 빙산
                        zeroCount++;
                    } else if (!visited[nx][ny]) { // 방문하지 않은 빙산은
                        q.offer(new int[] { nx, ny }); // 다음 이어질 빙산
                        visited[nx][ny] = true;
                        count++;
                    }
                }
                // 다음 빙산 값, 빙산 개수 업데이트
                nextMap[cur[0]][cur[1]] = Math.max(0, map[cur[0]][cur[1]] - zeroCount);
                if (nextMap[cur[0]][cur[1]] != 0) {
                    nextIceNum++;
                }
            }

            if (count != iceNum) { // 이전 빙산 개수와 검사한 빙산 개수가 틀리다면
                // 빙산 분리되었다는 뜻. 연도를 출력
                System.out.println(year);
                break;
            } else if (nextIceNum == 0) {
                System.out.println(0); // 빙산이 다 녹을 때까지 분리되지 않음.
                break;
            } else {
                iceNum = nextIceNum;
                map = nextMap;
            }
            year++;
        }

    }
}
