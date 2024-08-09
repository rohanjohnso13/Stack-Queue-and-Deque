#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int t,n,i;
    cin >> t;
    string s;
    stack<int> st;
    for(i=0;i<t;i++)
    {
        cin >> s;
        if(s== "push")
        {
            cin >> n;
            st.push(n);
        }
        else if(s== "pop")
        {
            if(st.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << st.top() << endl;
                st.pop();
            }
        }    
    }
}
