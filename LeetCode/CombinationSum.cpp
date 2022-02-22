class Solution {
public:
  //Intuition: We traverse the array and each element has 2 options
 // you keep picking the same element any no. of times until the target is greater
    
    // T.C: O(2^target * k)
    // S.C: O(k)
    //recursive call
    void func(int indx, int n, int target, vector<int> candidates, vector<vector<int>>&ans, vector<int>&res)
    {
        if(indx==n) //base condition
        {
            if(target == 0) //satifying condition
            {
                ans.push_back(res); //push the current combination into the answer
            }
            return;
        }
        
        if(candidates[indx]<=target) // we need to check whether the current element <=target before adding to our current combination
        {
        res.push_back(candidates[indx]);
        
        //Important: We don't increment the current indx, since ATQ, we are allowed to pick the same element any number of time
        func(indx,n,target-candidates[indx],candidates,ans,res);
        res.pop_back();
        }
        
        //Case-2: we don't consider the current element to our combination
        func(indx+1,n,target,candidates,ans,res);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        int n = candidates.size();
        vector<int>res;
        func(0,n,target,candidates,ans,res);
        return ans;
    }
};