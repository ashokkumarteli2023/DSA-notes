 
#include<iostream>
#include<queue>

//deque doubly-ended queue 
#include<deque> // required for deque

using namespace std;
int  main()
{ 
   cout<<"all about  qeque\n";
   queue<int>q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);
   cout<<"size: "<<q.size()<<endl;
   cout<<"back: "<<q.back()<<" ";
   q.pop(); //front (uska kaam ho gya h)
   while(!q.empty())
    {
        cout<<"front: "<<q.front()<<" ";
        
        q.pop();
    }
    
    cout<<"\n";
    





    cout<<"all about  deque\n";
     deque<int>dq;
     dq.push_back(20);
     dq.push_back(30);
     dq.push_back(25);
     dq.push_front(10);
     cout<<"Front: "<<dq.front()<<endl;
     cout<<"Back: "<<dq.back()<<endl;
     dq.push_back(35);
     dq.push_front(5);
     dq.pop_back();
     dq.pop_front();
     cout<<"print deque: ";
     for(int i=0;i<dq.size();i++)
     {
         cout<<dq[i]<<" ";
     } cout<<endl;






    cout<<"all about priorty queue\n";
    priority_queue<int>pq;
     // required #include<queue>
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(50);
    pq.push(40);
    cout<<"Top: "<<pq.top()<<endl; //max. among all
    pq.pop();

    // cout<<pq.back(); //error
    //print
    while(!pq.empty()) 
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }


    
    return 0;
}