#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr1 = {4,5,8};
    vector<int> arr2 = {10,9,1,8};
    int d = 2;
    int cnt = 0;
    for(int i = 0; i<arr1.size(); i++){
        bool flag = true;
        for(int j = 0; j<arr2.size(); j++){
            if(abs(arr1[i] - arr2[j]) <= d){
               flag = false;
                break;
            }
        }
        if(flag){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}