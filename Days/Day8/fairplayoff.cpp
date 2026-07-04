#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin>>t;
    while(t--){
        int s1, s2, s3, s4; cin>>s1>>s2>>s3>>s4;
        vector<int> arr({s1,s2,s3,s4});
        int largest = max({s1,s2,s3,s4});
        int second = INT_MIN;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] > second && arr[i] < largest){
                second = arr[i];
            }
        }
        

        int winner1  = max(s1,s2);
        int winner2  = max(s3,s4);
        
        
        if((winner1 == largest && winner2 == second) || (winner2 == largest && winner1 == second)){
           cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}