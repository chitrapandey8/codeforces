#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t-->0)
    {
       string s; cin>>s;
       if(s.length()  == 1){
        cout<<"NO"<<endl;
       }else{
        bool flag  = true;
        for (int i = 0; i < s.size(); i++)
        {
            if(i<s.size()-1 && ((s[i] == 'a' && s[i+1] == 'a') || (s[i] == 'b' && s[i+1] =='b')) ){
              i = i+1;
            }else if(i>0 && s[i] == s[i-1]){
               continue;
            }else{
                flag = false;
                break;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
       }
    }
    



    return 0;
}