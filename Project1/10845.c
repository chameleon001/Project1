/*
 

������ �����ϴ� ť�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� ���� �����̴�.

    push X: ���� X�� ť�� �ִ� �����̴�.
    pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
    size: ť�� ����ִ� ������ ������ ����Ѵ�.
    empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
    front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
    back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

�Է�

ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.
���

����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
���� �Է�

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

���� ���

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
// ���ϴ� ������� �������� Ʋ�����̽��� �ֳ����ϴ�..
// � ���ɿ��� �Ҹ������������...
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

/* ť ���̺귯�� �̿�
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


��ó: http://blockdmask.tistory.com/119 [������ ������]
*/
