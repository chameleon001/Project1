/*
���� ó���ϴ� ���� ����п��� ����� �߿��� ���̴�. ����п��� N���� ���� ��ǥ�ϴ� �⺻ ��谪���� ������ ���� �͵��� �ִ�. ��, N�� Ȧ����� ��������.

    ������ : N���� ������ ���� N���� ���� ��
    �� �� �� : N���� ������ �����ϴ� ������ �������� ��� �� �߾ӿ� ��ġ�ϴ� ��
    �� �� �� : N���� ���� �� ���� ���� ��Ÿ���� ��:
    ��    �� : N���� ���� �� �ִ밪�� �ּҰ��� ����

N���� ���� �־����� ��, �� ���� �⺻ ��谪�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� ���� ���� N(1��N��500,000)�� �־�����. �� ���� N���� �ٿ��� �������� �־�����. �ԷµǴ� ������ ���밪�� 4,000�� ���� �ʴ´�.
���

ù° �ٿ��� �������� ����Ѵ�. �Ҽ��� ���� ù° �ڸ����� �ݿø��� ���� ����Ѵ�.

��° �ٿ��� �߾Ӱ��� ����Ѵ�.

��° �ٿ��� �ֺ��� ����Ѵ�. ���� �� ���� ������ �ֺ� �� �� ��°�� ���� ���� ����Ѵ�.

��° �ٿ��� ������ ����Ѵ�.
���� �Է�

5
1
3
8
-2
2

���� ���

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
 
//sort ���� 
bool comp(const pair<int, int> &p1,const pair<int, int> &p2){
    
    if(p1.second == p2.second){     //�󵵼��� ������ 
        return p1.first < p2.first; //����(key)������ ������ 
    }
    return p1.second > p2.second;    //�ٸ��� �󵵼��� ū�� ������ 
    
}
 
int main(void){
    //�Է� 1
    int n;
    cin >> n;
    
    vector<int> v;
    int    key;     
    double sum=0;    //�����տ� 
    
    //�Է� 2    
    for(int i=0; i<n ;i++){
        cin >> key;        
        v.push_back(key);
        
        sum += key;
    }
    
    //������������ ����. 
    sort(v.begin(), v.end());    
    
    //������ ���. 
    //�����Լ��� �̿��Ͽ� �ݿø�.
    cout <<  (int)floor( (sum / n) + 0.5) << endl;
    
    
    //�߾Ӱ�. 
    cout << v[n/2] << endl;
    
    
    //�ֺ�. 
    vector<pair<int,int> > st;            //key �� �󵵼��� ������ pair�� vector. 
    vector<int>::size_type i;
    
    for(i=0; i<v.size(); i++){
        if(st.empty()){
            st.push_back(pair<int,int>(v[i],1));
            continue;
        } 
 
        if(st.back().first == v[i]){        //������ �ִٸ� 
        
            pair<int, int> tmp = st.back();    
            tmp.second++;                    //�ϳ� ���� 
            st.pop_back();                    //������ ���ְ� 
            st.push_back(tmp);                //���ο� �� �ٽ� ���� 
        
        }else{ 
            st.push_back(pair<int,int>(v[i],1));    
        }
    }
    
 
    //�󵵼��� ����, ����(key)�� ���� ������ ���� 
    sort(st.begin(), st.end(), comp); 
    
    if(st[0].second == st[1].second){
        cout << st[1].first << endl;
    }else{
        cout << st[0].first << endl;
    }
    
    
    //����.
    cout << v.back() - v.front() << endl;
    
    
    return 0;    
}

//��ó: http://blockdmask.tistory.com/113 [������ ������]
/// �ֺ� ���ϴ°� ������׿�... stl ���� �Ⱦ��� �ҷ��߾��µ�..
