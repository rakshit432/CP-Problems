#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; 
    cin >> n;
    queue<int>q ; 
    for(int i = 0 ; i<n ; i++)
    {        q.push(i+1);
    }

    while(!q.empty())
    {
        int ele = q.front();
        q.pop();
        q.push(ele);

        int remove_ele = q.front();
        q.pop();
        cout << remove_ele << " ";
    
    }
    return 0;
}