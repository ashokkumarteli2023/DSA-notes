// can't assign needs to create using push/pop etc. 
#include<iostream>
#include<stack>
using namespace std;

int main()
{
//    stack<int>s1= {7,4,3};  error only push/pop etc.
 stack<int>s1;
 s1.push(6);
 s1.push(7);
 s1.push(1);
 s1.push(3);
   cout<<s1.size()<<endl;
    return 0;
}



