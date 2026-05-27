#include <bits/stdc++.h>
using namespace std;

int findans(vector<int> arr){
 vector<int> cnt(64,0);
 
 for(int i = 0; i<arr.size(); i++) {
    int j = 0;
   int no= arr[i];
   while(no){
    int last_bit = no&1;
    cnt[j] += last_bit;
    no = no>>1;
    j++;
   }
 }  
 for(int x:cnt){
        cout<<x<<" ";
    } 

  int p = 1; int ans=0;
  for(int i = 0; i<cnt.size(); i++){
     cnt[i] = cnt[i]%3;
     ans += (cnt[i]*p);
     p  = p<<1;
  }

  
 return ans;
   
}

int main() {
    vector<int> arr = {1,1,1,2,2,2,3,3,3,4};
    cout<<findans(arr);

    return 0;
}