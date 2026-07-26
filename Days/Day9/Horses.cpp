// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
//     int n = 4;
//     unordered_map<int, int> hm;
//     while(n--){
//         int a; cin>>a;
//         hm[a]++;
//     }

    
//     int ans = 4 - hm.size();
//     cout<<ans<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string n1; string n2; cin>>n1>>n2;
//     int n = n1.size();
//     int i = 0;
//     string ans = "";
//     while(i < n){
//         if(n1[i] != n2[i]){
//             ans += to_string(1);
//         }else{
//             ans += to_string(0);
//         }
//         i++;
//     }
//      cout<<ans<<endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n1, n2; cin>>n1>>n2;
        int n = n2;
        int ans = 0;
        
        if(n1>n2){
            while(n2<n1){
                n2 = n2+n;
            }
            
            ans = n2-n1;
        }else{
             ans = n2-n1;
        }

        cout<<ans<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1; cin>>n1;
    string ans = "";
    for(int i = 0; i < n1; i++){
        if(i%2 == 0){
            ans += "I hate";
        }else{
            ans += "I love";
        }
        
        ans += " that ";
    }
    int size = ans.size();
    ans.pop_back();
    ans.pop_back();
    ans.pop_back();
    ans.pop_back();
    ans.pop_back();
    ans += "it";
    cout<<ans<<endl;
    return 0;
}