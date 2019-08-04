/*


그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.
입력

첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 둘째줄부터 N개의 줄에 단어가 들어온다. 단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.
출력

첫째 줄에 그룹 단어의 개수를 출력한다.
예제 입력

3
happy
new
year

예제 출력

3

*/


/*
 * 틀린 테케가 존재함...
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
                cout<<"이거 아니다"<<endl;
                num--;
                break;
            }
            else{
            }
        }

        
    }

    cout <<num;
}*/
//위에꺼는 틀린 테스트 케이스가 존재함...(수정을 못하겠다..)
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
