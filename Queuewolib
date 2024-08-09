#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int t,n,i;
    cin >> t;
    string s;
    queue<int> q;
    for(i=0;i<t;i++)
    {
        cin >> s;
        if(s== "Enqueue")
        {
            cin >> n;
            q.push(n);
        }
        else if(s== "Dequeue")
        {
            if(q.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }    
    }
}
