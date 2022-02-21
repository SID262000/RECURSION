#include<bits/stdc++.h>
using namespace std;

//Recursive solution finding the nth Fibonaccci number
// T.C: O(2^n)->exponential
// S.C: O(n)
int fibo(int n)
{
    if(n<=1)
    return n;

    /*
    fibo(n-1) first finishes its recurisve call
    followed by fibo(n-2)
    */
    return fibo(n-1) + fibo(n-2);
} 
int main()
{
    int n;
    cin >> n;
    cout<< "Nth Fibonacci:" << fibo(n) <<endl;
    return 0;
}