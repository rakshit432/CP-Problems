#include <bits/stdc++.h>
using namespace std;

void func(int n, int a, int b, int c) {
    if (n==1) {
        cout<<a<<" "<<b<<"\n";
        return;
    }

    func(n-1,a,c,b);
    cout<<a<<" "<<b<<"\n";
    func(n-1,c,b,a);
}

int main() {
    int n;
    cin >> n;
    
    cout<<(1<<n)-1<<"\n";
    func(n,1,3,2);
}