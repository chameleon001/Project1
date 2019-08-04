#include <iostream>
using namespace std;
const int MAX = 20;
int N, S;
float arr[MAX];
int result = 0;

void numOfSubset(int idx, int sum)
{
        sum += arr[idx]; 

        if (idx >= N)
                 return;   
        if (sum == S)
                 result++;
        numOfSubset(idx + 1, sum - arr[idx]);
        numOfSubset(idx + 1, sum);
}
int main(void)
{
       cin >> N >> S;
        for (int i = 0; i < N; i++)
                 cin >> arr[i];
        numOfSubset(0, 0);
        cout << result << endl;
        return 0;
}
