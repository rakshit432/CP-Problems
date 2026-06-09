#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt0=0;
        int cnt1=0;

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cnt0++;
            }
            else{
                cnt1++;
            }
        }

       set <int> st1;

       if(cnt0==0||cnt1==0){
        st1.insert((cnt0+cnt1)/2);
        if(st1.find(k)!=st1.end()){
        cout<<"YES"<<endl;
        continue;
       }

       else{
        cout<<"NO"<<endl;
        continue;
       }
       }


       int x1  =  min(cnt0,cnt1);
       
       for(int i=1;i<=x1;i++){
        st1.insert((cnt0/2)+(cnt1/2));
        cnt0--;
        cnt1--;
       }

       if(st1.find(k)!=st1.end()){
        cout<<"YES"<<endl;
        
       }

       else{
        cout<<"NO"<<endl;
        
       }
       
    }
    return 0;
}