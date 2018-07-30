// PermMissingElem
//
//code written in c
//correctness : 80%
//perfomance : 100% 
// 90% 



// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int arr[100001]={0};
    
    for(int i=0; i<N+1; i++){
        arr[A[i]]=1;
    }
    
    for(int i=1; i<N+1; i++){
        
     if(arr[i]==0){
         return i;
     }  
     
    }
}






/*


An array A consisting of N different integers is given. The array contains integers in the range [1..(N + 1)], which means that exactly one element is missing.

Your goal is to find that missing element.

Write a function:

    int solution(int A[], int N);

that, given an array A, returns the value of the missing element.

For example, given array A such that:
  A[0] = 2
  A[1] = 3
  A[2] = 1
  A[3] = 5

the function should return 4, as it is the missing element.

Assume that:

        N is an integer within the range [0..100,000];
        the elements of A are all distinct;
        each element of array A is an integer within the range [1..(N + 1)].

Complexity:

        expected worst-case time complexity is O(N);
        expected worst-case space complexity is O(1) (not counting the storage required for input arguments).


*/
