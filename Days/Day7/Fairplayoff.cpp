#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      int s1, s2, s3, s4;
      cin>>s1>>s2>>s3>>s4;
      vector<int> arr(4);
      arr.push_back(s1);
      arr.push_back(s2);
      arr.push_back(s3);
      arr.push_back(s4);
      int maxx = max({s1,s2,s3,s4});
      int secmax = INT_MIN;
      for(int x: arr){
       if(x > secmax && x < maxx){
        secmax = x;
       }
      }
       
      int firstplay = max({s1,s2});
      int secondpaly  = max({s3,s4});

     if(firstplay == maxx && secondpaly == secmax){
        cout<<"YES"<<endl;
     }else if(firstplay == secmax && secondpaly == maxx){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }

    }
    return 0;
}