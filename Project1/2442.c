/*
 *
 
문제

첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2*N-1개를 찍는 문제

별은 가운데를 기준으로 대칭이어야 한다.
입력

첫째 줄에 N (1<=N<=100)이 주어진다.
출력

첫째 줄부터 N번째 줄 까지 차례대로 별을 출력한다.
예제 입력 1

5

예제 출력 1

    *
   ***
  *****
 *******
*********


 *
 */


#include<iostream>

int main(){
    int a,b,c=1;

    std::cin >> a;
    b=a-1;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            std::cout<<" ";
        }
        for(int k=0; k<c; k++){
            std::cout <<"*";
        }
        c=c+2;
        b--;
        std::cout <<std::endl;
    }

}
