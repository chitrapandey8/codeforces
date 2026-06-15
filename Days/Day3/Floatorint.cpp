#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<fixed<<setprecision(3);
    float a; cin>>a;
    int x = a;
    float deci = a - x;
    if(deci == 0){
        cout<<"int"<<" "<<x<<endl;
    }else{
        cout<<"float"<<" "<<x<<" "<<deci<<endl;
    }

    
    return 0;
}