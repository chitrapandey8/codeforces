#include <bits/stdc++.h>
using namespace std;

int main() {
    int a; cin>>a;
    int years = a/365;
    a = a%365;
    int months = a/30;
    a = a%30;
    cout<<years<<" "<<"years"<<endl;
    cout<<months<<" "<<"months"<<endl;
    cout<<a<<" "<<"days"<<endl;

        return 0;
}