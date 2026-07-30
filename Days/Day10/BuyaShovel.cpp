// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int k, r; cin>>k>>r;
//     int h = k;
//     int cnt = 1;
//     while(k%10 != 0 && k%10 != r){
//       cnt++;
//       k = k + h;
//     }
//     cout<<cnt<<endl;
    
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin>>t;
//     while(t--){
//         string s; cin>>s;
//         int sum1  = 0;
//         for(int i = 0; i<3; i++){
//             sum1 += s[i] - '0';
//         }
//         int sum2 = 0;
//         for(int i = 3; i<s.size(); i++){
//             sum2 += s[i] - '0';
//         }
//         if(sum1 == sum2){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int x1, x2, x3, x4; cin>>x1>>x2>>x3>>x4;
//     int maxx = max({x1, x2, x3, x4});
    
//     if(maxx != x1){
//         cout<<maxx-x1<<" ";
//     }
//     if(maxx != x2){
//         cout<<maxx-x2<<" ";
//     }
//     if(maxx != x3){
//         cout<<maxx-x3<<" ";
//     }
//     if(maxx != x4){
//         cout<<maxx-x4<<" ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin>>a>>b;
    int socks = min(a,b);
    a = a-socks;
    b = b-socks;
    cout<<socks<<" ";
    if(a != 0){
        cout<<a/2<<endl;
    }else{
        cout<<b/2<<endl;
    }

    return 0;
}