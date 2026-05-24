#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    int mini = *min_element(arr.begin(), arr.end());
    for(int i = 0;i<n; i++){
        if(arr[i] == mini){
            cout<<mini<<" "<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}