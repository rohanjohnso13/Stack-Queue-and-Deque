
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int t,n,i;
    cin >> t;
    string s;
    deque<int> q;
    for(i=0;i<t;i++)
    {
        cin >> s;
        if(s=="push_front")
        {
            cin >> n;
            q.push_front(n);
        }
        else if(s=="push_back")
        {
            cin >> n;
            q.push_back(n);
        }
        else if(s== "pop_front")
        {
            if(q.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop_front();
            }
        }  
         else if(s== "pop_back")
        {
            if(q.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << q.back() << endl;
                q.pop_back();
            }
        }  
    }
}
