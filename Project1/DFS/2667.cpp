#include <iostream>
#include <stdio.h>
#include <queue>
#include <stack>
#include <algorithm>

#define MAX_SIZE 25

using namespace std;

// 위, 오른, 아래, 왼
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int n; // 행과 열의 수
int group_id; 
int groups[MAX_SIZE * MAX_SIZE]; 

int map[MAX_SIZE][MAX_SIZE]; 
bool visited[MAX_SIZE][MAX_SIZE]; 

int main(){
 scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            //입력을 1개씩 숫자로 끊어서 받습니다 -> %1d
            scanf("%1d", &map[i][j]);
    }

    // 전체 지도 탐색
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // 집이면서 방문하지 않았다면 -> 방문
            if(map[i][j]==1 && visited[i][j]==false){

                // 해당 지역에 단지 id를 부여하고
                group_id++;

                // 탐색
                //dfs_recursion(i, j);
                //dfs_stack(i, j);
                //bfs(i, j);
            }
        }
    }

  
    sort(groups + 1, groups + group_id + 1);

    printf("%d\n", group_id);
    for (int i = 1; i <= group_id; i++) {
        printf("%d\n", groups[i]);
    }

}




/*
#define MAX_SIZE 25

using namespace std;

// 위, 오른, 아래, 왼
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int n; // 행과 열의 수
int group_id; // 단지의 번호로 첫번째 단지부터 1로 시작
int groups[MAX_SIZE * MAX_SIZE]; // 각 단지별 집의 수

int map[MAX_SIZE][MAX_SIZE]; // 지도
bool visited[MAX_SIZE][MAX_SIZE]; // 방문했는지를 표시하는 지도

// DFS - Recursion
void dfs_recursion(int x, int y) {

    // 함수에 들어왔으면 -> 방문으로 표시
    visited[x][y] = true;
    // 해당 단지의 집의 수를 증가시킴
    groups[group_id]++;

    // 해당 위치의 주변을 확인
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        // 지도를 벗어나지 않고
        if(0 <= nx && nx < n && 0 <= ny && ny < n){
            // 집이면서 방문하지 않았다면 -> 방문
            if(map[nx][ny] == 1 && visited[nx][ny] == false){
                dfs_recursion(nx, ny);
            }
        }
    }
}

// DFS - Stack
void dfs_stack(int x, int y) {

    stack< pair<int,int> > s; // 이용할 스택, (x,y) -> (행, 열)
    s.push(make_pair(x,y)); // pair를 만들어서 stack에 넣습니다.

    // 처음 x,y를 방문 했기때문에
    visited[x][y] = true;
    groups[group_id]++;

    while(!s.empty()){

        // 스택의 top 원소 꺼내기
        x = s.top().first;
        y = s.top().second;
        s.pop();

        // 해당 위치의 주변을 확인
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            // 지도를 벗어나지 않고
            if(0 <= nx && nx < n && 0 <= ny && ny < n){
                // 집이면서 방문하지 않았다면 -> 방문
                if(map[nx][ny] == 1 && visited[nx][ny] == false){
                    visited[nx][ny]=true;

                    // 해당 단지의 집의 수를 증가시킴
                    groups[group_id]++;

                    s.push(make_pair(x,y)); // push하는 경우이기 때문에 현재 위치도 넣어준다.
                    s.push(make_pair(nx,ny)); // 스택에 현재 nx,ny도 푸시
                }
            }
        }   
    }
}

// BFS
void bfs(int x, int y){

    queue< pair<int,int> > q; // 이용할 큐, (x,y) -> (행, 열)
    q.push(make_pair(x,y)); // pair를 만들어서 queue에 넣습니다.

    // 처음 x,y를 방문 했기때문에
    visited[x][y] = true;
    groups[group_id]++;  

    while(!q.empty()){

        // 큐의 현재 원소를 꺼내기
        x = q.front().first;
        y = q.front().second;
        q.pop();

        // 해당 위치의 주변을 확인
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            // 지도를 벗어나지 않고
            if(0 <= nx && nx < n && 0 <= ny && ny < n){
                // 집이면서 방문하지 않았다면 -> 방문
                if(map[nx][ny] == 1 && visited[nx][ny] == false){
                    visited[nx][ny]=true;

                    // 해당 단지의 집의 수를 증가시킴
                    groups[group_id]++;

                    // 큐에 현재 nx,ny를 추가
                    q.push(make_pair(nx,ny));   
                }
            }
        }
    }
}

int main (){

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            //입력을 1개씩 숫자로 끊어서 받습니다 -> %1d
            scanf("%1d", &map[i][j]);
    }

    // 전체 지도 탐색
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // 집이면서 방문하지 않았다면 -> 방문
            if(map[i][j]==1 && visited[i][j]==false){

                // 해당 지역에 단지 id를 부여하고
                group_id++;

                // 탐색
                //dfs_recursion(i, j);
                //dfs_stack(i, j);
                //bfs(i, j);
            }
        }
    }

    // 단지마다 집들의 수로 오름차순 정렬
    // ID는 1부터 시작
    // 함수 사용법 : https://twpower.github.io/71-use-sort-and-stable_sort-in-cpp
    sort(groups + 1, groups + group_id + 1);

    printf("%d\n", group_id);
    for (int i = 1; i <= group_id; i++) {
        printf("%d\n", groups[i]);
    }
}
*/