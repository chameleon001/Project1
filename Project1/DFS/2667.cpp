#include <iostream>
#include <stdio.h>
#include <queue>
#include <stack>
#include <algorithm>

#define MAX_SIZE 25

using namespace std;

// ��, ����, �Ʒ�, ��
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int n; // ��� ���� ��
int group_id; 
int groups[MAX_SIZE * MAX_SIZE]; 

int map[MAX_SIZE][MAX_SIZE]; 
bool visited[MAX_SIZE][MAX_SIZE]; 

int main(){
 scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            //�Է��� 1���� ���ڷ� ��� �޽��ϴ� -> %1d
            scanf("%1d", &map[i][j]);
    }

    // ��ü ���� Ž��
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // ���̸鼭 �湮���� �ʾҴٸ� -> �湮
            if(map[i][j]==1 && visited[i][j]==false){

                // �ش� ������ ���� id�� �ο��ϰ�
                group_id++;

                // Ž��
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

// ��, ����, �Ʒ�, ��
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int n; // ��� ���� ��
int group_id; // ������ ��ȣ�� ù��° �������� 1�� ����
int groups[MAX_SIZE * MAX_SIZE]; // �� ������ ���� ��

int map[MAX_SIZE][MAX_SIZE]; // ����
bool visited[MAX_SIZE][MAX_SIZE]; // �湮�ߴ����� ǥ���ϴ� ����

// DFS - Recursion
void dfs_recursion(int x, int y) {

    // �Լ��� �������� -> �湮���� ǥ��
    visited[x][y] = true;
    // �ش� ������ ���� ���� ������Ŵ
    groups[group_id]++;

    // �ش� ��ġ�� �ֺ��� Ȯ��
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        // ������ ����� �ʰ�
        if(0 <= nx && nx < n && 0 <= ny && ny < n){
            // ���̸鼭 �湮���� �ʾҴٸ� -> �湮
            if(map[nx][ny] == 1 && visited[nx][ny] == false){
                dfs_recursion(nx, ny);
            }
        }
    }
}

// DFS - Stack
void dfs_stack(int x, int y) {

    stack< pair<int,int> > s; // �̿��� ����, (x,y) -> (��, ��)
    s.push(make_pair(x,y)); // pair�� ���� stack�� �ֽ��ϴ�.

    // ó�� x,y�� �湮 �߱⶧����
    visited[x][y] = true;
    groups[group_id]++;

    while(!s.empty()){

        // ������ top ���� ������
        x = s.top().first;
        y = s.top().second;
        s.pop();

        // �ش� ��ġ�� �ֺ��� Ȯ��
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            // ������ ����� �ʰ�
            if(0 <= nx && nx < n && 0 <= ny && ny < n){
                // ���̸鼭 �湮���� �ʾҴٸ� -> �湮
                if(map[nx][ny] == 1 && visited[nx][ny] == false){
                    visited[nx][ny]=true;

                    // �ش� ������ ���� ���� ������Ŵ
                    groups[group_id]++;

                    s.push(make_pair(x,y)); // push�ϴ� ����̱� ������ ���� ��ġ�� �־��ش�.
                    s.push(make_pair(nx,ny)); // ���ÿ� ���� nx,ny�� Ǫ��
                }
            }
        }   
    }
}

// BFS
void bfs(int x, int y){

    queue< pair<int,int> > q; // �̿��� ť, (x,y) -> (��, ��)
    q.push(make_pair(x,y)); // pair�� ���� queue�� �ֽ��ϴ�.

    // ó�� x,y�� �湮 �߱⶧����
    visited[x][y] = true;
    groups[group_id]++;  

    while(!q.empty()){

        // ť�� ���� ���Ҹ� ������
        x = q.front().first;
        y = q.front().second;
        q.pop();

        // �ش� ��ġ�� �ֺ��� Ȯ��
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            // ������ ����� �ʰ�
            if(0 <= nx && nx < n && 0 <= ny && ny < n){
                // ���̸鼭 �湮���� �ʾҴٸ� -> �湮
                if(map[nx][ny] == 1 && visited[nx][ny] == false){
                    visited[nx][ny]=true;

                    // �ش� ������ ���� ���� ������Ŵ
                    groups[group_id]++;

                    // ť�� ���� nx,ny�� �߰�
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
            //�Է��� 1���� ���ڷ� ��� �޽��ϴ� -> %1d
            scanf("%1d", &map[i][j]);
    }

    // ��ü ���� Ž��
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // ���̸鼭 �湮���� �ʾҴٸ� -> �湮
            if(map[i][j]==1 && visited[i][j]==false){

                // �ش� ������ ���� id�� �ο��ϰ�
                group_id++;

                // Ž��
                //dfs_recursion(i, j);
                //dfs_stack(i, j);
                //bfs(i, j);
            }
        }
    }

    // �������� ������ ���� �������� ����
    // ID�� 1���� ����
    // �Լ� ���� : https://twpower.github.io/71-use-sort-and-stable_sort-in-cpp
    sort(groups + 1, groups + group_id + 1);

    printf("%d\n", group_id);
    for (int i = 1; i <= group_id; i++) {
        printf("%d\n", groups[i]);
    }
}
*/