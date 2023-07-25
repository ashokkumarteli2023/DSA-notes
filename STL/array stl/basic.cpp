#include<bits/stdc++.h>
// #include<array> //require
using namespace std;
int main()
{
    array<int,5>num={1,2,3,4,5};
    cout<<num[0]<<endl; //1
    cout<<num[4]<<endl; //5
    // cout<<num[5]<<endl; //4201088 random , avoid it
    cout<<num.at(2)<<endl; //3
    //front and back
    cout<<num.front()<<" "<<num.back()<<endl;
    cout<<num.size()<<endl;
    
    return 0;
}