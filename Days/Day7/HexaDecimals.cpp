// #include <bits/stdc++.h>
// using namespace std;

// pair<int, int> factorial(int n){

//     if(n == 0){
//         return {0,0};
//     }

//     if(n == 1){
//         return {0,1};
//     }

// int n1 = 0;
// int n2 = 1;
// int n3 = 0;
// while (n2!=n)
// {
//     n3 = n1+n2;
//     if(n3 == n){
//         break;
//     }
//     n1 = n2;
//     n2 = n3;
// }


// return {n1,n2};

// }

// int main() {
//     int n; cin>>n;
//     pair<int, int> p = factorial(n);
//     pair<int, int> pp = factorial(p.first);



//     int first = pp.first;
//     int second = pp.second;
//     int third = p.second;
//     cout<<first <<" "<<second<<" "<<third<<endl;
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    if(n == 0){
        cout<<0<<" "<<0<<" "<<0<<endl;
        return 0;
    }
    if(n==1){
        cout<<0<<" "<<0<<" "<<1<<endl;
        return 0;
    }
    if(n==2){
        cout<<0<<" "<<1<<" "<<1<<endl;
        return 0;
    }

    vector<int> fac;
    fac.push_back(0);
    fac.push_back(1);

    int i = 2;
    while(true){
        int next_fac = fac[i-1] + fac[i-2];
        fac.push_back(next_fac);

        if(next_fac == n){
            cout<<0<<" "<<fac[i-2]<<" "<<fac[i-1]<<endl;
            return 0;
        }
        i++;
    }
    return 0;
}