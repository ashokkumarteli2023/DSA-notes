#include<iostream>
using namespace std;
int main(){
    int arr[9]={7,3,7,9,0,4,24,8,5};
    for(int i=1;i<9;i++){
        int current= arr[i];
        int j=i-1;
        while(arr[j]>current&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout<<"Sorted array: ";
    for(int i=0;i<9;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}