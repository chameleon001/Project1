/*
 

다솜이는 은진이의 옆집에 새로 이사왔다. 다솜이는 자기 방 번호를 예쁜 플라스틱 숫자로 문에 붙이려고 한다.

다솜이의 옆집에서는 플라스틱 숫자를 한 세트로 판다. 한 세트에는 0번부터 9번까지 숫자가 하나씩 들어있다. 다솜이의 방 번호가 주어졌을 때, 필요한 세트의 개수의 최소값을 출력하시오. (6은 9를 뒤집어서 이용할 수 있고, 9는 6을 뒤집어서 이용할 수 있다.)
입력

첫째 줄에 다솜이의 방 번호 N이 주어진다. N은 1,000,000보다 작거나 같은 자연수 또는 0이다.
출력

첫째 줄에 필요한 세트의 개수를 출력한다.
예제 입력

9999

예제 출력

2
 */

#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
 
int main(void){
    string str;
    cin >> str;
            
    int arr[10] = {0};
 
    for(int i=0; i< str.size(); i++){
        arr[str[i] - '0']++;
    }
 
    int num =0;
    for(int i=0; i< 10; i++){
        if(i!=9 && i!=6) num = max(num, arr[i]);
    }
    
    cout << max(num, (arr[6] + arr[9] + 1) /2);
    return 0;    
}
/*

#include<iostream>
#include<algorithm> 
using namespace std;
 
int main(void){
    int n;
    cin >> n;
            
    int arr[10] = {0};
 
    while(true){
        arr[n%10]++;
        if(n/10 == 0) break;
        n/=10;    
    }
 
    int num =0;
    for(int i=0; i< 10; i++){
        if(i!=9 && i!=6) num = max(num, arr[i]);
    }
    
    cout << max(num, (arr[6] + arr[9] + 1) /2);
    return 0;    
}
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
 
int main(void){
    int n;
    cin >> n;
    
    //map 선언 Key 는 숫자, value는 그 숫자의 갯수.
    map<int, int> m;
    map<int, int>::iterator iter;    //반복자 선언 
    
    while(1){
 
        if((iter = m.find(n%10)) != m.end()){    //존재하면. 
            iter->second += 1;
        }else{
            m.insert(pair<int, int>(n%10, 1));
        }
        
        if(n / 10 == 0) break; 
        
        n /= 10; //1의 자리를 없앤다. 
    }
    
    int num =0;
    for(iter = m.begin(); iter != m.end(); iter++){
        if(iter->first != 6 && iter->first != 9)
            num = max(num, iter->second);
    }
    int tmp = (m.find(6)->second + m.find(9)->second + 1) / 2;
        
    cout << max(num, tmp);
    return 0;    
}

*/

/*
#include<iostream>
#include<algorithm> 
using namespace std;
 
int main(void){
    int n;
    cin >> n;
            
    int arr[10] = {0};
 
    while(true){
        arr[n%10]++;
        if(n/10 == 0) break;
        n/=10;    
    }
 
    int num =0;
    for(int i=0; i< 10; i++){
        if(i!=9 && i!=6) num = max(num, arr[i]);
    }
    
    cout << max(num, (arr[6] + arr[9] + 1) /2);
    return 0;    
}
 */
