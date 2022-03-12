/*
342. Power of Four

https://leetcode.com/problems/power-of-four/

 Intuition :- Making recursive call each time if n%4==0 holds,because if n isn't a multiple of 4 then there is no possibility that it can be represented as power of 4.
 And if n becomes equal  to 1 ,then return true else false.

for example : 6 is even but 6%4!=0 so we'll return false
*/
class Solution {
public:
    
    bool check(int n)
    {
        if(n==1) return true;
        
        if(n%4==0)
            return check(n/4);
        else 
            return false;//if n isn't a multiple of 4,then it can't be represented as its power 
    }
    bool isPowerOfFour(int n)
    {
        if(n%2!=0 && n!=1)//since odd numbers cannot be represented as power of 4, except 1
            return false;
        if(n==0) return false;
        
        return check(n);
    }
};