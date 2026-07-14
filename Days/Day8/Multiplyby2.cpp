#include <bits/stdc++.h>
using namespace std;

int main() {
     int t; cin>>t;
     while(t--){
        int n; cin>>n;
        int cnt = 0;

         if(n<6){
            if(n == 1){
                cout<<0<<endl;
            }else{
                n = n*2;
                if(n/6 == 1){
                    cout<<2<<endl;
                }else{
                    cout<<-1<<endl;
                }
            }
         }else{
            if(n/6 < 9){
                cout<<-1<<endl;
            }else{
       
                while(true){
                    if(n%6 == 0){
                        cnt++;
                        n = n/6;
                    }else if(n%6 == 1){
                        break;
                    }else{
                        n = n*2;
                    }
                }

            }
         }
        

        if(cnt >0){
            cout<<cnt<<endl;
        }
     }
    return 0;
}