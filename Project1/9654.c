/*
 *
 *
문제

나부 행성의 함대 정보를 출력하는 프로그램을 작성하시오.
입력
출력

나부 행성의 함대의 정보를 아래와 예제 출력과 같은 표로 출력한다.

처음 두 열의 너비는 문자 15개, 세번째 열은 11개, 마지막 열의 너비는 10개이다.
예제 입력 1

예제 출력 1

SHIP NAME      CLASS          DEPLOYMENT IN SERVICE
N2 Bomber      Heavy Fighter  Limited    21        
J-Type 327     Light Combat   Unlimited  1         
NX Cruiser     Medium Fighter Limited    18        
N1 Starfighter Medium Fighter Unlimited  25        
Royal Cruiser  Light Combat   Limited    4     

 */

#include<iostream>

int main(){
    std::cout<<"SHIP NAME      CLASS          DEPLOYMENT IN SERVICE"<<std::endl;

    std::cout<<"N2 Bomber      Heavy Fighter  Limited    21        "<<std::endl;
    std::cout<<"J-Type 327     Light Combat   Unlimited  1         "<<std::endl;
    std::cout<<"NX Cruiser     Medium Fighter Limited    18        "<<std::endl;
    std::cout<<"N1 Starfighter Medium Fighter Unlimited  25        "<<std::endl;
    std::cout<<"Royal Cruiser  Light Combat   Limited    4         "<<std::endl;
}
