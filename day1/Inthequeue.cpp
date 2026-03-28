#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int sec; cin>>sec;

    string s; cin>>s;

    for(int i = 1; i<=sec; i++){
        for(int j = 0; j<s.size()-1; j++){
            if(s[j] == 'B' && s[j+1] == 'G'){
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                j++;
            }
        }
    }
    cout<<s<<endl;

     

    return 0;
}