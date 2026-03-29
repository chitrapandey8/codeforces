#include <bits/stdc++.h>
using namespace std;

int main() {
    int op; cin>>op;
    
    int ans = 0;


    
    while(op-->0){
        
    string s; cin>>s;
        if(s == "++X" ||  s == "X++"){
           ans++;
        }else if(s == "--X" || s ==  "X--"){
            ans--;
        }
       
    
    }
     cout<<ans<<endl;
    
     
   
    return 0;
}