/*
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
입력

첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. (1≤M≤N≤1,000,000)
출력

한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.
예제 입력

3 16

예제 출력

3
5
7
11
13
에라스토테네스의체 이용.
*/

#include<iostream>
using namespace std;

int main(){
    int m;
    int n;
    int arr[1000001]={0,1};
    cin>>m;
    cin>>n;

    for(int i=2; i<=n; i++){
        for(int j=2; i*j<=n; j++){
            arr[i*j] =1;
        }
    }
    for(int i=m; i<=n; i++){
        if(!arr[i])cout<<i<<endl;
    }
            

}
/*
#include<stdio.h>

int main(){
    int m;
    int n;
    int arr[1000001]={0,1};
    scanf("%d%d",&m,&n);

    for(int i=2; i<=n; i++){
        for(int j=2; i*j<=n; j++){
            arr[i*j] =1;
        }
    }
    for(int i=m; i<=n; i++){
        if(!arr[i])printf("%d\n",i);
    }
}
            
*/
/*
main()
{
  int m,n,k=0;
  long long i,j;
  char che[1000001]={0};
  int prime[78499];
  scanf("%d%d",&m,&n);
  for(i=2;i<=n;i++)
  {
    if(che[i]==0)
    {
      prime[k++]=i;
      for(j=i*i;j<=n;j+=i)che[j]=1;
    }
  }
  for(i=0;i<k;i++)
  {
    if(prime[i]>=m)printf("%d\n",prime[i]);
  }
}

*/
