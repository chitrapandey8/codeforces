#include <bits/stdc++.h>
using namespace std;

int main(){
   int n; cin>>n;
   vector<int> arr;
   for(int i = 0; i<n; i++){
     int a; cin>>a;
     arr.push_back(a);
   }

   int mini  = *min_element(arr.begin(), arr.end());
   int maxi  = *max_element(arr.begin(), arr.end());

   for(int i = 0; i<n; i++){
     if(arr[i] == mini){
      arr[i] = maxi;
     }else if(arr[i] == maxi){
        arr[i] = mini;
     }
   }
   for(int x: arr){
       cout<<x<<" ";

     }
 
	return 0;

}
