//debug , class, function
//Recursion


#include<iostream>

using namespace std;
class ClassName{
public:
int Fib(int n)
{
    if(n<2) return n;
    return Fib(n-1)+Fib(n-2);
}

};

int main()
{
    ClassName classvar;
    int ans=classvar.Fib(4);
    cout<<ans<<endl;

    return 0;
}