#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
       int i=1;
       int cnt=1;
       int j=0;

       while(i<n){
        if(v[j]+1<v[i]){
            j=i;
            cnt++;
        }
        else{
            i++;
        }
       }

       
       cout<<cnt<<endl;

    }
    return 0;
}