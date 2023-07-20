#include<bits/stdc++.h>
using namespace std;
int main()
{
    // cout<<"All about Pointers in c++"<<endl;
    int num=5;  //memory block named num, stores 5, has a address
    // cout<<"Give me the value stored at the address: "<<num<<endl; 
            //symbol table (compiler num ka mapping rkegha address se)
    
    //address of operator -> &
    // cout<<"Address of num is: "<<&num<<endl;

    //pointer will store the address
    // int *ptr=&num;  //ptr is a pointer to int
    // cout<<"Value stored at the address containing ptr: "<<*ptr<<endl;
    // cout<<"Value stored at the address of ptr: "<<ptr<<endl;

    // int *nullPtr=0;  //address is NULL
    // nullPtr=&num;    //update the address

    // int *ptr=&num;
    // cout<<"before: "<<num<<endl;
    // (*ptr)++;
    // cout<<"after: "<<num<<endl;

    //copying
    // int *ptr=&num;
    // int *ptr1=ptr;
    // cout<<"Address of ptr: "<<ptr<<", Address of ptr1: "<<ptr1<<endl;

    int *ptr=&num;
    // cout<<"size of ptr: "<<sizeof(ptr)<<endl;
    char ch='a';
    char *charPtr=&ch;
    // cout<<"size of charPtr: "<<sizeof(charPtr)<<endl;
    cout<<"Before => ptr: "<<ptr<<", charPtr: "<<charPtr<<endl;
    ptr=ptr+1;
    charPtr=charPtr+1;
    cout<<"After => ptr: "<<ptr<<", charPtr: "<<charPtr<<endl;
    return 0;
}