/*
344. Reverse String

https://leetcode.com/problems/reverse-string/

**ITERATIVE APPROACH**

`Intuition:`- Taking 2 pointers start=0 & end=s.size()-1 , 
and swaping the values at index start & end till start is less than end.
1. TC=O(n)
2. SC=O(1)

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int start=0;
        int end=s.size()-1;
        
        while(start<end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};


**RECURSIVE APPROACH**
n=length of the array
Intuition :-Take a variable i ,initally i=0 and untill i is greater than  n/2
keep recursively swaping the i-th & the (n-i) th element of the array, and keep incrementing i.
*/
class Solution {
public:
    void solve(vector<char>&s,int i,int n)
    {
        if(i>n/2) return;
        
        swap(s[i],s[n-i]);
        solve(s,i+1,n);
    }
    void reverseString(vector<char>& s) 
    {
        int n=s.size();
        return solve(s,0,n-1);
    }
};