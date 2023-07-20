//dutch nation flag


#include <iostream>
// (2) #define sIZE 10
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
// (2) define size of array with the help of symbolic constant
//     int size=15;
//    float float_arr[sIZE];
//    int int_arr[size];
    
	//(3) char array operation
// 	char char_arr[2]={'a','b'};
//      cout<<char_arr[1]<<endl;
// 	cout<<char_arr<<endl;
//    cout<<"hello world";

cout<<"Basic Array  starting \n";
int a[5];
for(int i=0;i<10;i++)
{
	a[i]=i; //work but it is programmer's botheration
}
cout<<a[4]<<endl;
//All below work but it is programmer's botheration
cout<<a[5]<<endl; //5
cout<<a[9]<<endl; //9
cout<<a[10]<<endl; //random
cout<<a[11]<<endl;  //random

// int a1[2] = { 10, 20,30  }; //error
int a2[4] = { 10, 20,30  }; 
cout<<"value: "<<a2[3]<<endl;  // by default = 0

int arr[4]={1,2,3,4};
int n=4;
//Subarray-> *contiguous part of array
//Subsequence->

//print all subarrays
cout<<"all subarrays: ";
for(int s=0;s<n;s++)
{
	for(int e=s;e<n;e++)
	{
		for(int k=s;k<=e;k++)
		{
			cout<<arr[k]<<" ";
		}
		cout<<endl;
	}
}

//print all subsequences
cout<<"all subsequences: ";
//m-1 recursively o(pow(2,n))
// m-2 iteratively
// C++ program to print all Subsequences
// of a string in iterative manner
#include <bits/stdc++.h>
using namespace std;

// function to find subsequence
// string subsequence(string s, int binary, int len)
// {
// 	string sub = "";
// 	for (int j = 0; j < len; j++)

// 		// check if jth bit in binary is 1
// 		if (binary & (1 << j))

// 			// if jth bit is 1, include it
// 			// in subsequence
// 			sub += s[j];

// 	return sub;
// }

// // function to print all subsequences
// void possibleSubsequences(string s){

// 	// map to store subsequence
// 	// lexicographically by length
// 	map<int, set<string> > sorted_subsequence;

// 	int len = s.size();
	
// 	// Total number of non-empty subsequence
// 	// in string is 2^len-1
// 	int limit = pow(2, len);
	
// 	// i=0, corresponds to empty subsequence
// 	for (int i = 1; i <= limit - 1; i++) {
		
// 		// subsequence for binary pattern i
// 		string sub = subsequence(s, i, len);
		
// 		// storing sub in map
// 		sorted_subsequence[sub.length()].insert(sub);
// 	}

// 	for (auto it : sorted_subsequence) {
		
// 		// it.first is length of Subsequence
// 		// it.second is set<string>
// 		cout << "Subsequences of length = "
// 			<< it.first << " are:" << endl;
			
// 		for (auto ii : it.second)
			
// 			// ii is iterator of type set<string>
// 			cout << ii << " ";
		
// 		cout << endl;
// 	}
// }

// // driver function
// int main()
// {
// 	string s = "aabc";
// 	possibleSubsequences(s);
// 	return 0;
// }


//Q-1 Sum of all subarray
for(int i=0;i<4;i++){
	int curr=0;
	for(int j=i;j<4;j++){
		curr+=arr[j];
		cout<<curr<<" ";
	}
}

//Given an unsorted array A ,size N, of non-negative integers, 
	//find continuous subarray which adds equal to a given no.

	// int n,number; 
	// cin>>n>>number;
	// int arr[n];
	// for(int i=0;i<n;i++) 
	// {
	// 	  cin>>arr[i]; 
    // }
    // int i=0, j=0, start=-1, end=-1, sum=0;
	// while(j<n && sum+arr[j]<=number)
	// {
	// 	sum+=arr[j];
	// 	j++;
	// }
	// if(sum==number) 
	// {
	// 	cout<<i+1<<" "<<j<<endl;
	//     return 0;
	// }
	// while(j<n)
	// {
	// 	sum+=arr[j];
	// 	while(sum>number) 
	// 	{
	// 		sum-=arr[i];
	// 		i++;
	// 	}
	// 	if(sum==number) 
	// 	start=i+1;
	// 	end=j+1;
	// 	break;
	// 	j++;
	// }
	// cout<<start<<" "<<end<<endl;


