# include <bits/stdc++.h>
using namespace std;

void PrintNumberReverse(int n)
{
    cout<< "Number:" << n <<endl;
    n--;
    if(n<1)
    return;

    PrintNumberReverse(n);
}
int main()
{
    int n;
    cin>>n;
    PrintNumberReverse(n);
    return 0;
}