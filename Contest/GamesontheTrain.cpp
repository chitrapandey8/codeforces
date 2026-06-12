#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
    int n; cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }

    int maxx = *max_element(arr.begin(), arr.end());
    int minn = *min_element(arr.begin(), arr.end());

    int diff = maxx - minn;
    cout<<diff+1<<endl;
    }
    
    return 0;
}