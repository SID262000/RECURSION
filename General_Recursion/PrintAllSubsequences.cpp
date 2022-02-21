#include <bits/stdc++.h>
using namespace std;

// Intuiton: For each element in the array arr, we have 2 choices:
// case 1:either take it into cinsideration for our current subsequence
// case 2:or, don't take into consideration for our current subsequece

// In case-1: when you return back from the recursive call,you need to pop out
// the element considered to get back to the original situation before considering that
// element.

// Trick to remember the above intuition:
// Consider yourself entering inside the trial room with bunch of clothes,
// For each cloth you have 2 options: wear or don't wear
// wearing resembles case:1->when you try a particular set(i.e.,include in the current subsequence)
// inorder to try the next set, you need to take the previous set you considered to get back to 
// the orginal condition(i.e., when you haven't tried any cloth)
// not wearing resembles case:2
// In this case, it's very simple to just discard the set of cloth(i.e., the current no. from the subsequence)


// Print all the subsequences from n array
// T.C: O(2^n * n) // For each element we have 2 choices, so for n choices 2^n;since we are using a
// for loop to print all these 2^n subsequences so the totla T.C: O(2^n *n)
// S.C: O(n)-> At any particular moment, we have max. 3 recursive call waiting inside the stack
void PrintSubsequence(int indx,vector<int>&arr,int n, vector<int>&pattern)
{
    if(indx>=n) //base condition: when the travelling pointer(index) reaches the end of the array
    {
        //print the current subsequence stored in the pattern
        cout << "Subsequnces:" << endl;
        for(int i:pattern)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    //Recursive case:1
    //We consider the current element for our subsequence
    pattern.push_back(arr[indx]);
    PrintSubsequence(indx+1,arr,n,pattern);
    pattern.pop_back();

    //Recursive case:2
    //We do not consider the current element for our subsequence
    PrintSubsequence(indx+1,arr,n,pattern);
}

//main method
int main()
{
    int n;
    cin >> n;
    vector<int>arr(n,0); //input array
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    vector <int> pattern; // to store the individual subsequence
    PrintSubsequence(0,arr,n,pattern);
    return 0;
}