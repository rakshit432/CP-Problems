#include<bits/stdc++.h>
using namespace std;    


int main()
{
    int n ; 
    cin >> n ;

    vector<int> arr(n) ;
    for(int i = 0 ; i < n ; i++) cin >> arr[i] ;

    vector<int> top ;
    for(auto it:arr)
    {
        auto it2 = upper_bound(top.begin(),top.end(),it) ;
        if(it2 == top.end()) top.push_back(it) ;
        else *it2 = it ;
    }
    cout << top.size() << endl ;
}