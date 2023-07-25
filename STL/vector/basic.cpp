// if i iterator then *i value
//int maxOfAll=*max_element(v.begin(),v.end())
//unique is used to remove duplicates of any element present consecutively in a range[first, last).
    //1st It does not delete all the duplicate elements, but it removes duplicacy by just replacing those elements by the next element present in the sequence which is not duplicate to the current element being replaced.
    //2nd it does not changes the size of the container after deleting the elements, it just returns a pointer pointing to the new end of the container
    //ex. int removeDuplicates(vector<int>& nums) {
        // nums.erase(unique(nums.begin(),nums.end()),nums.end());
        // return nums.size();
    //3rd nums.begin(),nums.end(),pred) ->pred function return bool {abhi itna hi}





#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"All about vector\n";
    vector<int>v;
    cout<<v.max_size()<<endl; //1073741823
    if(v.empty())
        cout<<"vector is empty"<<endl;
    //push_back & pop_back
    v.push_back(1);
    v.push_back(11);
    v.push_back(111);
    v.push_back(1111);
    v.push_back(11111);
    cout<<v.max_size()<<endl; //1073741823 same
    cout<<v.capacity()<<endl;
    cout<<"1st: "<<v.front()<<"  last: "<<v.back()<<endl;
    v.pop_back();
    
    for(auto i:v)
       cout<<i<<" ";
    cout<<"\n";

    //erase
    v.erase(v.begin()+3);
    v.erase(v.begin()+2,v.end());
   for(auto i:v)
       cout<<i<<" ";
    cout<<"\n";


    
    // vectorname.assign(int size, int value) modify values and may length also
    v.assign(3,0);
    for(auto i:v)
       cout<<i<<" ";
    cout<<"\n";

    //clear
    v.clear(); //{} empty
    vector<int>int_vec={1,5,7,2,6,3,4};
    // sort
     sort(int_vec.begin(),int_vec.end(),greater<int>()); //descending
     for(auto i:int_vec)
       cout<<i<<" ";
    cout<<"\n";

    //2-d vector

    //doubt-1
    // vector<vector<int>>dou(7);
    // for(int i=0;i<dou.size();i++)
    //         cout<<dou[i][0]<<"empty";
    // cout<<endl;

//// vector<vector<int>>v(7);
// v[0].push_back();//work

        
    vector<int>vec;
    //insert
    // Return value: The function returns an iterator which points to the newly inserted element. 
    //vector_name.insert(position, size, val)
    //vector_name.insert(position, iterator1, iterator2)
    auto it1=vec.insert(vec.begin(),1)    ;
    vec.insert(it1,2);
    for(auto i:vec)
        cout<<i<<" ";
    cout<<endl;


    return 0;
}