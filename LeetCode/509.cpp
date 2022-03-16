/*
509. Fibonacci Number

https://leetcode.com/problems/fibonacci-number/
*/
class Solution {
public:
    
    int fibonacci(int n)
    {
        if(n==0) return 0;//base condition
        else if(n==1) return 1;//base condition
        else
            return fibonacci(n-1)+fibonacci(n-2);
    }
    int fib(int n)
    {
        return fibonacci(n);
    }
};