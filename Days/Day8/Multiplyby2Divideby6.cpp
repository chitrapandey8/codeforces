#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        

        int nof2 = 0;
        while(n%2 == 0){
            n = n/2;
            nof2++;
        }
        int nof3 = 0;
        while(n%3 == 0 ){
            n = n/3;
            nof3++;
        }


        
        if(n != 1 || nof2 > nof3){
            cout<<-1<<endl;
        }else{
            cout<<(2*nof3 - nof2)<<endl;
        }

        
        

    }
    
    return 0;
}