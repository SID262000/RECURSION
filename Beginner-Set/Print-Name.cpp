//Print Name n times
# include <bits/stdc++.h>
using namespace std;

void PrintName(string s,int n,int cnt)
{
    // base condition
    if(cnt==n)
    {
        return;
    }

    cout<< "name:" << s << endl;
    cnt++;

    //recursion call
    PrintName(s,n,cnt);
}
int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    PrintName(s,n,0);
    return 0;
}