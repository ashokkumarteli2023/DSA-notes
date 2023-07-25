#include<iostream>
using namespace std;
void display(int q[][2],int row,int col) //int *q  & int (*q)[2] possible but i have doubt for use of these
{
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<q[i][j]<<" ";
        }cout<<endl;
    }
}

int main()
{
//     int a=1;
// //     int b=2;
//     int *p=&a;
// //     int *q;
// //     q=&b;
// //     cout<<p<<" "<<q<<endl;
// //     cout<<*p<<" "<<*q<<endl;
//     p++;
//     cout<<"after increment in int pointer p: "<<p<<endl;
    // cout<<*p<<endl;  // garbage value
//     q--;
//     cout<<"after decrement in int pointer q: "<<q<<endl;
//     cout<<"address after adding a no. in an int pointer p: "<<p+a<<endl;
//     cout<<"address after subtracting a no. in an int pointer q: "<<q-b<<endl;
//     cout<<"subtraction of two pointers: "<<p-q<<endl;

//     *p=10; // p jis address ko point kr rha h us address pr value 10 hojaeghi
//     cout<<"Address: "<<p<<" Value: "<<*p<<endl;
    
//     // *q=*p;
//     // cout<<"Value of q: "<<*q<<endl;
//     q=p; // value of pointer p is copied
//     cout<<"address after assigned: "<<q<<" "<<p<<endl;
//     *p=20;
//     cout<<"Value of q: "<<*q<<endl;
//     // cout<<"VALUE after assigned: "<<*q<<endl; //VALUE EQUAL TO THE ADDRESS
    

//   PART-2
    //  int a[]={1,4,6};
    //  cout<<a<<endl;   //base address
    //  cout<<*a<<endl;
    //  char a1[]={'1','2'};
    //  cout<<a1<<endl; // complete elements in the case of array and stirng
    //  cout<<*a1<<endl;
     
    //  int numbers[5];
     
//      int *p;
//      p = numbers;  *p = 10;
//   p++;  *p = 20;
//   p = &numbers[2];  *p = 30;
//   p = numbers + 3;  *p = 40;  //numbers array ka address always fix rhta h
//   p = numbers;  *(p+4) = 50;
//   for (int n=0; n<5; n++)
//     cout << numbers[n] << ", ";
//   cout<<endl<<endl;

//part-3  pointer size 
// int *p; float *q; double *r;
// cout<<"Base address of int pointer: "<<p<<endl;
// cout<<"Base address of float pointer: "<<q<<endl;
// cout<<"Base address of char pointer: "<<r<<endl;
// p++; //increment = size of int
// q++; //increment = size of float
// r++; //increment = size of double
// cout<<"address of 2nd element of int pointer: "<<p<<endl;
// cout<<"address of 2nd element of float pointer: "<<q<<endl;
// cout<<"address of 2nd element of char pointer: "<<r<<endl;

// 2-d array pointer
int a[2][2]={  //a[][2] bhi likh skte
      1,2,
      3,4
};
// cout<<a<<" "<<*a<<" "<<**a<<endl;
// cout<<a+1<<" "<<*a+1<<" "<<**a+1<<endl; //a 2-d *a 1-d **a value

// int *ptr1;
// ptr1=(int *)a;  
// cout<<"address of 2-d array "<<a<<endl;
// // cout<<"address of 2-d array pointer "<<ptr1<<endl;
// // ptr1++;
// // cout<<"address of 2-d array pointer after increment "<<ptr1<<endl;
// // cout<<"address of 2-d array pointer after increment "<<ptr1+1<<endl;

//dynamic memory allocation
int vari = 1;
int *ptr = &vari;
//new
int *ptr1 = new int(40);
cout<<"the value at ptr1 is: "<<*(ptr1)<<endl;
delete ptr1;
cout<<"the value at ptr1 after doing free: "<<*(ptr1)<<endl;  //garbage value
int *arr = new int[5];
arr[0]=0;
arr[1]=1;
arr[2]=2;
cout<<"the value at arr[0] is: "<<arr[0]<<endl;
cout<<"the value at arr[1] is: "<<arr[1]<<endl;
cout<<"the value at arr[3] is: "<<arr[3]<<endl; //garbage
cout<<"the value at arr[4] is: "<<arr[4]<<endl; //values
delete[] arr;
cout<<"value after delete arr[]: ";
cout<<"the value at arr[0] is: "<<arr[0]<<endl;
cout<<"the value at arr[1] is: "<<arr[1]<<endl;
cout<<"the value at arr[3] is: "<<arr[3]<<endl;




// int (*q)[2];  //==int q[][2] eqivalent to 2-d array
// cout<<q<<endl;
// cout<<"after increment: "<<q+1<<endl;
// q=a;
// cout<<q<<endl;
// q++;
// cout<<q<<endl;

//pass 2-d array to a function
display(a,2,2);


return 0;

}