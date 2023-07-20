#include<iostream>
using namespace std;
int main(){
    int arr[5]={8,31,5,71,3};
    int pass=1;
    while(pass<5){
        for(int i=0;i<5-pass;i++){ //5==5-pass but only when time complexity doesn't matter
            if(arr[i+1]<arr[i]){
              int temp=arr[i+1];
              arr[i+1]=arr[i];
              arr[i]=temp;}


        }
        pass++;
    }

    // for(int pass=0;pass<5-1;pass++){
    //     for(int i=0;i<5-pass;i++){
    //         if(arr[i+1]<arr[i]){
    //           int temp=arr[i+1];
    //           arr[i+1]=arr[i];
    //           arr[i]=temp;}


    //     }
        
    // }
    cout<<"Sorted array: ";
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}