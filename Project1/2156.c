/*

ȿ�ִ� ������ �ý�ȸ�� ����. �� ���� ������, ���̺� ���� �پ��� �����ְ� ����ִ� ������ ���� �Ϸķ� ���� �־���. ȿ�ִ� ������ �ý��� �Ϸ��� �ϴµ�, ���⿡�� ������ ���� �� ���� ��Ģ�� �ִ�.

   1. ������ ���� �����ϸ� �� �ܿ� ����ִ� �����ִ� ��� ���ž� �ϰ�, ���� �Ŀ��� ���� ��ġ�� �ٽ� ���ƾ� �Ѵ�.
   2. �������� ���� �ִ� 3���� ��� ���� ���� ����.

ȿ�ִ� �� �� �ִ� ��� ���� ���� �����ָ� ������ ���ؼ� � ������ ���� �����ؾ� ���� �����ϰ� �ִ�. 1���� n������ ��ȣ�� �پ� �ִ� n���� ������ ���� ������� ���̺� ���� ���� �ְ�, �� ������ �ܿ� ����ִ� �������� ���� �־����� ��, ȿ�ָ� ���� ���� ���� ���� �����ָ� ���� �� �ֵ��� �ϴ� ���α׷��� �ۼ��Ͻÿ�. 

���� ��� 6���� ������ ���� �ְ�, ������ �ܿ� ������� 6, 10, 13, 9, 8, 1 ��ŭ�� �����ְ� ��� ���� ��, ù ��°, �� ��°, �� ��°, �ټ� ��° ������ ���� �����ϸ� �� ������ ���� 33���� �ִ�� ���� �� �ִ�.
�Է�

ù° �ٿ� ������ ���� ���� n�� �־�����. (1��n��10,000) ��° �ٺ��� n+1��° �ٱ��� ������ �ܿ� ����ִ� �������� ���� ������� �־�����. �������� ���� 1,000 ������ ���� �ƴ� �����̴�.
���

ù° �ٿ� �ִ�� ���� �� �ִ� �������� ���� ����Ѵ�.
���� �Է� 1 ����

6
6
10
13
9
8
1

���� ��� 1 ����

33

 *
 */
#include<algorithm>
#include<cstdio>

int main(){
    int n;
    int arr[10001]={0,};
    int dp[10001] ={0,};
    int sum =0;

    scanf("%d",&n);

    for(int i=1; i<=n; i++) scanf("%d",arr+i);

    dp[1]=arr[1];
    dp[2]=arr[1]+arr[2];

    for(int i=3; i<=n; i++){
        dp[i] = std::max(dp[i-2]+arr[i],dp[i-3]+arr[i-1]+arr[i]);
        dp[i] = std::max(dp[i-1],dp[i]);
        //3�������� �����ָ� ���Ǽ� ���⶧���� 13 23 12 �̷��� 3���� ���ؾ���.
        //
    }
    printf("%d",dp[n]);
}