/*

������ �����ϴ� ������ ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� �ټ� �����̴�.

    push X: ���� X�� ���ÿ� �ִ� �����̴�.
    pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
    size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
    empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
    top: ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

�Է�

ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.
���

����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
���� �Է�

14
push 1
push 2
top
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
top

���� ���

2
2
0
2
1
-1
0
1
-1
0
3

*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    string push = "push";
    string pop = "pop";
    string size = "size";
    string empty = "empty";
    string top = "top";


    int a;
    int b;
    int arr[10000];
    int up=0;
    arr[up]=-1;
    cin >> a;

    for(int i=0; i<a; i++){
        cin >> str;

        if(str.compare(push)==0){
            cin >>b;
            up++;
            arr[up] = b;
        }else if(str.compare(pop)==0){
            cout << arr[up]<<endl;
            arr[up] = -1;
            if(up!=0)up--;
        }else if(str.compare(size)==0){
            cout << up<<endl;
        }else if(str.compare(empty)==0){
            if(up==0){
                cout <<1<<endl;
            }else if(up!=0){
                cout <<0<<endl;
            }
        }else if(str.compare(top)==0){
            cout << arr[up]<<endl;
        }
    }
}

//�ð� 0�̽ź�..
//s[999],p;main(){for(char b[15];gets(b);)*b<58?0:b[1]-'u'?printf("%d ",*b-'p'?*b-'s'?*b-'e'?p?s[p-1]:-1:!p:p:p?s[--p]:-1):sscanf(b,"%*s%d",s+p++);}
