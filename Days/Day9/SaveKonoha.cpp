#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n, z; cin>>n>>z;
        vector<int> arr;
        for(int i =0; i<n; i++){
            int a; cin>>a;
            arr.push_back(a);
        }

        int moves = 0;
        while(z > 0){
            auto it  = lower_bound(arr.begin(), arr.end(), z);
            int val = arr[it - arr.begin()];
            if(val){
                z = z - val;
                moves++;
            }else{
                int maxx = *max_element(arr.begin(), arr.end());
                int index = 0;
                for(int i =0;i<arr.size(); i++){
                if(arr[i] == maxx){
                    index = i;
                }     
                }
                z = z- maxx;
                arr[index] = maxx/2;
                moves++;
            }
        }
        cout<<moves<<endl;
    }
    return 0;
}