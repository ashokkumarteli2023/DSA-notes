// Tuple:- A finite ordered list(sequence) of data. The elements of tuples are initialized as arguments in order in which they will be accessed.
// the data elements only have values not names.
// if n tuple elements (0 to n-1)

#include<iostream>
#include<tuple>
using namespace std;
int main(){
    // tuple<string,int>tup1{"Tuple ",5}; //("Tuple ",5) this is also a way
    // auto tup2=make_tuple("Hello world",9);
    // tuple<string,int>tup22("New",'c');
    // tup1.swap(tup22);
    // cout<<get<0>(tup1)<<" "<<get<1>(tup1)<<endl;
    // cout<<tuple_size<decltype(tup1)>::value<<endl; // size 
    // cout<<get<0>(tup2)<<" "<<get<1>(tup2)<<endl;
    // ostream &operator<<(ostream &out,const tuple<string,int>&tup1){
    //     out<<get<0>(tup1)<<""<<get<1>(tup1);
    //     return out;
    // }
    // tuple<string,string>tup3;
    // tup3=make_tuple("Day","One");
    // cout<<tup3<<endl; // error 
    // tuple<int,char>tup4[5]; // correct way not similar to vector etc.
    // tuple<int,char>tup4(5);  // error
    
    // char ch('A'); //this is 
    // float f(4.70); //also a way
    // cout<<f<<endl;
    // cout<<ch<<endl;
    
    return 0;
}

