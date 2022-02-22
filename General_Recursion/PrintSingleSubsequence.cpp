# include <bits/stdc++.h>
using namespace std;

// Intuition: Traverse the input arr, for each element you have 2 choices: take, not-take
// Base-Condition: when you have finished traversing the entire array(indx==n)
// We need to print the subsequence only when the sum of the current subsequence matches k
// if we get one answer, we prevent further recursion calls
// For trick refer PrintAllSubsequence

bool SumSubsequence(int indx, vector<int>&arr, int n, vector<int>&pattern, int sum, int k)
{
    if (indx==n) //Base Condition
    {
        // satisfying condition
        if(sum == k)
        {
        for(int i:pattern)
        {
            cout << i << " ";
        }
        cout << endl;
        return true;
        }
        return false;
    }

    //Case-1: When we consider the current element into our subsequence
    sum+=arr[indx];
    pattern.push_back(arr[indx]);
    if(SumSubsequence(indx+1,arr,n,pattern,sum,k)==true)
    return true;

    //Case-2: When we reject/not-take the current element into our subsequence
    sum-=arr[indx];
    pattern.pop_back();
    if(SumSubsequence(indx+1,arr,n,pattern,sum,k)==true)
    return true;

    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >>k;
    vector<int>pattern;
    SumSubsequence(0,arr,n,pattern,0,k);

    return 0;
}