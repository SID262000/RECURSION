#include<bits/stdc++.h>
using namespace std;

/*void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}*/
void ReverseArray(int i,int arr[],int n) //static aray pass by reference
{
    //base condition
    if(i>=n/2)
    return;
    swap(arr[i],arr[n-i-1]); //inbuilt function, may use user-defined function as well
    ReverseArray(i+1,arr,n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ReverseArray(0,arr,n);

    cout<< "Reversed Array" << endl;
    for(int i:arr)
    {
        cout << i << " ";
    }
    return 0;
}