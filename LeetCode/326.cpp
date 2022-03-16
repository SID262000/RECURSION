/*
326. Power of Three

https://leetcode.com/problems/power-of-three/

Intuition :- Making recursive call each time if n%3==0 holds, else return false.And if n becomes equal to 1 return true.

*/

class Solution {
public:
    
    bool check(int n)
    {
        if(n==1)return true;
        
        if(n%3==0)
            return check(n/3);
        else 
            return false;
    }
    bool isPowerOfThree(int n) 
    {
        if(n==0) return false;
        return check(n);
    }
};