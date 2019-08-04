/*


예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 따라서, 다음과 같이 크로아티아 알파벳을 다음과 같이 변경해서 입력했다.
크로아티아 알파벳 	변경
? 	                c=
?               	c-
d? 	                dz=
n               	d-
lj 	                lj
nj              	nj
?               	s=
?               	z=

 

예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, ?, nj, a, k)로 이루어져 있다.

단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

 
입력

첫째 줄에 최대 100글자의 단어가 주어진다. 알파벳 소문자와 '-', '='로만 이루어져 있다.

문제 설명에 나와있는 크로아티아 알파벳만 주어진다.
출력

입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.
예제 입력

ljes=njak

예제 출력

6

예제 입력 3

ddz=z=

예제 출력 3

3

예제 입력 4

nljj

예제 출력 4

3

예제 입력 5

c=c=

예제 출력 5

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
                //string::npos => string::find를 통하여 원하는 단어나 문장을 검색후 원하는 값의 유무를 알수있음.
                //찾는 단어나 문자열이 없을경우 string::npos를 리턴해줌..
            {
                str.erase(pos, del.length());
                str.insert(pos, star);
            }
        }
    }
 
    cout << str.size() << endl;
 
    return 0;
}


