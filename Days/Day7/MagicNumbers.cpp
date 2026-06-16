#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    string s = "";
    while(n>0){
      int last_digit = n%10;
      s += last_digit + '0';
      n = n/10;
    }
    reverse(s.begin(), s.end());
    
    if(s[0] == '4'){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i = 0; i<s.size(); i++){
         if(s[i] != '1' &&   s[i] != '4'){
            cout<<"NO"<<endl;
            return 0;
         }else if( s[i] == '4'&& s[i+1] == '4' && s[i+2] == '4'){
            cout<<"NO"<<endl;
            return 0;
         }
    }
     
     cout<<"YES"<<endl;

    
    return 0;
}