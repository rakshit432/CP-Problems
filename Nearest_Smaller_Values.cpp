#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n ;
    vector<long long> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    stack<int> st;
    int i = 0 ;
    vector<int> ans(n);
    while(i<n)
    {
        while(!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }

        if(st.empty())
        {
            ans[i] = 0;
        }
        else
        {
            ans[i] = st.top() + 1;
        }
        st.push(i);
        i++;
    }

    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << ' ';
    }
}