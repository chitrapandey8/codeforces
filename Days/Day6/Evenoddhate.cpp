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
      
      if(n%2 != 0){
        cout<<-1<<endl;
        
    }else{
        int even = 0;
    int odd = 0;
    for(int x: arr){
       if(x%2 == 0){
        even++;
      }else{
        odd++;
      }
    }

    int diff = 0;
    if(even >= odd){
     diff = even-n/2;
     cout<<diff<<endl;
    }else{
        diff = odd-n/2;
        cout<<diff<<endl;
        
    }


    }
    

}

    return 0;
   
}
