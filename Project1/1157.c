/*

���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. ��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.
�Է�

ù° �ٿ� ���ĺ� ��ҹ��ڷ� �̷���� �ܾ �־�����. �־����� �ܾ��� ���̴� 1,000,000�� ���� �ʴ´�.
���

ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����Ѵ�. ��, ���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ?�� ����Ѵ�.
���� �Է�

Mississipi

���� ���

?
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    int arr[999]={0,};
    int max = -1;
    int max_key = 0;
    int flag =0;
    string str;

    cin >> str;

    for(int i =0; i<str.size();i++){
        arr[(int)str.at(i)]++;
    }
    for(int i = 65; i <91; i++){
        arr[i] +=arr[i+32];
        if(arr[i]==max){
            flag = 1;

        }
        if(arr[i]>max){
            max = arr[i];
            max_key =i;
            flag = 0;
        }
    }
    if(flag==1){cout <<"?"<<endl;}else{cout<<(char)max_key<<endl;}
}
