/*


���� ��ҹ��ڿ� ���⸸���� �̷���� ������ �־�����. �� ���忡�� �� ���� �ܾ ������? �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, �ܾ�� ���� �ϳ��� ���еȴٰ� �����Ѵ�.
�Է�

ù �ٿ� ���� ��ҹ��ڿ� ����� �̷���� ������ �־�����. �� ������ ���̴� 1,000,000�� ���� �ʴ´�.
���

ù° �ٿ� �ܾ��� ������ ����Ѵ�.
���� �Է�

The Curious Case of Benjamin Button

���� ���

6


*/


#include <stdio.h>

#include <string.h>


int main() {

    char arr[1000000] = " ";

    int a, b = 0, length = 0;


    gets(arr);



    length = strlen(arr);



    for (a = 0; a < length; a++) {


        if (arr[a] == ' ') b++;

    }



    if (arr[0] == ' ') {

        b--;
    }


    if (arr[length - 1] == ' ') {

        b--;
    }


    printf("%d", b+1);

}

