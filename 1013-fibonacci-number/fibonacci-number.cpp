class Solution {
public:
    int fib(int n) {
    
    if(n==0||n==1) return n;

    // int nextNum=fib(n-1)+fib(n-2);
    int a=0;
    int b=1;
    int nextNum;

    for(int i=2;i<=n;i++){
        nextNum=a+b;
        a=b;
        b=nextNum;
    }

    return nextNum;
        
    }
};