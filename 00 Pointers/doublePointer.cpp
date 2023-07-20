#include<bits/stdc++.h>
using namespace std;
void update(int **doublePtr)
{
    // cout<<"update: address of doublePtr: "<<&doublePtr<<endl;
    // doublePtr=doublePtr+1;

    // *doublePtr=*doublePtr+1;

    **doublePtr=**doublePtr+1;
}
int main()
{
    // cout<<"All About Double Pointers"<<endl;
    int i=5;
    int *ptr=&i;
    int **doublePtr=&ptr;

    // cout<<"Value of i: "<<i<<", or "<<*ptr<<", or "<<**doublePtr<<endl;
    // cout<<"Value of ptr: "<<&i<<", or "<<ptr<<", or "<<*doublePtr<<endl;
    // cout<<"Value of doublePtr: "<<&ptr<<", or "<<doublePtr<<endl;
    cout<<"address of doublePtr: "<<&doublePtr<<endl;
    cout<<"Before:i "<<i<<endl;
    cout<<"Before:ptr "<<ptr<<endl;
    cout<<"Before:dpublePtr "<<doublePtr<<endl;
    update(doublePtr);
    cout<<"After:i "<<i<<endl;
    cout<<"After:ptr "<<ptr<<endl;
    cout<<"After:doublePtr "<<doublePtr<<endl;
    return 0;
}