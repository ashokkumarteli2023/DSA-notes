// strings are one dimentional char array terminated by 
// a null character('\0').'\0' is an escape sequence.

#include<iostream>
// #include<typeinfo>
// #include<string.h> //string and string.h different^2 but string.h==cstring

#include<string> //very useful
#include<algorithm> 

using namespace std;
int main(){
    // char str1[]={'a','b','c','\0'}; //normal way
    // char str2[]="abc"; //medium way. No need of null character. 
    // cout<<str2<<endl; //print complete string (work only with array and string)
    // char str3[]="abc def"; // complex way
    // cout<<str3<<endl;
    // cout<<typeid(str2).name();
    // int i=0;
    // while(str2[i]){
    //     cout<<str2[i]<<*(str2+i)<<*(i+str2)<<i[str2]<<endl;
    //     i++;
    // }
    //very handy use '\0'
    // char *ptr=str2; //base address
    // while(*ptr!='\0') {
    //     cout<<*ptr<<endl;
    //     ptr++;
    //     }
    
    // int length=strlen(str2); // o/p 3 '\0' not included
    // cout<<length<<endl;

// <string> functions
    //     string str;
    //     cout<<"Enter a string: ";
    //     getline(cin,str);
    //     cout<<"string: "<<str<<endl;
    //     // str.push_back('r');
    //     // cout<<"string after pushing a character: "<<str<<endl;
    //     // str.pop_back();
    //     // cout<<"after popping: "<<str<<endl;
    //     cout<<"capacity is: "<<str.capacity()<<endl;
    //     str.resize(10);
    //     cout<<"After resizing length is: "<<str.length()<<endl;
        
    //     // str.shrink_to_fit();
    //     // cout<<"Now capacity is: "<<str.capacity()<<endl; 
    //     string str2={"Ravish Prakash Teli"};
    //     // str.swap(str2);
    //     // cout<<"after swapping str is: "<<str<<endl; //no locha of sizes they can be diff.
        
    //     // char ch[10];
    // //    str2.copy(ch,4,0);
    // //    cout<<"ch obtained by doing copy: "<<ch<<endl; 
        
    //     string sub_str=str2.substr(0,6); //substr(a,b)
    //     cout<<"sub string is: "<<sub_str<<endl;

    //     // str2.erase(4,2);
    //     // cout<<"str2 after erasing some part: "<<str2<<endl;
    //     int index1=str2.find("T"); //find me argument "string"hota h
    //     cout<<"index of T in str2 is: "<<index1<<endl;
    //     int index2=str2.find("a");  //first a ka index
    //     cout<<"index of a in str2 is: "<<index2<<endl;
    //     str2.replace(0,6,"Ravi");
    //     cout<<"after replacing : "<<str2<<endl;


    //     string a(1,' '); 
    //     cout<<"length: "<<a.length()<<"& size: "<<a.size()<<endl;
     
     string str="aabbccddee"; 
    //  cin>>str;

     //to uppercase 
     //M-1
    //  for(int i=0;i<str.size();i++)
    //  {
    //      if(str[i]>='a'&&str[i]<='z')
    //      {
    //          str[i]-=32;
    //      }
    //  }
    // cout<<str<<endl;

    transform(str.begin(),str.end(),str.begin()+4,::toupper);
    cout<<str<<endl;
    return 0;
}