/*


�������� �ü������ ũ�ξ�Ƽ�� ���ĺ��� �Է��� ���� ������. ����, ������ ���� ũ�ξ�Ƽ�� ���ĺ��� ������ ���� �����ؼ� �Է��ߴ�.
ũ�ξ�Ƽ�� ���ĺ� 	����
? 	                c=
?               	c-
d? 	                dz=
n               	d-
lj 	                lj
nj              	nj
?               	s=
?               	z=

 

���� ���, ljes=njak�� ũ�ξ�Ƽ�� ���ĺ� 6��(lj, e, ?, nj, a, k)�� �̷���� �ִ�.

�ܾ �־����� ��, �� ���� ũ�ξ�Ƽ�� ���ĺ����� �̷���� �ִ��� ����Ѵ�.

 
�Է�

ù° �ٿ� �ִ� 100������ �ܾ �־�����. ���ĺ� �ҹ��ڿ� '-', '='�θ� �̷���� �ִ�.

���� ���� �����ִ� ũ�ξ�Ƽ�� ���ĺ��� �־�����.
���

�Է����� �־��� �ܾ �� ���� ũ�ξ�Ƽ�� ���ĺ����� �̷���� �ִ��� ����Ѵ�.
���� �Է�

ljes=njak

���� ���

6

���� �Է� 3

ddz=z=

���� ��� 3

3

���� �Է� 4

nljj

���� ��� 4

3

���� �Է� 5

c=c=

���� ��� 5

2

*/

#include <iostream>
#include <cstdio>
#include <string>
 
using namespace std;
 
string str;
int main() 
{
    cin >> str;
    int pos = 0;
 
    string croatia[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
    string del;
    string star = "*";
 
    for (int i = 0; i < 8; i++) 
    {
        del= croatia[i];
 
        if (str.find(del) != string::npos) 
        {
            while ((pos = str.find(del)) != string::npos)
                //string::npos => string::find�� ���Ͽ� ���ϴ� �ܾ ������ �˻��� ���ϴ� ���� ������ �˼�����.
                //ã�� �ܾ ���ڿ��� ������� string::npos�� ��������..
            {
                str.erase(pos, del.length());
                str.insert(pos, star);
            }
        }
    }
 
    cout << str.size() << endl;
 
    return 0;
}


