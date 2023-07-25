// // // // how to take input in a single line


#include<bits/stdc++.h>
using namespace std;
 int main(){

   int a=2,b=3;
   float fa=2.0, fb=3.0;
   int c=a/b;
  // cout<<c<<" "; //0
  c=b/a;
  // cout<<c<<" ";
  c=a/fa;
  // cout<<c<<" "; //1
  c=fa/a;
  // cout<<c<<" "; //1
  c=fb/a;
  // cout<<c<<" "; //1
  c=fa/fb;
  // cout<<c<<" "; //0
  c=fb/fa;
  // cout<<c<<" "; //1
  //if int then normal

  float d=a/b;
  cout<<d<<" "; //0
  d=b/a; //1
  cout<<d<<" ";
  d=a/fa; //1
  cout<<d<<" ";
  d=fa/a; //1
  cout<<d<<" ";
  d=fb/a; //1.5
  cout<<d<<" ";
  d=b/fa;
  cout<<d<<" ";
  //float -> if(int/int) int then in float
          // -> if(int/float) or (float/int) then float;

  //% modulo can't use with float number.
  //positive nos. then normal
  //if -ve then?
  cout<<(-2)%(-2)<<" ";
  cout<<-2%3<<" ";
  cout<<2%(-3)<<" ";
  cout<<-3%2<<" ";
  
// vector<int>v={1,2,3,4,5};
// multiset<int>mSet(v.begin(),v.end());
// for(auto it=v.begin();it!=v.end();++it)
//   cout<<*it<<" ";

// cout<<"ashok\rgeeksforgeeks\n"; //o/p->geeksforgeeks
 
 
 return 0;
 }
