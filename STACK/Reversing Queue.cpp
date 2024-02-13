#include <bits/stdc++.h> 
void reverse(queue < int > & q) {
    // Write your code here.
    if(q.empty())return ;

    int ele= q.front();
    q.pop();
    reverse(q);
    q.push(ele);
}