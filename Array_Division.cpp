#include<bits/stdc++.h>
using namespace std ;

bool ifpossible(vector<int>& a, long long mid, int k)
{
    int cnt = 1;

    long long sum = 0;

    for(int i = 0; i < a.size(); i++)
    {
        // Need new partition
        if(sum + a[i] > mid)
        {
            cnt++;

            sum = a[i];
        }
        else
        {
            sum += a[i];
        }
    }

    return cnt <= k;
}

int main()
{
    int n,k ;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long l = *max_element(a.begin(), a.end());
    long long r = accumulate(a.begin(), a.end(), 0LL);

    while(l<=r)
    {
        long long mid = (l+r)/2;
        if(ifpossible(a, mid, k))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << endl;
}