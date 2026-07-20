#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr;
        for(int i = 0; i<n; i++){
            int a; cin>>a;
            arr.push_back(a);
        }
        
        bool flag =  true;
        long long surplus = 0;
        for(int i= 0; i<n; i++){
           int required = i+1;

           surplus += arr[i];
           surplus = surplus - required;

           if(surplus < 0){
             flag = false;
             break;
           }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        
    
    }

    return 0;
}