#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    /*
        String에 대해 공부하셨던 분들은 ctrl + f를 통해
        검색을 하시면 좀더 편하게 함수 기능에 대한 예시를
        찾을 수 있습니다.
    */
 
    // 선언과 동시에 문자 대입
    cout << "string a = \"hello\"" << endl;
    string a = "hello";
    cout << a << endl <<  endl;
    
    // 선언 후 문자 대입
    // 여기서 b = "~"이렇게 하면 초기화이고, b += "~"이렇게 하면 추가 대입이다.
    cout << "string b; b = \"world\"" << endl;
    string b;
    b = "world";
    cout << b << endl << endl;
 
    cout << "b += \"you are in Crocus now\"" << endl;
    b += "  you are in Crocus now";
    cout << b << endl << endl;
 
    // 추가 대입 방법 (2) << 이 방식이 += 보다 속도면에서 더 빠르다. >>
    b.append(" Good Bye !");
    cout << "b.append(\" Good Bye !\");" << endl << endl;
    cout << b << endl << endl;
 
 
    // 두 스트링 합치기
    cout << "string c = a + b;" << endl;
    string c = a + b;
    cout << c << endl << endl;
 
 
    // 스트링 초기화 시키기
    cout << "c.assign(10,1);" << endl;
    c.assign(10, '1');
    cout << c << endl << endl;
 
    // 스트링 삭제
    cout << "c.clear();" << endl;
    c.clear();
    cout << "String c 의 내용 :: " << c << endl << endl;
 
    // 스트링에서 문자열 찾기
    cout << "b.find(\"Crocus\")" << endl;
    cout << b.find("Crocus") << "번째부터 Crocus의 C가 시작합니다. " << endl << endl;
 
    // 스트링에서 특정 부분 지우기
    // erase(시작점, 시작점에서 몇개 지우고싶나?);
    // 예를들어 b.erase(2,3)이면 b[2] ~ b[4] 까지 지운다.
    cout << "지워질 대상 :: " << b[2] << b[3] << b[4]<< endl << endl;
    b.erase(2, 3);
    cout << "지워진 후 :: " <<  b << endl << endl;
 
    // a 스트링 길이 구하기
    cout << "a.length() :: " << a.length() << endl << endl;
 
    // a와 b 문자열 서로 바꾸기
    cout << "swap(b,a);" << endl;
    swap(b, a);
    cout << "b :: " + b + "  a :: " + a << endl << endl;
 
    // 부분 문자열 추출
    // substr(a,b)로 지정하면 a부터시작해서 b가지를 보여준다.
    // 예시를 보면 0,3은 d[0], d[1], d[2]를 보여준다.
    cout << "string d = b.substr(0,2);" << endl;
    string d = b.substr(0, 3);
    cout << d << endl << endl;
 
    return 0;
}
//http://www.crocus.co.kr/503
