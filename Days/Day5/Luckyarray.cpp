#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    int mini = *min_element(arr.begin(), arr.end());
    int cnt = 0;
    for(int x: arr){
      if(x == mini){
        cnt++;
      }
    }

    if(cnt%2 != 0){
        cout<<"Lucky"<<endl;
    }else{
        cout<<"Unlucky"<<endl;
    }
    return 0;
}