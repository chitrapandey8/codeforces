#include <bits/stdc++.h>
using namespace std;

int main() {
    int val; cin>>val;
    vector<int> arr;
    for(int i = 0; i<val; i++){
       int a;  cin>>a;
       arr.push_back(a);
    }

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    for(int x : arr){
     if(x%2 == 0){
        even++;
     }

     if(x < 0){
        negative++;
     }

     if(x > 0){
        positive++;
     }

     if(x % 2 != 0){
        odd++;
     }
    }

    cout<<"Even:"<<" "<<even<<endl;
    cout<<"Odd:"<<" "<<odd<<endl;
    cout<<"Positive:"<<" "<<positive<<endl;
    cout<<"Negative:"<<" "<<negative<<endl;

    return 0;
}