#include<bits/stdc++.h>
using namespace std;

bool CheckPalindrome(int i, string &s,int n)
{
    if(i>=n/2)
    return true;

    if(s[i]!=s[n-i-1])
    return false;

   return CheckPalindrome(i+1,s,n);
}
int main()
{
    string s;
    cin >> s;
    int n = s.length();
   cout<< "Palindrome :" << CheckPalindrome(0,s,n) << endl;
   return 0;
}