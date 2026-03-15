#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t-->0)
    {
       int n; cin>>n;
       vector<int> arr;
       for(int i = 0; i<n; i++){
        int no; cin>>no;
        arr.push_back(no);
       }
       
        if(n == 1){
            cout<<0<<endl;
        }else{
            int count = 0;
       for(int i = 0; i<arr.size()-1; i++){
        
        if((arr[i] % 2 == 0 && arr[i+1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i+1] % 2 == 0)){
           continue;
        }else{
            count++;
        }
       }
        cout<<count<<endl;
        }
    }
    
    return 0;
}