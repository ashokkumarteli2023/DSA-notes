// (*mymap[key]).second

#include<bits/stdc++.h>
using namespace std;
int main()
{
   // multimap
   multimap<string,int>mm;
    // mm["Ashok"]=1; // don't sport 
    
    cout<<"All about Map"<<endl;
    // empty map container
    map<int, int> gquiz1;
  
    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40)); // gquiz1[1]=40;
    gquiz1.insert(pair<int, int>(7, 10));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
    gquiz1.insert(pair<int, int>(4, 20));
  
    // printing map gquiz1
    // way-1
    map<int, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << "\t" << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
    // way-2
    for(auto it:gquiz1)
        cout<<it.first<<" "<<it.second<<" ";
        // cout<<it->first<<" "<<it->second<<" ";
    cout<<endl;

    gquiz1.erase(gquiz1.begin());
    cout<<"after removing : ";
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << "\t" << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
    gquiz1.erase(5);
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << "\t" << itr->first
             << '\t' << itr->second << '\n';
    }
    cout<<endl;
    gquiz1[4]=30;
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << "\t" << itr->first
             << '\t' << itr->second << '\n';
    }
    cout<<endl;
    cout<<gquiz1[4]<<endl;
    cout<<gquiz1.at(7)<<endl;
    gquiz1.insert({0,100});
    gquiz1.insert(make_pair(1,80));

    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << "\t" << itr->first
             << '\t' << itr->second << '\n';
    }
    cout<<endl;
    itr=gquiz1.find(4);
    for(;itr!=gquiz1.end();itr++)
    {
        cout << "\t" << itr->first
             << '\t' << itr->second << '\n';
    }
    cout<<endl;
    
    cout<<"All about unordered_map\n ";
    unordered_map<int,int>un_map;
   un_map[2]=3;
    //un_map[2]=5;  // update
    // un_map.insert(make_pair(2,5));
    // un_map.insert(pair<int,int>(2,5));
   un_map.insert({2,5});
   for(auto i=un_map.begin();i!=un_map.end();i++){
       cout<<i->first<<" "<<i->second<<endl;
   }
    cout<<endl;

    return 0;
}