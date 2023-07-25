//comntainer->template class The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 
#include<iostream>
#include<utility>
using namespace std;
int main() 
{ 
  pair<int,float>g1;
  pair<int,char>g2(1, 'a');  //initialized,  different data type
  pair<int,int>g3{1, 10};   //initialized,  same data type
  cout<<g2.first<<" "<<g3.first<<endl;
  cout<<get<1>(g2)<<" "<<get<0>(g3)<<endl;

  return 0;
}