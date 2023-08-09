#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;
    string s="";
    int option; 
    string append;
    int k;
    cin>>q;
    stack<string> last;
    while(q--)
    {
        cin>>option; 
        if(option ==1)
        {
            cin>>append;
            last.push(s);
            s = s+append;
        }
        else if(option ==2)
        {
            cin>>k;
            last.push(s);
            s.erase(s.size()-k);
        }
        else if(option ==3)
        {
           cin>>k;
           cout<<s[k-1]<<endl; 
        }
        else if(option ==4)
        {
            s=last.top();
            last.pop();
        }
    }
    return 0;
}
