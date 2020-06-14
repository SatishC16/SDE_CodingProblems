#include<bits/stdc++.h>
using namespace std;

void find_rm(int a[],int n)
{
    int i;
    for (i = 0; i < n; i++) { 
        if (a[abs(a[i]) - 1] > 0) 
            a[abs(a[i]) - 1] = -a[abs(a[i]) - 1]; 
        else
            cout << abs(a[i]) << " "; 
    }
    for (i = 0; i < n; i++) { 
        if (a[i] > 0) 
            cout << (i + 1); 
    }  
}

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    find_rm(a,n);
	    cout<<"\n";
	}
	return 0;
}
