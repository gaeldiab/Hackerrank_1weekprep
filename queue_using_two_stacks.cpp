#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

void shift(stack<int>&s1,stack<int>&s2 )
{
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
}
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int query,choice,element;
    stack<int> s1,s2;
    cin>>query;
    while(query--)
    {
        cin>>choice;
        if(choice==1)
        {
            cin>>element;
            s1.push(element);
        }
        if(choice==2)
        {
            if(s2.empty())
            {
                shift(s1,s2);  
            }
            s2.pop();
        }
        if(choice==3)
        {
           if(s2.empty())
            {
                shift(s1,s2);  
            }
            cout<<s2.top()<<endl; 
        }
    }
    return 0;
}
