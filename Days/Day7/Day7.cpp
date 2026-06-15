#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void Sorint(){
 int t; cin>>t;
    while(t--){
        vector<long long> arr;
        int n; cin>>n;
        long long l,r; cin>>l>>r;
        for (int i = 0; i < n; i++){
          long long a; cin>>a;
          arr.push_back(a);}

        long long cnt = 0;
        vector<vector<long long>> a1;
        for (int i = 0; i < arr.size(); i++){
            vector<long long> a11(2,0);
            a11[0] = arr[i];
            a11[1] = i;
            a1.push_back(a11);}
        
           
        sort(a1.begin(), a1.end(), [](vector<long long>& a, vector<long long>& b){
            return a[0] <b[0];
        });  
            
     
         int i = 0;
         int j = a1.size()-1;

         //find all the pair <=r 
         while(i < j){
            long long sum = a1[i][0] + a1[j][0];
            if(sum <= r){
                cnt += (j-i);
                i++;
            }else{
                j--;
            }
        }

            i = 0;
            j = a1.size()-1;
            long long cn2 = 0;
            while(i < j){
            long long sum = a1[i][0] + a1[j][0];
            if(sum <= l-1){
                cn2 += (j-i);
                i++;
            }else{
                j--;
            }
        
    }
     cout<<cnt-cn2<<endl;
}
}

  void tournament(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int power = 1;
        for(int i = 0; i<n; i++){
            power = power*2;
        }
        cout<<power-1<<endl;
    }
  }
};

int main() {
   solution s;
   s.tournament();


    return 0;
         
}