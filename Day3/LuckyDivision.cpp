#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin>>n;
    int num = n;
    int cnt = 0;
    while(num>0){
        int last_digit = num%10;
        if(last_digit != 4  && last_digit != 7){
            cnt++;
        }
        num = num/10;
    }
    
    if(n%4 == 0 || n%7 == 0 || cnt == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}