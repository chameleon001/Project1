/*
��ȣ ���ڿ�(Parenthesis String, PS)�� �� ���� ��ȣ ��ȣ�� ��(�� �� ��)�� ������ �����Ǿ� �ִ� ���ڿ��̴�. �� �߿��� ��ȣ�� ����� �ٸ��� ������ ���ڿ��� �ùٸ� ��ȣ ���ڿ�(Valid PS, VPS)�̶�� �θ���. �� ���� ��ȣ ��ȣ�� �� ��( )�� ���ڿ��� �⺻ VPS �̶�� �θ���. ���� x �� VPS ��� �̰��� �ϳ��� ��ȣ�� ���� ���ο� ���ڿ� ��(x)���� VPS �� �ȴ�. �׸��� �� VPS x �� y�� ����(concatenation)��Ų ���ο� ���ڿ� xy�� VPS �� �ȴ�. ���� ��� ��(())()���� ��((()))�� �� VPS ������ ��(()(��, ��(())()))�� , �׸��� ��(()�� �� ��� VPS �� �ƴ� ���ڿ��̴�. 

�������� �Է����� �־��� ��ȣ ���ڿ��� VPS ���� �ƴ����� �Ǵ��ؼ� �� ����� YES �� NO �� ��Ÿ����� �Ѵ�. 
�Է�

�Է� �����ʹ� ǥ�� �Է��� ����Ѵ�. �Է��� T���� �׽�Ʈ �����ͷ� �־�����. �Է��� ù ��° �ٿ��� �Է� �������� ���� ��Ÿ���� ���� T�� �־�����. �� �׽�Ʈ �������� ù° �ٿ��� ��ȣ ���ڿ��� �� �ٿ� �־�����. �ϳ��� ��ȣ ���ڿ��� ���̴� 2 �̻� 50 �����̴�. 
���

����� ǥ�� ����� ����Ѵ�. ���� �Է� ��ȣ ���ڿ��� �ùٸ� ��ȣ ���ڿ�(VPS)�̸� ��YES��, �ƴϸ� ��NO���� �� �ٿ� �ϳ��� ���ʴ�� ����ؾ� �Ѵ�. 
���� �Է�

6
(())())
(((()())()
(()())((()))
((()()(()))(((())))()
()()()()(()()())()
(()((())()(

���� ���

NO
NO
YES
NO
YES
NO
*/

#include<stdio.h>

int main(){
    int a;
    char arr[50];
    int counta=0;
    scanf("%d",&a);

    for(int i=0; i<a; i++){
        scanf("%s",arr);

        for(int j=0; j<51; j++){
            if(arr[j]=='\0'){
                break;
            }
            else if(arr[j]=='('){
                counta++;
            }else if(arr[j]==')' && counta>0){
                counta--;
            }else if(arr[j]==')' && counta<=0){
                counta--;
                break;
            }
        }
        if(counta==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        counta=0;
    }
}

/*
 #include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){

 string input;
 bool isInvalid = false;
 char temp;
 stack<char> parenthesis;
 cin >> input;
 for(int i=0; i<input.size(); i++){
  temp = input[i];
  if(temp == ')'){
   if(parenthesis.empty()){
    isInvalid = true;
    break;
   }
   else parenthesis.pop();
  }
  else parenthesis.push(temp);
 }
 if(isInvalid) cout << "�߸��� ��ȣ���Դϴ�." << endl;
 else if(!parenthesis.empty()) cout << "�߸��� ��ȣ���Դϴ�." << endl;
 else cout << "�ùٸ� ��ȣ���Դϴ�." << endl;

 return 0;
}

 */
