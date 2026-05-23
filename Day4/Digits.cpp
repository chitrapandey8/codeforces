#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    while(n--){
        
        int no; cin>>no;
        if(no == 0){
            cout<<0;
           
        }
        while(no != 0){
        int last_digit = no%10;
        cout<<last_digit<<" ";
        no = no/10;
        }
        cout<<endl;
        
        
    }
    return 0;
}