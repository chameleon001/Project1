
//code written in c
//correctness : 100%
//perfomance : 50% 
//퍼포먼스를 어떻게 해야 올릴까...

// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int arr[1000000]={0,};
    
    for(int i=0; i<N; i++){
        arr[A[i]]++;
    }
    
    for(int i=0; i<1000000; i++){
        if(arr[i]%2==0){
            
        }else{
            return i;
        }
    }
    
}


// 77 %..
//
//
// 짧고 간결하게 짜신분이 있으셨다..
/*
 	// Code written in C
	// Correctness: 100 %
	// Performance: 100 %
	// Time Complexity: O(N)
	// Space Complexity: O(1)
	
	int solution(int A[], int N) {
	    int ret = 0;
	    
	    for (int i = 0; i < N; ++i) {
	        ret = ret ^ A[i];
	    }
	    
	    return ret;
	}

    //이분은 bitwise operators 방식으로 풀었다.
    //둘 다 같으면 0되어버리는 방식.
    */
