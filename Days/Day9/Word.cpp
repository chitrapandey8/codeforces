// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s; cin>>s;
//     int Lower = 0 ,upper =0 ;
//     for(int i = 0; i<s.size(); i++){
//         if(s[i] >= 'a' && s[i] <= 'z'){
//             Lower++;
//         }else{
//             upper++;
//         }
//     }

//     if(Lower >= upper){
         
//         transform(s.begin(), s.end(), s.begin(), ::tolower);
//     }else{
//         transform(s.begin(), s.end(), s.begin(), ::toupper);
//     }
//     cout<<s<<endl;
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s, t; cin>>s>>t;
//     reverse(s.begin(), s.end());
//     if(s == t){
//         cout<<"YES"<<endl;
//     }else{
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, h; cin>>n>>h;
//     vector<int> arr;
//     for(int i = 0; i<n; i++){
//         int a; cin>>a;
//         arr.push_back(a);
//     }

//     int ans  =0;
//     for(int x: arr){
//       if(x > h){
//         ans += 2;
//       }else{
//         ans++;
//       }
//     }

//     cout<<ans<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     int total =0;
//     int maxans = INT_MIN;
//     while(n--){
//         int exit, in; cin>>exit>>in;
//         total = total-exit;
//         total = total + in;
//         maxans = max(maxans, total);

        
//     }
//     cout<<maxans<<endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     string ans = "EASY";
//     while(n--){
//         int a; cin>>a;
//         if(a){
//             ans = "HARD";
//         }
        
//     }
//     cout<<ans<<endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     int ans = 0;
//     while(n--){
//         int curr, total; cin>>curr>>total;
//         if(total - curr >= 2){
//            ans++;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long n; cin>>n;
//     long long ans = 0;
//     if(n%2 == 0){
//         ans = n/2;
//     }else{
//         ans = -(n/2+1);
        
//     }
//     cout<<ans<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    string curr = "";
    int ans =0;
    while(n--){
        string s1; cin>>s1;
        if(curr != s1){
          ans++;
        }
        curr = s1;
        
    }
    cout<<ans<<endl;
    return 0;
}