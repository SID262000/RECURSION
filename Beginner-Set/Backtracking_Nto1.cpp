//PRINT N TO 1 USING BACKTRACKING

#include<bits/stdc++.h>
using namespace std;

void print(int i,int n)
{
    if(i>n) return;//base condition

    print(i+1,n);
    cout<<i<<endl;
}
int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    print(1,n);
return 0;
}
//TIME COMPLEXITY = O(n)
//STACK SPACE = O(n)
