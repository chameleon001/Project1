#include<stdio.h>
#include<string.h>
int main()
{
	char name[5][10];
	int i, j, n;
	char  tmp[10];
	n = sizeof(name) / sizeof(char[10]);


	for (i = 0; i<n; i++)
	{
		scanf("%s", &name[i]);
	} // 문자열 입력

	//정렬 strcmp => 교체 strcpy

	for (i = 0; i<n - 1; i++)
	{
		for (j = 0; j<n - 1 - i; j++)
		{
			if (strcmp(name[j], name[j + 1]) > 0)
			{
				strcpy(tmp, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], tmp);
			}
		}
	}
	for (i = 0; i<n; i++)
	{
		printf(" %s \n", name[i]);
	}
	return 0;
}
