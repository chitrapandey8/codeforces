#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin>>n>>m;
    vector<int> arr1;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        arr1.push_back(a);
    }

    vector<int> arr2; 
    for(int i= 0; i<m; i++){
        int a;  cin>>a;
        arr2.push_back(a);
    }

    int cnt = 0;
    int minn = *min_element(arr1.begin(), arr1.end());
    int index1 = 0;
    for(int i = 0; i<arr1.size(); i++){
        if(arr1[i] == minn){
            index1 = i;
        }
    }

    for(int i = 0; i<arr2.size(); i++){
        cout<<index1<<" "<<i<<endl;
        cnt++;
    }

    int maxx = *max_element(arr2.begin(), arr2.end());
    int index2 = 0;
    for(int i = 0; i< arr2.size(); i++){
      if(arr2[i] == maxx){
        index2 = i;
      }
    }

    for(int i = 0; i<arr1.size(); i++){
        if(i == index1){
            continue;
        }
        cout<<i<<" "<<index2<<endl;
        cnt++;
        if(cnt == n+m-1){
            break;
        }
    }

    return 0;
}