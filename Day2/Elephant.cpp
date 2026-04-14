#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    int cnt = 0;
    
         if(a> 5){
        while(a > 5){
          a = a-5;
          cnt++;
        }
    }
    int ans = cnt+1;
    cout<<ans<<endl;
    return 0;
}