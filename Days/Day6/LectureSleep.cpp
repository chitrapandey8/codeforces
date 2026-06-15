#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin>>n>>k;

    vector<int> arr1;
    vector<int> arr2;

    for(int i = 0; i<n; i++){
        int a; cin>>a;
        arr1.push_back(a);
    }
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        arr2.push_back(a);
    }

      
    int sum = 0;
    for(int i = 0; i<arr1.size(); i++){
        if(arr2[i] == 1){
            sum += arr1[i];
        }
    }
    

    int theroem = 0;
    int maxth = INT_MIN;
    for(int i = 0; i<k; i++){
        if(arr2[i] == 0){
            theroem += arr1[i];
        }
    }
    maxth = theroem;

    for(int i = k; i<n; i++){
        if(arr2[i] == 0){
            theroem += arr1[i];
            
        }
        if(arr2[i-k] == 0){
            theroem -= arr1[i-k];
        }
        maxth = max(maxth, theroem);
        
    }
    cout<<maxth+sum<<endl;
    

    return 0;
}