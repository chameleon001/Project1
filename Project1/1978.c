/*
 

�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù �ٿ� ���� ���� N�� �־�����. N�� 100�����̴�. �������� N���� ���� �־����µ� ���� 1,000 ������ �ڿ����̴�.
���

�־��� ���� �� �Ҽ��� ������ ����Ѵ�.
���� �Է�

4
1 3 5 7

���� ���

3

*/

#include<iostream>
using namespace std;

int main(){
    int a;
    int arr[1000]={0,};
    int count =0;
    cin >> a;

    for(int i=0; i<a; i++){
        cin >>arr[i];
    }

    for(int i=0; i<a; i++){
        if(arr[i]!=1&&(arr[i]==2||arr[i]==3)){
            count++;
        }
        else if(arr[i]!=1&&(arr[i]%2!=0&&arr[i]%3!=0)){
            count++;
        }
    }
    cout <<count;
}

// Ʋ�� ���ɸ� ��ã�ڴ�..
//
/*
 #include<stdio.h>

int main()
{
	int n, cnt = 0, p;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &p);
		if(p>=2){
			int flag = 1;
			for(int i = 2; i*i<=p; i++)
				if(p%i == 0)
					flag = 0;
			cnt += flag;
		}
	}
	printf("%d", cnt);
	return 0;
}
 */
// �̺� ���ް� �ʹ�..
// s;i;main(n){for(gets(&n);~scanf("%d",&n);s+=i==n)for(i=2;i<n&&n%i++;);printf("%d",s);}
// �̺е�.. main(n,a,i,t,k){scanf("%d",&n);for(k=0;n--;){scanf("%d",&a);t=a==1?0:1;for(i=2;i<a;i++)if(a%i==0)t=0;k+=t;}printf("%d",k);}

/*
 #include <stdio.h>
 
int main(void){
 
    int num;
    int numbers[1000];
    int count = 0;
    scanf("%d", &num);
 
    for (int i = 0; i < num; i++)
        scanf("%d", &numbers[i]);
 
 
    for (int i = 0; i < num; i++){
        int divNum = 1;
 
        if (numbers[i] == 1)
        {
            count++;
            continue;
        }
 
        while (divNum*divNum<=numbers[i]){
            if (divNum == 1) {
                divNum++;
                continue;
            }
            if (numbers[i] % divNum == 0)
            {
                count++;
                break;
            }
            divNum++;
        }
    }
 
    printf("%d\n", num-count);
 
 
    return 0;
}
*/
