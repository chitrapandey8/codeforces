// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin>>t;
//     while(t--){
//         int a, b, c; cin>>a>>b>>c;
//         bool flag = true;
//         if(a+b == c){
//             cout<<"YES"<<endl;
//             flag= false;
//         }else if(b+c == a){
//             cout<<"YES"<<endl;
//             flag = false;
//         }else if(a+c == b){
//             flag = false;
//             cout<<"YES"<<endl;
//         }

//        if(flag){
//            cout<<"NO"<<endl; 
//        }

//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin>>t;
//     while(t--){
//         int a; cin>>a;
//         a--;
//         int ans = a/2;
//         cout<<ans<<endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     vector<pair<int, int>> arr;
//     while(n--){
//         int a, b; cin>>a>>b;
//         arr.push_back({a,b});
//     }
    
//     int cnt = 0;
//     for(int i = 0; i<arr.size(); i++){
//         for(int j = 0; j<arr.size(); j++){
//             if(arr[i].second == arr[j].first){
//                 cnt++;
//             }
//         }
//     }
//     cout<<cnt<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s1,s2,t; cin>>s1>>s2>>t;
//     vector<int> arr1(26,0);
//     vector<int> arr2(26,0);

//     for(int i = 0; i<s1.size(); i++){
//         arr1[s1[i] - 'A']++;
//     }
//     for(int i = 0; i<s2.size(); i++){
//         arr1[s2[i] - 'A']++;
//     }
//     for(int i = 0; i<t.size(); i++){
//         arr2[t[i] - 'A']++;
//     }

//     bool flag =  true;
//     for(int i = 0; i<26; i++){
//         if(arr1[i] != arr2[i]){
//             cout<<"NO"<<endl;
//             flag = false;
//             break;;
//         }
//     }
//     if(flag){
//         cout<<"YES"<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> arr;
//     int n = 3;
//     while(n--){
//      int a; cin>>a;
//      arr.push_back(a);
//     }

//     sort(arr.begin(), arr.end());
//     int cnt = 0;
//     cnt += arr[1] - arr[0];
//     cnt += arr[2] - arr[1];
//     cout<<cnt<<endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin>>t;
//     while(t--){
//         string s; cin>>s;
//         if(tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's'){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np; cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int nooftoasticanmakeiml = k*l/nl;
    int toastperlime = c*d;
    int toastperslat = p/np;
    
    int minn = min({nooftoasticanmakeiml, toastperlime, toastperslat});
    int ans = minn/n;
    cout<<ans<<endl;
 
    return 0;
}