#include <bits/stdc++.h>
using namespace std;

void PrintBacktracking(int i,int n)
{
    if(i<1)
    return;

    PrintBacktracking(i-1,n);
    cout<< "Number:" << i <<endl;
}
int main()
{
    int n;
    cin>>n;
    PrintBacktracking(n,n);
    return 0;
}