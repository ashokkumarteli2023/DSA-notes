#include<bits/stdc++.h>
using namespace std;
void update(int *ptr)
{
        ptr=ptr+1;
}
void updateValue(int *ptr)
{
        *ptr=*ptr+1;
}
// int getSum(int arr[],int n)
int getSum(int *arr,int n)
{
        cout<<sizeof(arr)<<endl;      //equal to pointer and arr[] == *arr
        int sum=0;
        for(int i=0;i<n;i++)
        {
                sum+=arr[i];
        }
        return sum;
}
int main()
{
    // cout<<"All abour array pointers";
//     int arr[10]={0};
    
//     cout<<"Address of first element of array: "<<arr<<endl;
//     cout<<"Address of first element of array: "<<&arr[0]<<endl;
//     cout<<"Address of first element of array: "<<&arr<<endl;    //take care
            //means arr+i == &arr[i]
    
    // cout<<"Value of second element of array: "<<*(arr+1)<<endl;
    // cout<<"Value of second element of array: "<<arr[1]<<endl;
            //means arr[i] = *(arr+i)

//     int i=3;
//     cout<<"no error: "<<i[arr]<<endl;   //*(i+arr)

        // cout<<"size of arr: "<<sizeof(arr)<<endl;   //!imp
        // cout<<"size of &arr: "<<sizeof(&arr)<<endl;
        // cout<<"size of *arr: "<<sizeof(*arr)<<endl;

        // int *ptr=&arr[0];
        // cout<<"size of ptr: "<<sizeof(ptr)<<endl;
        // cout<<"size of &ptr: "<<sizeof(&ptr)<<endl;
        // cout<<"size of *ptr: "<<sizeof(*ptr)<<endl;

        // arr=arr+1;  //can't modify Symbol table data



        //char array
        // char charArr[5]="abcd";   //last by default '/0'
        // char charArr1[4]="abcd";  //error: initializer-string for array of chars is too long 
        // cout<<"charArr is: "<<charArr<<endl;   //print all characters

        // char *charPtr=&charArr[0];
        // cout<<"*charPtr is: "<<charPtr<<endl;  //same print content

        // char temp='a';
        // char *tempPtr=&temp;
        // cout<<"tempPtr is: "<<tempPtr<<endl; //stops only when found NULL char.

        //take care
        // char ch[6]='abcde'; //first 'abcde/0' will be stored in temp memory then from temp memory it will be stored in 'ch memory'
        // char *ptr='abcde'; //{very risky} first step same then ptr will be pointed to temp memory 


        // char a[]="abc";
        // cout<<"*a: "<<*a<<endl;
        // cout<<"a: "<<*a+1<<endl;
        // cout<<"a+1: "<<*(a+1)+1<<endl;
        char ch='a';
        cout<<ch+1<<endl; //98 the addition operation is performed numerically, not as a character concatenation

        //pass by value
        // int num=5;
        // int *ptr=&num;
        // cout<<"ptr before: "<<ptr<<endl;
        // update(ptr);
        // cout<<"ptr after: "<<ptr<<endl; //same

        // cout<<"ptr before: "<<*ptr<<endl;
        // updateValue(ptr);
        // cout<<"ptr after: "<<*ptr<<endl;.

        //array
        int arr[5]={1,2,3,4,5};
        // cout<<"Sum of array element is: "<<getSum(arr,5)<<endl;
    return 0;
}