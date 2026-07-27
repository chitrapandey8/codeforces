
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n; 
//     string s; cin>>s;
//     vector<pair<int, int>> arr(26, {0,0});
//     for(int i = 0; i<n; i++){
//         if(s[i] >= 'a' && s[i] <= 'z'){
//             arr[s[i] - 'a'].first++;
//         }else{
//             arr[s[i] - 'A'].second++;
//         }
//     }
//     bool flag  = true;
//     for(int i = 0; i<arr.size(); i++){
//         if(arr[i].first == 0 && arr[i].second == 0){
//             cout<<"NO"<<endl;
//             flag = false;
//             break;
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
//     int n; cin>>n;
//     vector<int> arr(n,0);
//     int p; cin>>p;
//     while(p--){
//         int a; cin>>a;
//         arr[a-1]++;
//     }

//     int q; cin>>q;
//     while(q--){
//         int a; cin>>a;
//         arr[a-1]++;
//     }

//      bool flag =  true;
//      for(int i =0; i<arr.size(); i++){
//         if(arr[i] == 0){
//             flag = false;
//             cout<<"Oh, my keyboard!"<<endl;
//             break;
//         }
//      }

//      if(flag){
//         cout<<"I become the guy."<<endl;
//      }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     vector<int> arr;
//     arr.push_back(1);
//     arr.push_back(5);
//     arr.push_back(10);
//     arr.push_back(20);
//     arr.push_back(100);
//     int ans  = 0;
//     for(int i = arr.size()-1; i>=0; i--){
//         if(arr[i] > n){
//             continue;
//         }
//         ans += n/arr[i];
//         n = n%arr[i];
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int k,l,m,n,d; cin>>k>>l>>m>>n>>d;
//     vector<int> arr(d+1, 0);
//     for(int i = k; i<=d; i = i+k){
//         arr[i]++;
//     }
//     for(int i = l; i<=d; i = i+l){
//         arr[i]++;
//     }
//     for(int i = m; i<=d; i = i+m){
//         arr[i]++;
//     }
//     for(int i = n; i<=d; i = i+n){
//         arr[i]++;
//     }
   
   
    
//     int ans = 0;
//     for(int i =1; i<arr.size(); i++){
//         if(arr[i] > 0){
//          ans++;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     unordered_map<string, int> mp;
//     mp.insert({"Tetrahedron", 4});
//     mp.insert({"Cube", 6});
//     mp.insert({"Octahedron", 8});
//     mp.insert({"Dodecahedron", 12});
//     mp.insert({"Icosahedron", 20});
    
   
//     int ans = 0;
//     while (n--)
//     {
//         string s; cin>>s;
//         ans += mp[s];
//     }
//     cout<<ans<<endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin>>n>>m;
    bool flaggg = true;
    for(int i = 0; i<n; i++){
        if(i%2 == 0){
            for(int i = 0; i<m; i++){
                cout<<"#";
            }
        }else{
            if(flaggg){
                for(int i = 0; i<m-1; i++){
                    cout<<".";
                }
               cout<<"#";
               flaggg = false;
            }else{
                cout<<"#";
                for(int i = 0; i<m-1; i++){
                    cout<<".";
                }
                flaggg = true;
            }
           
        }
        cout<<endl;
    }
    return 0;
}