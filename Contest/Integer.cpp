#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){

        vector<int> arr;
        int maxx = INT_MIN;
        for(int i=0; i<7; i++){
            int a; cin>>a;
            arr.push_back(a);
        }

        for(int i = 0; i<7; i++){
            vector<int> a1(7);
           
            for(int j = 0; j <i; j++){
                a1.push_back(-arr[j]);
            }

            for(int j = i+1; j<7; j++){
                a1.push_back(-arr[j]);
            }
         
            int sum =  accumulate(a1.begin(), a1.end(),0);
            sum += arr[i];
            maxx = max(sum,maxx);
           
         
        }
        cout<<maxx<<endl;
       
        
    }
    return 0;
}