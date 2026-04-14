#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;  cin>>n;
    long long count = 0;
    while(n!=0){
        int last_digt = n%10;
        if(last_digt == 4 || last_digt == 7){
            count++;
        }
        n = n/10;
    }

    if(count == 4  || count == 7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}