//Contiguous airthmetic subarray jiska length max. ho
// int arr[10]={7,3,3,3,9,7,5,3,1,6};
//   int ans=2;
//   int curr=2;
//     int pd=arr[1]-arr[0];
//     int j=2;
//     while(j<10){
// 	if(pd==arr[j]-arr[j-1]) curr++;
// 	else { 
// 	    pd=arr[j]-arr[j-1];
// 	       curr=2; 
// 	    }
// 	ans=max(ans,curr);
// 	j++;
// }
// cout<<ans;

//the interger which comes max. times in the array print min. position of that 
	// int n; cin>>n;
	// int arr[n];
	// for(int i=0;i<n;i++) 
	// {
	// 	  cin>>arr[i]; 
    // }
	//  int N=1e5;
	// // int N; cin>>N;
	// int index[N];
	// for(int i=0;i<N;i++){
	//    index[i]=-1;
	// } 
	// int minidx=INT_MAX;
    // for(int i=0;i<n;i++)
	// {
	//  if(index[arr[i]]!=-1) 
	// 	minidx=min(minidx,index[arr[i]]);
	//  else 
	//    index[arr[i]]=i;
	// }
	
	// if(minidx==INT_MAX) cout<<"-1"<<endl;
	// else cout<<minidx+1<<endl;
	

	

	//given an array of N integers including 0. we have
	//to find the smallest + no. missing from the array

// 	int n; 
// 	cout<<"enter the size of array: ";
// 	cin>>n;
// 	int arr[n];
// 	cout<<"Enter array's elements: ";
// 	for(int i=0;i<n;i++)  cin>>arr[i];
// 	int N=1e6+2;
// 	bool check[N];
// 	for(int i=0;i<N;i++)  check[i]=0;
// 	for(int i=0;i<n;i++) 
// 	{
// 		if(arr[i]>=0) 
// 		   check[arr[i]]=1;
// 	}
// 	int ans=-1;
// 	for(int i=1;i<N;i++) {
// 		if(check[i]==0)
// 		{
// 			ans=i;
// 			break;
// 		}
// 	}
//  cout<<ans<<endl;

// the subarray's starting and ending index which has 
// max sum 

    // int n; 
	// cin>>n;
	// int arr[n];
	// int mx=INT_MIN;
	// for(int i=0;i<n;i++) cin>>arr[i];
	// for(int i=0;i<n;i++)
	// { 
	// 	int current =0;
	// 	for(int j=i;j<n;j++)
	// 	{
	// 		current+=arr[j];
	// 		mx=max(mx,current);
	// 	}
	// }
	// cout<<mx;	   
    
    // int i=0, j=0, start=-1, end=-1, sum=0;
	// while(j<n && sum+arr[j]<=number)
	// {
	// 	sum+=arr[j];
	// 	j++;
	// }
	// if(sum==number) 
	// {
	// 	cout<<i+1<<" "<<j<<endl;
	//     return 0;
	// }
	// while(j<n)
	// {
	// 	sum+=arr[j];
	// 	while(sum>number) 
	// 	{
	// 		sum-=arr[i];
	// 		i++;
	// 	}
	

	//char array -> largest world in the sentence

	// int n; cin>>n;
	// cin.ignore();
	// char arr[n+1];
	// cin.getline(arr,n);
	

	// int i=0;
	// int currLen=0, maxLen=0;
	// while(1)
	// {
	// 	if(arr[i]==' '||arr[i]=='\0')
	// 	{
	// 		if(currLen>maxLen)
	// 		{
	// 			maxLen=currLen;
	// 			currLen=0;
	// 		} 
	// 	}
	// 	else currLen++;

	// 	if(arr[i]=='\0') break;
	// 	i++;
	// }
	// cout<<maxLen<<endl;
	return 0;
}

