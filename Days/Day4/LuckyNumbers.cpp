#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b; cin>>a>>b;
    int lucky = 0;

    for(int i = a; i<=b; i++){
        int no = i;
        int cnt = 0;
        while(no){
            int last_digit = no%10;
            if(last_digit != 4 && last_digit != 7){
             cnt++;
            }
            no = no/10;

        }
        if(cnt == 0){
            cout<<i<<" ";
            lucky++;
        
        }
    }
    if(lucky == 0){
        cout<<-1<<endl;
    }
    return 0;
}