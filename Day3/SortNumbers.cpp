#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c; cin>>a>>b>>c;
    int first = 0;
    int second = 0;
    int third = 0;
    if(a>=b && a>= c){
        first = a;
        if(b > c){
         second = b;
         third = c;
        }else{
        second = c;
        third = b;
        }
    }else  if(b>=a && b>= c){
        first = b;
        if(a > c){
         second = a;
         third = c;
        }else{
        second = c;
        third = a;
        }
    } else if(c>=a && c>= b){
        first = c;
        if(a > b){
         second = a;
         third = b;
        }else{
        second = b;
        third = a;
        }
    }

    cout<<third<<endl;
    cout<<second<<endl;
    cout<<first<<endl;
    
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    

    
    return 0;
}