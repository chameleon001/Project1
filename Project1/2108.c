/*
수를 처리하는 것은 통계학에서 상당히 중요한 일이다. 통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다. 단, N은 홀수라고 가정하자.

    산술평균 : N개의 수들의 합을 N으로 나눈 값
    중 앙 값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
    최 빈 값 : N개의 수들 중 가장 많이 나타나는 값:
    범    위 : N개의 수들 중 최대값과 최소값의 차이

N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.
입력

첫째 줄에 수의 개수 N(1≤N≤500,000)이 주어진다. 그 다음 N개의 줄에는 정수들이 주어진다. 입력되는 정수의 절대값은 4,000을 넘지 않는다.
출력

첫째 줄에는 산술평균을 출력한다. 소수점 이하 첫째 자리에서 반올림한 값을 출력한다.

둘째 줄에는 중앙값을 출력한다.

셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.

넷째 줄에는 범위를 출력한다.
예제 입력

5
1
3
8
-2
2

예제 출력

2
2
1
10
*/
/*
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int a;
    int b;
    int c=0;
    int min=0;
    int max=0;
    int arrmax = 0;
    int arrvalue =0;
    int sum=0;
    int d=0;
    int arr[8001]={0,};
    int arr1[500000]={0,};
    int arr2[8001]={0,};

    scanf("%d",&a);
    for(int i=0; i<a; i++){
        scanf("%d",&b);
        if(b>=max)max=b;
        if(b<=min)min=b;
        sum+=b;
        //arr[b+4000]++;
        arr1[i]=b;
        
    }

    sort(arr1,arr1+a);
    for(int i=0; i<a; i++){
        printf("hellow %d\n",arr1[i]);
    }
    if((((sum%a)*10)/a)>=5){
        d=1;
    }
    int j=0;
    for(int i=0; i<=8001; i++){
        if(arr[i]>=arrmax){
            arrmax=arr[i];
            arr2[j]=i;
            j++;
        }
    }    
    printf("%d\n%d\n%d\n%d",(sum/a)+d,arr1[a/2],max-min);
}

*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
 
using namespace std;
 
//sort 기준 
bool comp(const pair<int, int> &p1,const pair<int, int> &p2){
    
    if(p1.second == p2.second){     //빈도수가 같으면 
        return p1.first < p2.first; //숫자(key)작은게 앞으로 
    }
    return p1.second > p2.second;    //다르면 빈도수가 큰게 앞으로 
    
}
 
int main(void){
    //입력 1
    int n;
    cin >> n;
    
    vector<int> v;
    int    key;     
    double sum=0;    //산술평균용 
    
    //입력 2    
    for(int i=0; i<n ;i++){
        cin >> key;        
        v.push_back(key);
        
        sum += key;
    }
    
    //오름차순으로 정렬. 
    sort(v.begin(), v.end());    
    
    //산술평균 출력. 
    //내림함수를 이용하여 반올림.
    cout <<  (int)floor( (sum / n) + 0.5) << endl;
    
    
    //중앙값. 
    cout << v[n/2] << endl;
    
    
    //최빈값. 
    vector<pair<int,int> > st;            //key 와 빈도수를 저장할 pair형 vector. 
    vector<int>::size_type i;
    
    for(i=0; i<v.size(); i++){
        if(st.empty()){
            st.push_back(pair<int,int>(v[i],1));
            continue;
        } 
 
        if(st.back().first == v[i]){        //같은게 있다면 
        
            pair<int, int> tmp = st.back();    
            tmp.second++;                    //하나 증가 
            st.pop_back();                    //기존것 없애고 
            st.push_back(tmp);                //새로운 것 다시 삽입 
        
        }else{ 
            st.push_back(pair<int,int>(v[i],1));    
        }
    }
    
 
    //빈도수가 높고, 숫자(key)가 낮은 순으로 정렬 
    sort(st.begin(), st.end(), comp); 
    
    if(st[0].second == st[1].second){
        cout << st[1].first << endl;
    }else{
        cout << st[0].first << endl;
    }
    
    
    //범위.
    cout << v.back() - v.front() << endl;
    
    
    return 0;    
}

//출처: http://blockdmask.tistory.com/113 [개발자 지망생]
/// 최빈값 구하는게 어려웠네요... stl 따로 안쓰고 할려했었는데..
