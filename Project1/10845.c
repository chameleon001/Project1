/*
 

정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여섯 가지이다.

    push X: 정수 X를 큐에 넣는 연산이다.
    pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    size: 큐에 들어있는 정수의 개수를 출력한다.
    empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
    front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.

입력

첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.
출력

출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.
예제 입력

15
push 1
push 2
front
back
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
front

예제 출력

1
2
2
0
1
2
-1
0
1
-1
0
3

*/

//
// 원하는 결과값은 나오지만 틀린케이스가 있나봅니다..
// 어떤 테케에서 불만족스러운건지...
//
#include <iostream>
#include <string>
using namespace std;
int bb=0;
void poparr(int arr[]){
    arr[bb]=arr[bb+1];
    if(bb>=10000){bb=0;return;}
    else{bb++;poparr(arr);}
}
int main(){
    string str;
    string push = "push";
    string pop = "pop";
    string size = "size";
    string empty = "empty";
    string front = "front";
    string back = "back";

    int a = 0;
    int b = 0;
    int arr[10000]={-1,};
    int up = 0;
    cin >> a;
    
    for(int i=0; i<a; i++){
        cin >> str;
        if(str.compare(push)==0){
            cin >> b;
            arr[up] = b;
            up++;
        }else if(str.compare(pop)==0){
            if(up!=0){
            cout << arr[0] <<endl;
            poparr(arr);
            if(up>1){arr[up]=-1;up--;}
            else if(up==1){arr[up]=-1;up--;}
            }else{
                arr[0]=-1;
                cout <<arr[0]<<endl;
            }
        }else if(str.compare(size)==0){
            cout <<up<<endl;
        }else if(str.compare(empty)==0){
            if(up==0){
                cout <<1<<endl;
            }else{
                cout <<0<<endl;
            }
        }else if(str.compare(front)==0){
            cout<<arr[0]<<endl;
        }else if(str.compare(back)==0){
           if(up>0){cout<<arr[up-1]<<endl;}
           else{cout<<-1<<endl;}
        }
    }
}

/* 큐 라이브러리 이용
#include<iostream>
#include<queue>
#include<string>
 
using namespace std;
 
int main(void){
 
    int N;
    cin >> N;
 
    queue<int> q;
    int num;
 
    for(int i=0; i<N; i++){
        string str;
        cin >> str;
 
        if(str == "push"){
            int data;
            cin >> data;
            q.push(data);
 
        }else if(str == "pop"){
 
            if(q.size() != 0){
                num = q.front();
                q.pop();
            }else{
                num = -1;
            }
            cout << num << endl;
 
        }else if(str == "size"){
            cout << q.size() << endl;
 
        }else if(str == "empty"){
            if(q.size() == 0) num =1;
            else num =0;
            cout << num << endl;
 
        }else if(str == "front"){
            if(q.size() == 0){
                num = -1;
            }else{
                num = q.front();
            }
            cout << num << endl;
 
        }else if(str == "back"){
            if(q.size() == 0){
                num = -1;
            }else{
                num = q.back();
            }
            cout << num << endl;
        }
 
    }
    return 0;
}


출처: http://blockdmask.tistory.com/119 [개발자 지망생]
*/
