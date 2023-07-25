// ::vari_name -> Global variable
//bitwise operator-> &,!,|,>>,<<,^,~
//O(N+M) -> O(N) if N>>>M
//int sum+=5;//error sum's value???

#include<bits/stdc++.h>
using namespace std;
//About template

// c++ adds two new keywords to support templates: ‘template’ and ‘typename’. 
// The second keyword can always be replaced by keyword ‘class’.
// template<class T>
//  class Calculator{
//      private:
//      T num1, num2;
//      public:
//      Calculator(T n1, T n2){
//          num1=n1;
//          num2=n2;
//      }
//      void display_Result(){
//          cout<<add()<<endl;
//      }
//      T add(){
//          return num1+num2;
//      }
//  };

//simple example of class template 
// T big(T var1, T var2){
//     if(var1>var2)
//        return var1;
//     else
//        return var2;
// }
 
 int main()
 {
     // vector container(dynamic array)
    //  Calculator<int>int_Cal(2,1);
    //  Calculator<float>float_Cal(2.4,7.9);
    //  int_Cal.display_Result();
    //  float_Cal.display_Result();

    // cout<<big(84,93)<<endl;
    // cout<<big(838.93,939.849)<<endl;
    
    
    // // char ascii value examples
    // cout<<big('a','d')<<endl;
    // cout<<big('0','8')<<endl;
    // cout<<big('@','$')<<endl;
    // 1-31 decimal ascii is not of our interest
    //cout<<big('NUL','SOH')<<endl;  
    // char a='SOH';
    // cout<<a<<endl; 
    

    //to increase speed of cin and cout
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    //random no.
    // srand(time(0)); //really random nos.
    // int c=rand(); //random but follow a constant pattern
    // cout<<c<<endl;

    //sliding window
    // int count=0;
    // vector<bool>dp(3,0);
    // count+=dp[0]; //work in c++ online
    // cout<<count<<endl;

    

    return 0;
}