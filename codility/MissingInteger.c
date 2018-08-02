// MissingInteger
// correctness : 100%
// performance : 100%
//   100% 
//
#include<vector>

int solution(vector<int> &A) {
    vector <int> a(A.size()+1);
    
    for(int i=0; i<A.size(); i++){
        if(A[i]>0 && A[i]<=A.size()+1){
            a[A[i]-1] =1;
        }
    }
    
    for(int i=0; i<A.size()+1; i++){
        if(!(a[i])) return i+1;
    }
    
    return -1;
  
}

/*


This is a demo task.

Write a function:

    int solution(vector<int> &A);

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [?1, ?3], the function should return 1.

Assume that:

        N is an integer within the range [1..100,000];
        each element of array A is an integer within the range [?1,000,000..1,000,000].

Complexity:

        expected worst-case time complexity is O(N);
        expected worst-case space complexity is O(N) (not counting the storage required for input arguments).

 *
 */
