// TapeEquilibrium
//
//
//code written in c
//correctness : 83%
//perfomance :  83% 
// 83%
//


// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int arr[100000]={0,};
    
    for(int i = 0; i<N; i++){
        arr[A[i]]=1;
    }
    
    for(long long i =1; i<N+1; i++){
        if(arr[i]==0){
            return 0;
        }
      
    }
    return 1;
  
}

// 
//  c++로 잘 짠분.
// 방식이 신박한것같다.
// 기본적인 알고리즘 방식은 비슷하지만 좀 더 고급적이게 짰다..
/*
int solution(vector<int> &A) {
    // the use of a auto_ptr would be better, but it does not work with arrays
    // use of boost::scoped_array seems like an overkill
    bool * seen = new bool[A.size()];
     
    for (unsigned int i=0; i< A.size(); i++){
        seen[i] = false;
    }    
     
    for (unsigned int i=0; i< A.size(); i++){
        if (!(0 < A[i] && A[i] <=A.size() && seen[A[i]-1] == false)){
            delete[] seen;
            return 0;
        } else {
            seen[A[i]-1] = true;
        }
    }
     
    delete[] seen;
    return 1;
}

*/
/*


A non-empty array A consisting of N integers is given.

A permutation is a sequence containing each element from 1 to N once, and only once.

For example, array A such that:
    A[0] = 4
    A[1] = 1
    A[2] = 3
    A[3] = 2

is a permutation, but array A such that:
    A[0] = 4
    A[1] = 1
    A[2] = 3

is not a permutation, because value 2 is missing.

The goal is to check whether array A is a permutation.

Write a function:

    int solution(int A[], int N);

that, given an array A, returns 1 if array A is a permutation and 0 if it is not.

For example, given array A such that:
    A[0] = 4
    A[1] = 1
    A[2] = 3
    A[3] = 2

the function should return 1.

Given array A such that:
    A[0] = 4
    A[1] = 1
    A[2] = 3

the function should return 0.

Assume that:

        N is an integer within the range [1..100,000];
        each element of array A is an integer within the range [1..1,000,000,000].

Complexity:

        expected worst-case time complexity is O(N);
        expected worst-case space complexity is O(N) (not counting the storage required for input arguments).

 *
 *
 */
