#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){
        
        int maxsf=arr[0];
        int maxrn=arr[0];
        
        for(int i=1;i<n;i++)
        {
            maxrn=max(arr[i],maxrn+arr[i]);
            maxsf=max(maxrn,maxsf);
        }
        return maxsf;
}

int main()
{
    int t,n;
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
