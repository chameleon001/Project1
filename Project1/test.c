#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1,str2;

    cin >>str1>>str2;

    if((int)str1.at(2)>(int)str2.at(2)){
        cout <<str1.at(2)<<str1.at(1)<<str1.at(0);
    }else if((int)str1.at(2)<(int)str2.at(2)){
        cout <<str2.at(2)<<str2.at(1)<<str2.at(0);
    }else{
        if((int)str1.at(1)>(int)str2.at(1)){ 

        cout <<str1.at(2)<<str1.at(1)<<str1.at(0);
        }else if((int)str1.at(1)<(int)str2.at(1)){
        
        cout <<str2.at(2)<<str2.at(1)<<str2.at(0);
        }else{
            if((int)str1.at(0)>(int)str2.at(0)){ 
                
        cout <<str1.at(2)<<str1.at(1)<<str1.at(0);
            }else if((int)str1.at(0)<(int)str2.at(0)){
                
        cout <<str2.at(2)<<str2.at(1)<<str2.at(0);
            }
            
        }
    }
}
