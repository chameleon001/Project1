/*
M�̻� N������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �ڿ��� M�� N�� �� ĭ�� ���̿� �ΰ� �־�����. (1��M��N��1,000,000)
���

�� �ٿ� �ϳ���, �����ϴ� ������� �Ҽ��� ����Ѵ�.
���� �Է�

3 16

���� ���

3
5
7
11
13
�������׳׽���ü �̿�.
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
