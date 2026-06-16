#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
       int n; cin>>n;
       vector<int> arr;
       for(int i= 0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
       }
       
       int repeating = 0;
       if(arr[0] == arr[2]){
          repeating = arr[0];
       }else{
        repeating = arr[1];
       }

      for (int i = 0; i < arr.size(); i++)
      {
        if(arr[i] != repeating){
            cout<<i+1<<endl;
            break;
        }
      }
      
    }
    
    return 0;
}