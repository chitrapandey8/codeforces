#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        string s; cin>>s;
        stack<char> st;

        for(int i = 0; i<s.size(); i++){
          if(st.empty()){
            st.push(s[i]);
          }else{
            if((st.top() == 'A' && s[i] == 'B') || (st.top() == 'B' && s[i] == 'B')){
               st.pop();
            }else{
             st.push(s[i]);
            }
          }
        }
        cout<<st.size()<<endl;
    }
    
    return 0;
}