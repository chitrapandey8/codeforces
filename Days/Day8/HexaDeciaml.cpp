#include <bits/stdc++.h>
using namespace std;

pair<int, int> fabonacii(int n){
    int n1 =  0;
    int n2 = 1;
    int n3 = 0;
    while(1){
       n3 = n1+n2;
        
       if(n3 == n){
        break;
       }
       n1 = n2;
       n2 = n3;
    }
    return {n1,n2};

}

int main() {
    int n; cin>>n;
    if(n  == 0){
        cout<<0<<" "<<0<<" "<<0<<endl;
        return 0;
    }
    if(n == 1){
        cout<<0<<" "<<0<<" "<<1<<endl;
        return 0;
    }
    if(n == 2){
        cout<<0<<" "<<1<<" "<<1<<endl;
        return 0;
    }
    pair<int, int> p = fabonacii(n);
    int secondno = p.second-p.first;
    int firstno = p.first-secondno;

    cout<<firstno<<" "<<secondno<<" "<<p.second<<endl;


    return 0;
}