/*


�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�. ���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.

�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �ܾ��� ���� N�� ���´�. N�� 100���� �۰ų� ���� �ڿ����̴�. ��°�ٺ��� N���� �ٿ� �ܾ ���´�. �ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.
���

ù° �ٿ� �׷� �ܾ��� ������ ����Ѵ�.
���� �Է�

3
happy
new
year

���� ���

3

*/


/*
 * Ʋ�� ���ɰ� ������...
 *  
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int a;
    int num;
    int arr[999]={0,};
    int count =0;
    int flag =0;

    int c = 0,d=0;
    cin >> a;
    num =a;
    for(int i =0; i<a; i++){
        cin >>str;
        for(int j=0; j<str.size();j++){
            c=(int)str.at(j);
            if(j+1!=str.size())d=(int)str.at(j+1);
            if(c==d){
            }else{
            arr[(int)str.at(j)]++;
            }
        }

        for(int k=97; k<123; k++){
            if(arr[k]>=2){
                cout<<"�̰� �ƴϴ�"<<endl;
                num--;
                break;
            }
            else{
            }
        }

        
    }

    cout <<num;
}*/
//�������� Ʋ�� �׽�Ʈ ���̽��� ������...(������ ���ϰڴ�..)
//
//
//
#include<stdio.h>
#include<string.h>
int n, p[200], res;
char str[101];
int main() {
    scanf("%d", &n);
    res = n;
    for (int i = 0; i < n; i++) {
        memset(p, -1, sizeof(p));
        scanf("%s", str);
        for (int j = 0; str[j]; j++)
            if (p[str[j]] == -1 || p[str[j]] == j - 1) p[str[j]] = j;
            else { res--; break; }
    }
    printf("%d", res);
    return 0;
}
