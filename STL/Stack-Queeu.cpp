#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
//     stack<int> st;
//     // Different Stack operations-Push,pop,size,empty,top
//     st.push(19);
//     st.push(20);
//     st.push(21);
//     st.push(22);
//     st.push(23);
//     cout << st.top() << endl;
//     st.pop();
//     cout << st.top() << endl;
//     while (!st.empty()) // Delete the stack
//     {
//         st.pop();
//     }
//     cout << st.size() << endl;

//     // Queue-Push,Pop,Front,rear,size,empty
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     cout << q.front() << endl;
//     q.pop();
//     cout << q.front() << endl;
//     while (!q.empty())
//         q.pop();
// cout<<endl;
//     // Priority queue-Push,pop,size,top,empty
//     priority_queue<int> pq;
//     pq.push(1);
//     pq.push(3);
//     pq.push(5);
//     pq.push(6);
//     cout<<pq.top()<<endl;
//     pq.pop();
//     cout<<pq.top()<<endl;
//     //Priority in pairs
//     priority_queue<pair<int,int>>pq1;
    // pq1.push(1,2);
    //  pq1.push(13,4);
//Minimum priority queue
cout<<"--------------------------"<<endl;
priority_queue<int,vector<int>,greater<int>>pq2;  //This syntax of priority queue returns smaller value at top,therefore greater<int> helps to return smaller values

pq2.push(10);
pq2.push(5);
pq2.push(15);
pq2.push(7);

pq2.pop();
while(!pq2.empty())
{
 cout<<pq2.top()<<" ";
 pq2.pop();
}
pq2.push(12);
pq2.push(1);

while(!pq2.empty())
{
 cout<<pq2.top()<<" ";
 pq2.pop();
}
 // Doubly ended queue Operation-Insertion and Deletion takes from the places

// deque<int>dq;
// //push_front()
// //push_back()
// //pop_front()
// //pop_back()
// //begin,end,rbegin,rend
// //size
// //clear
// //empty
// //at function
// list<int>ls;    

// //push_front()
// //push_back()
// //pop_front()
// //pop_back()
// //begin,end,rbegin,rend
// //size
// //clear
// //empty
// //at function
// //remove

// ls.push_front(1);
// ls.push_front(2);
// ls.push_front(3);
// for(auto it:ls)
//  cout<<it<<" ";
//  cout<<endl; 
// ls.remove(2);   //o(1) operation
// for(auto it:ls)
//  cout<<it<<" ";
//  cout<<endl;


//  // Q1.Given N elements print the element that occurs maximum number of times
//  //Input:5
//  //2 3 1 3 3;
//  //output:3

 }
