// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     int hours = n/60;
//     int minutes = n%60;
//     int h = hours;
//     int m = minutes;
    

//     string mn;
//     if(m < 10){
//         mn = "0"+to_string(m);
//     }else{
//         mn = to_string(m);
//     }

//     if(h == 1){
//         cout<<"22:"<<mn<<endl;
//     }else{
//         cout<<"21:"<<mn<<endl;
//     }
    

//     return 0;
// }


//
// Created by anura on 25-05-2026.
//


#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
   int k;cin>>k;

   //Find the Hour
   int hour = k/60;
   string hrs = to_string(hour);
   //Find the Minutes
   int min = k%60;
   string min1;
   if (min<10) {
      min1 = "0"+to_string(min);
   }else {
      min1 = to_string(min);
   }
   if (!hour) {
      cout<<"21:"<<min1<<endl;
   }else {
      cout<<"22:"<<min1<<endl;
   }
}