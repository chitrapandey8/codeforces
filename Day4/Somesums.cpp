#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b; cin>>n>>a>>b;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        int no = i;
        int sumin  = 0;
        while(no){
            int lastdigit = no%10;
            sumin += lastdigit;
            no = no/10;
        }
        if(sumin >= a && sumin <=b){
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}