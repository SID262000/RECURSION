/*
231. Power of Two

https://leetcode.com/problems/power-of-two/

INTUITION:-
1. If n is odd & n!=1 then return false , because odd numbers cannot be represented as power of 2 except 1.
2. If n is 0 ,return false. 
3. Else, each time call the recursive function for n/2 ,untill n becomes 1.If n=1 return true .

2*2*2*2=16
16/2->8
8/2->4
4/2->2
2/2->1  since n=1,return true

*/

class Solution {
public:
    
    bool check(int n)
    {
        if(n==1) return true;
        if(n%2!=0 && n!=1) return false;
        
        return check(n/2);
    }
    
    bool isPowerOfTwo(int n) 
    {
        if(n%2!=0 && n!=1) //since odd numbers cannot be represented as power of 2 except 1
            return false;
        if(n==0) return false;
        
        return check(n);
    }
};


