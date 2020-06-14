#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// Driver Code Ends

vector<int> duplicates(int a[], int n) {
    // code here
    vector<int> ans;
    int c = 1;
    
    for(int i=0; i<n; ++i){
        int ind = a[i] % n;
        a[ind] += n;
    }
    
    for(int i=0; i<n; ++i){
        if(a[i]/n > 1){
            ans.push_back(i);
            c=0;
        }
    }

        if(c){
            ans.push_back(-1);
        }
    return ans;
}
