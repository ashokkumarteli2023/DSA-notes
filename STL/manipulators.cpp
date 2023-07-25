#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    // cout<<setfill('*'); 
    // cout<<setw(5)<<setfill('*')<<6<<endl; //order not imp. for setw and setfill
    //cout<<setfill('#');
    // cout<<setw(5)<<65<<endl;
    // cout<<22/7<<endl;
    // cout<<22/7.0<<endl; //float
    // cout<<22.0/7<<endl;  //float
    // cout<<22.0/7.000<<endl;  //float
    // cout<<setprecision(4)<<22/7.0<<endl; //works only on with float values
    // cout<<setprecision(4)<<22/7<<endl; // int me kam nhi krta
    // cout<<setbase(8)<<65<<endl; //default base nhi rhta ab 8 ho jaegha
    // cout<<setiosflags(ios::oct)<<65<<endl; //default base 10 hi rhegha
    // cout<<setbase(16)<<65<<endl;
    // cout<<setiosflags(ios::hex)<<65<<endl;
    // cout<<setw(10)<<setiosflags(ios::left)<<"Raman"<<endl; //setfill('#') yha apply ho jaegha uppr wala
    // cout<<setw(10)<<setiosflags(ios::left)<<"Ramanyan"<<endl; // same yha bhi '#'
//     cout<<setw(10)<<setiosflags(ios::showpos)<<100<<endl; 
//     cout<<setiosflags(ios::showpos)<<-100<<endl; 
//    cout<<1.2345<<endl;
//    cout<<setiosflags(ios::scientific)<<13247.2345<<endl;
//   cout<<setprecision(5)<<1.23<<endl; //1.23
//   cout<<setprecision(5)<<fixed<<1.23<<endl; //1.23000
//   cout<<setprecision(5)<<fixed<<double(1.0)<<endl; 
//   cout<<setprecision(5)<<double(1.0)<<endl; 
  cout<<setprecision(5)<<fixed<<double(1.136789)<<endl; 
//   cout<<setprecision(5)<<fixed<<double(1.23e2)<<endl; 
// cout<<5/2.0; //2.5
// cout<<setiosflags(ios::hex)<<65<<endl;

// cout<<setbase(16); //or cout<<hex;
// cout<<setiosflags(ios::uppercase |ios::showbase);
// cout<<100<<endl;
// cout<<resetiosflags(ios::uppercase |ios::showbase)<<100<<endl;

// cout<<5<<endl;
// cout<<5<<ends; // used to insert a null terminating character
// cout<<5<<endl;



    return 0;
}