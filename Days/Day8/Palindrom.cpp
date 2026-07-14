#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
    vector<pair<int , int>> arr(26,{0,0});
    string ans = "";
    for(int i = 0; i<s.size(); i++){
       int index  = (s[i] - 'A');
       int fre = arr[index].first;
       arr[index].first = fre+1;
       arr[index].second = index;
    
    }
    
    
   
    int odd = 0; 
   for(auto it : arr){
      if(it.first%2 != 0){
       odd++;
      }
   }

    if(odd > 1){
        cout<<"NO SOLUTION"<<endl;
    }else{
        sort(arr.begin(), arr.end(), [](pair<int, int> &a, pair<int, int> &b){
          return a.first < b.first;
        });
        for(int i = arr.size()-1; i>=0; i--){
            if(arr[i].first != 0){

                if(arr[i].first%2 == 0){
    
                    int cnt  = arr[i].first/2;
        
                    //apend in answer
                    char curr = (char)(arr[i].second + 65);
                    ans += std::string(cnt, curr);
                } 
                }
            }
         for(int i = 0; i<arr.size(); i++){
            if(arr[i].first%2 == 1 && arr[i].first != 0){
                
                  int cnt = arr[i].first;
                   char curr = (char)(arr[i].second + 65);
                   ans += string(cnt, curr);
                    arr[i].first = 0;
            }
         }
        
        for(int i = 0; i<arr.size(); i++){
            //apend in answer
            if(arr[i].first%2 == 0){

                if(arr[i].first != 0){
    
                    char curr = (char)(arr[i].second + 65);
                    ans += std::string(arr[i].first/2, curr);
                }
            }
            
        }

    }
    
  
  
    cout<<ans<<endl;
    

    return 0;
}