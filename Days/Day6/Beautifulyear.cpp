#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    
    n++;
    int num = n;
    while(true){
        
        int no = num;
        unordered_set<int> hs;
        while(no){
            int last_digit = no%10;
            hs.insert(last_digit);
            no = no/10;
        }
        
        if(hs.size() == 4){
            cout<<num<<endl;
            return 0;
        }
        num++;

    }
    
        
    
    return 0;
}