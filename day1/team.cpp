#include <bits/stdc++.h>
using namespace std;

bool functionn(){
    vector<int> arr(3);
    for(auto &x: arr){
        cin>>x;
    }

    int cnt  = count(arr.begin() , arr.end(), 1);
    return cnt >= 2 ? true : false;
}

int main() {
  int t; cin>>t;

  int anss = 0;
  while(t-->0){
   bool ans = functionn();
   if(ans){
    anss++;
   }

  }
  cout<<anss<<endl;

    return 0;
}