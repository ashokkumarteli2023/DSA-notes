#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0, e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) e=mid-1;
        else s=mid+1;
       }
       return -1;

}

int main()
{
    int arr[5]={9,3,6,2,7};
    int vari; cin>>vari;
    sort(arr,arr+5);
    int index=binarySearch(arr,5,vari);
   cout<<"Index: "<<index<<endl;
   return 0;
}