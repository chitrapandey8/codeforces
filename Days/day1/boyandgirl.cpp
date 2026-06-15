#include <bits/stdc++.h>
using namespace std;

int main() {

    string s; cin>>s;
    unordered_map<char, int> hm;
    for(int i = 0; i<s.size(); i++){
        if(hm.count(s[i])){
            hm[s[i]]++;
        }else{
            hm.insert({s[i],1});
        }
    }

    if(hm.size()%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}