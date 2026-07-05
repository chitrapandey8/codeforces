// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin>>t;
//     while(t--){

//         string s; cin>>s;
        
        
//         int n = s.size();
//         bool flag = true;
//            while(flag){
    
//                int j = 0;
//                while(j<n-1){
//                    if(s[j] == 'A' && s[j+1] == 'B'){
//                        s.erase(s.begin()+j);
//                        s.erase(s.begin()+j+1);
//                     //    n = n-2;
//                        cout<<s<<endl;
//                        flag = true;
//                    }else if(s[j] == 'B' && s[j+1] == 'B'){
//                        s.erase(s.begin()+j);
//                        s.erase(s.begin()+j+1);
//                     //    n = n-2;
//                        cout<<s<<endl;
//                        flag = true;
                   
                  
//                }}

//                j++;
//                if(j == s.size()-1){
//                 flag = false;
//                }
//            }
//         cout<<s.size()<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        string ans  = "";
        for(int i = 0; i<s.size(); i++){
            if(ans.empty()){
                ans.push_back(s[i]);
            }else if(ans.back() == 'A' && s[i] == 'B'){
                ans.pop_back();
            }else if(ans.back() == 'B' && s[i] == 'B'){
                ans.pop_back();
            }else{

                ans.push_back(s[i]);
            }
        }
       cout<<ans.size()<<endl;
    }
    return 0;
}