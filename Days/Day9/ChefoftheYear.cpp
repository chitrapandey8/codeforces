#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin>>n>>m;

    
    unordered_map<string, pair<string, int>> chef;
    /////chefs and their country
    for(int i = 0; i<n; i++){
         string s1, s2; cin>>s1>>s2;
         //Key - checf, value- chef ki occurance, or contry
         chef[s1] = {s2, 0};
    }
    
    unordered_map<string, int> con;
    while(m--){
     string S; cin>>S;
     //chef k naam
     chef[S].second++;
     string c = chef[S].first;
     con[c]++;  
    }
    
    //find the chef wiht highest frequency
    int max = INT_MIN;
    string ans1 = "";
    for(auto  it = chef.begin();  it != chef.end(); it++){
        int curr = it->second.second;
        if(curr >  max){
           ans1 = it->first;
           max = curr;
        }else if(curr == max){
            if(ans1 > it->first){
                ans1 = it->first;
            }
        }
    }

    int maxx = INT_MIN; string ans2 = "";
    for(auto it = con.begin(); it != con.end(); it++){
      if(it->second > maxx){
        ans2 = it->first;
        maxx = it->second;
      }else if(it->second == maxx){
         if(ans2 > it->first){
            ans2 = it->first;
         }
      }
    }
    
    cout<<ans2<<endl;
    cout<<ans1<<endl;
    return 0;
}