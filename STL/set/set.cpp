// #include<iostream>
#include<bits/stdc++.h>
// #include<functional>
// #include<set>  //set is an associative array
using namespace std;
int main(){
    set<int>s1={1,7,8,35,5,3,2};
    // set<int,greater>s1={1,7,8,35,5,3,2}; //error even with functional header file
                              // becoz greater<int>()
    //method 1 to print complete set
  //   for(const auto& vari:s1) cout<<vari<<" "; // or const auto & ke place pr int means set ka data type
  // cout<<endl;

  //   //method 2 to print complete set
  // set<int,greater<int>()>::iterator it=s1.begin();
  // for(;it!=s1.end();++it) cout<<*it<<" ";
  // cout<<endl;
 

  multiset<int>ms;
  ms.insert(1);
  ms.insert(2);
  ms.insert(3);
  ms.insert(4);
  ms.insert(4);
  ms.insert(5);
  //print
  for(auto i:ms)
      cout<<i<<" ";
  cout<<endl;
  
  //erase
  // ms.erase(1);
  // ms.erase(4); //value then all 4 will be erased
  // for(auto i:ms)
  //     cout<<i<<" ";
  // cout<<endl;
  // ms.erase(ms.begin()); //work 1st element
  // ms.erase(++ms.begin());  //work 2nd element
  // ms.erase(ms.begin(),ms.end()); //work
    //  ms.erase(ms.begin()+3); //error non-contiguous
  // vector<int>v={1,2,3,4,5};
  // v.erase(v.begin()+3); //work becoz contiguous
  // cout<<v[3]<<endl; 

    auto it=ms.begin();
    advance(it,3);
    ms.erase(it); //only single element will be erased becoz by address
  for(auto i:ms)
      cout<<i<<" ";
  cout<<endl;
  


  return 0;
}