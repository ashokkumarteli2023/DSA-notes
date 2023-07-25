#include<iostream>

#include<typeinfo>

#include<algorithm> //sort(),

#include<array> //stl aaray
// // #include<cstring> // memcpy() function



using namespace std;
int main()
{    
    //Basic array's operations
    //  char arr1[]={'a','b','c'}; 
    // cout<<"Type of array: "<<typeid(arr1).name()<<endl;
    // cout<<"Array is: "<<arr1<<endl; //print complete array (works only in the case of array and string)
    // cout<<"1st element of array: "<<*arr1<<endl; //first element 
    // cout<<"Complete Array:-"<<endl;
    // for(int i=0;i<3;i++) {
    //     cout<<"   Array's no. "<<i<<" element: ";
    //     cout<<arr1[i]<<"or "<<*(arr1+i)<<"or "<<*(i+arr1)<<"or "<<i[arr1]<<endl; //print complete array
    // }
    // char arr2[]={'z','i','b','c','g'}; 
    // sort(arr2,arr2+sizeof(arr2)/sizeof(arr2[0])); //by using algorithm header file
    // cout<<"Sorted array: "<<arr2<<endl;

   // stl array container(static array) operations 
//   Unlike the other standard containers, Arrays are fixed-size sequence containers.
// cannot be expanded or contracted dynamically.
// swapping two array containers is a linear operation that involves swapping all the elements in the ranges individually
// Another unique feature of array containers is that they can be treated as tuple objects
     array<int,5>arr1; 
     
    // or  const int size=5; //becoz array container is a static array
    //  array<int,size>arr1;
     
    //  its functions:- 1. iterators- cr/r/c/begin()
    //                  2. capacity- size(),,empty(),   max_size()
    //                  3. element access- [],front(),back(),at(),   data()
    //                  4. modifiers- fill(), swap()
    //NOT PRESENT:- find(){coz static}

// //    const char* cstr = "Test string";
// //    array<char,12> charray; 
// // //syntax void* memcpy( void* dest, const void* src,size_t count );
// //    memcpy (charray.data(),cstr,12); 
// //    cout << charray.data() << '\n';

//    //simple array
//     // int arr[10] = {8,3,11,61,-22,7,-6,2,13,47};
//     // int new_arr[5];
//     // memcpy(new_arr,arr,sizeof(int)*5);
//     // cout << "After copying" << endl;
//     // for (int i=0; i<5; i++)
//     //     cout << new_arr[i] << endl;
    
//     // program to check whether a given number is present in an array or not
//     int num; cin>>num;
//     // int j;
//     const int size=6;
//     array<int,size>arr;
//     for(int i=0;i<size;i++) cin>>arr[i];

//     // for(j=0;j<size;j++){
//     //     if(arr[j]==num) {
//     //         cout<<"TRUE"<<endl;    
//     //         break;}
//     //      }
//     //    if(j==size) cout<<"False"<<endl;
//         sort(arr,arr+size);
//         cout<<"array after sorting: ";
//         for(int i=0;i<size;i++) cout<<arr[i]<<" ";  
    return 0;

}