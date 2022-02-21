# include <bits/stdc++.h>
using namespace std;

void PrintNumber(int n,int cnt)
{
    if(cnt>n)
    return;

    cout<< "Number:" << cnt << endl;
    cnt++;
    PrintNumber(n,cnt);
}
int main()
{
    int n;
    cin>>n;
    PrintNumber(n,1);
    return 0;
}