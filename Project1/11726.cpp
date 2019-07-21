#include <stdio.h>
using namespace std;

int main() {
	int a;
	int b[1001];
	
	scanf("%d",&a);
	b[0]=0;
	b[1]=1;
	b[2]=2;

	for(int i=3; i<=a; i++){
		b[i] = (b[i-1]+b[i-2])%10007;
	}
	printf("%d",b[a]);
	return 0;
}
