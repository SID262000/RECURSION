# include <bits/stdc++.h>
using namespace std;

// Intuition: Traverse the input arr, for each element you have 2 choices: take, not-take
// Base-Condition: when you have finished traversing the entire array(indx==n)
// We need to print the subsequence only when the sum of the current subsequence matches k
// For trick refer PrintAllSubsequence

void SumSubsequence(int indx, vector<int>&arr, int n, int &cnt, int sum, int k)
{
    if (indx==n) //Base Condition
    {
        if(sum == k)
        {
        cnt++;
        }
        return;
    }

    //Case-1: When we consider the current element into our subsequence
    sum+=arr[indx];
    SumSubsequence(indx+1,arr,n,cnt,sum,k);

    //Case-2: When we reject/not-take the current element into our subsequence
    sum-=arr[indx];
    SumSubsequence(indx+1,arr,n,cnt,sum,k);
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
    int cnt=0;
    SumSubsequence(0,arr,n,cnt,0,k);
    cout << "Count of Subsequence:" << cnt << endl;
    return 0;
}