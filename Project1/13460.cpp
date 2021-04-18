#include<iostream>
#include<string>

using namespace std;

int N, M;
int rx, ry, bx, by;
int hx, hy;
bool flag;
int ans = 0;

// 3<= n,m <= 10
char board[11][11];
int visited[11][11][11][11];
int dir[4][2] = { {1,0}, {0,1}, {-1,0}, {0,-1}};
int rx, ry, bx, by, hx, hy;

struct Ball{
    int x, y;
}
void input(){
    std::cin >> N >> M;

    for( int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            std::cin >> board[i][j];
            if(board[i][j] =='R'){

            }else if(board[i][j]=='B'){

            }
        }
    }
}

