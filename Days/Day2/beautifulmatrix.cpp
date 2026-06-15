#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> arr(5, vector<int> (5,0));
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin>>arr[i][j];
        }
    }
    
    int a = 0;
    int b = 0;
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr[0].size();j++){
           if(arr[i][j] == 1){
              a = i;
              b = j;
              
           }
        }
    }
    
    int ans = abs(a - 2) + abs(b - 2);
    cout<<ans<<endl;
    return 0;
}