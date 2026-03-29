#include <bits/stdc++.h>
using namespace std;

int main() {
    string a; cin>>a;
    string b; cin>>b;

    int i = 0;
    int j = 0;
    
    while(i < a.size() && j<b.size()){
        if(tolower(a[i]) == tolower(b[j])){
            i++;
            j++;
        } else if(tolower(a[i]) < tolower(b[j])){
          cout<<"-1"<<endl;
          break;
          
        }else if(tolower(a[i]) > tolower(b[i])){
            cout<<"1"<<endl;
            break;   
        }
        
    }

    if(i == a.size()){
        cout<<"0"<<endl;
    }
    


    return 0;
}