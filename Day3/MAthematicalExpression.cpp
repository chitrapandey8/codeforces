#include <bits/stdc++.h>
using namespace std;

int main() {
    int a; char c; int b; char s; int no;
    cin>>a>>c>>b>>s>>no;
    if(c == '+'){
       if((a+b) == no){
        cout<<"Yes"<<endl;
       }else{
        cout<<a+b<<endl;
       }
    }else if(c == '-'){
        if((a-b) == no){
            cout<<"Yes"<<endl;
        }else{
            cout<<a-b<<endl;
        }
    }else{
      if((a*b) == no){
        cout<<"Yes"<<endl;
      }else{
        cout<<a*b<<endl;
      }
    }
    return 0;
}