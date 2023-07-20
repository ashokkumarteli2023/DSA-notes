#include<iostream>
using namespace  std;
int main(){
    int arr[6]={9,3,68,35,7,23};
    for(int i=0;i<5;i++){
       for(int j=i+1;j<6;j++){
           if(arr[j]<arr[i]){
               int temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
           }
       }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<6;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}


