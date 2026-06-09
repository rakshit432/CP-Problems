#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
    int gelly = min(a, c);   
int flower = min(b, d); 

if (gelly >= flower)
    cout << "Gellyfish" << endl;  
else
    cout << "Flower" << endl;

    }
    return 0;
}
