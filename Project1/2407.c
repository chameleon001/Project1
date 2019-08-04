/*
nCm을 출력한다.
입력

n과 m이 주어진다. (5 ≤ n ≤ 100, 5 ≤ m ≤ 100, m ≤ n)
출력

nCm을 출력한다.
예제 입력

100 6

예제 출력

1192052400
*/

#include<iostream>

int main(){
    int a=0;
    int b=0;
    double c=1;
    double d=1;
    int cc=0;
    std::cin >>a>>b;
cc=b;
    for(int i=0; i<cc; i++){
        c*=a--;
        d*=b--;
    }

    std::cout << c<<"aaa"<<d<<std::endl;
    std::cout << (c/d)<<"aaa"<<(int)(c%d);
}
