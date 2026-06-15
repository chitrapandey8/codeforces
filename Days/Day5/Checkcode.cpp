#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B; cin>>A>>B; string s; cin>>s;
    int n = s.size();
    int Acnt = 0;
    int Bcnt = 0;
    int i = 0;
    while(i < n){
        while(i < n && s[i] != '-'){
            Acnt++;
            i++;
        }
         int j = i+1;
        while(j < n){
            Bcnt++;
            j++;
        }
    }
    if(A ==  Acnt && B == Bcnt){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}