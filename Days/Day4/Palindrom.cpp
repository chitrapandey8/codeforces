#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int no = n;
    int palindrom = 0;
    while(no){
        int last = no%10;
        palindrom = palindrom*10 + last;
        no = no/10;
    }

    if(n == palindrom){
        cout<<palindrom<<endl;
        cout<<"YES"<<endl;
    }else{
        cout<<palindrom<<endl;
        cout<<"NO"<<endl;
    }
    return 0;

}