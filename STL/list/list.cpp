// list are sequence containers that allow non-contiguous memory 
// allocation
// traversal slow( comparative to vector) but once a position has found, insertion and deletion is quick
// doubly linked list



#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
    list<int>l;
    l.push_back(1);
    l.push_back(1); //duplicate allowed
    l.push_front(11);
    l.push_front(11);
    l.push_front(111);
    l.push_front(1111);

    cout<<l.back()<<endl;  //last value
    cout<<l.front()<<endl;  //first value

    list<int>::iterator it=l.begin();
    while(it!=l.end())
     {
         cout<<*it<<" ";
         it++;
     }  
    cout<<endl;

    l.pop_back();
    l.pop_front();
    for(auto it1=l.begin();it1!=l.end();it1++)
        cout<<*(it1)<<" ";
    cout<<endl;

    l.reverse();
    for(auto it2=l.begin();it2!=l.end();it2++)
        cout<<*(it2)<<" ";
    cout<<endl;
    
    l.push_back(3);
    l.sort();
    for(auto it3=l.begin();it3!=l.end();it3++)
        cout<<*(it3)<<" ";
    cout<<endl;
    
    // l.erase(l.begin()); //1st element erase (l.begin()->iterator)
    // l.erase(l.begin()+2);  //error
    // auto it11=l.begin()+2; //error
    int k=2;
    auto it12=l.begin();
    while(k--)
    {
        it12++;
    }
    l.erase(it12); //work
    // l.erase(l.begin(),l.end()); //work

    // l.remove(11);  //remove all 11
    for(auto it4=l.begin();it4!=l.end();it4++)
        cout<<*(it4)<<" ";
    cout<<endl;

    cout<<l.size()<<endl;
    // cout<<l[0]; //non-contiguous

    l.clear(); //clear complete list
    for(auto it5=l.begin();it5!=l.end();it5++)
        cout<<*(it5)<<" ";
    cout<<endl;

    // list<int>l1={1,9,6,3,8};
    // for(auto itr:l1) cout<<itr<<" ";
    // cout<<endl;

    list<int> l1 = { 1, 2, 3 };
    list<int> l2 = { 4, 5 , 6 };

    // transfer all the elements of l2
    // l1.splice(l1.begin(), l2);
    // cout << "list l1 after splice operation" << endl;
    // for (auto x : l1)
    //     cout << x << " ";

    //  Transfer a single element. 
    // Iterator pointing to 4
    // it = l2.begin();
 
    // transfer 4 at the end of l1
    // l1.splice(l1.end(), l2, l2.begin());
    //  cout << "list l1 after splice operation" << endl;
    // for (auto x : l1)
    //     cout << x << " ";

    //transfer a list of range
    // iterator pointing to 1
    auto itc = l2.begin();
 
    // advance the iterator by 1 positions
    advance(itc, 1);
 
    // transfer  5 and 6 at the
    // beginning of l2
    l1.splice(l1.end(), l2, itc, l2.end());
 
    cout << "list l1 after splice operation" << endl;
    for (auto x : l1)
        cout << x << " ";

    return 0;
}