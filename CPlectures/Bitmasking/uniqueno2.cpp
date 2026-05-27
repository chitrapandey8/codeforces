#include <bits/stdc++.h>
using namespace std;


void Findunique(vector<int> arr){
    int result = 0;
    for(int i = 0; i < arr.size(); i++){
        result = result^arr[i];
    }


    int temp = result;
    int pos = 0;   ///find pos of set bit first
    while((temp&1)!=1){
        pos++;
        temp = temp>>1;
    }

    int mask = (1<<pos); //find mask


    int x = 0;
    int y = 0;
    for(int i = 0; i<arr.size(); i++){
        if(((arr[i]&mask) > 0)){
            x = x^arr[i];
        }
    }

    y = result^x;

    cout<<x<<" "<<y;

    ///find fist unqiue using setbbit
}

int main() {
    vector<int> arr = {2,2,3,5,5,7,1,1};
    Findunique(arr);
    return 0;
}