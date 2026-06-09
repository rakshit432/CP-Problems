#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (auto &i : a)
        {
            cin >> i;
        }

        switch (k)
        {
        case 2:
        {
            bool foundEven = false;
            for (auto &i : a)
            {
                if (i % 2 == 0)
                {
                    foundEven = true;
                    cout << "0" << endl;
                    break;
                }
            }
            if (!foundEven)
            {
                cout << "1" << endl;
            }
            break;
        }

        case 3:
        {
            int maxi = INT_MIN;
            bool f1 = 0 ;
            for (auto &i : a)
            {   
                if(i%3 == 0)
                {
                    f1 = 1 ;
                    cout<<"0"<<endl ;
                }
                maxi = max(i % 3, maxi);
            }
            if(!f1)
            cout << 3 - maxi << endl;
            break;
        }

        case 4:
        {
            int cnt = 0,maxi2=0;
            bool f4 = 0 ;
            for (auto &i : a)
            {   
                if(i%4 == 0)
                {
                   f4 = 1 ;
                   cout<<"0"<<endl ;
                   break;
                }

                if (i % 2 == 0)
                {
                    cnt++;
                }
                maxi2 = max(maxi2,i%4);
            }

            if (cnt >= 2 && !f4)
            {
                cout << "0" << endl;
                break;
            }

            else if(cnt<2 && !f4)
            {
                cout<<min(2-cnt,4-maxi2)<<endl;
            }
            break;
        }

        case 5:
        {
            int maxi2 = INT_MIN;
            bool f = 0 ;
            for (auto &i : a)
            {   
                if(i%5 == 0)
                {
                    f=1 ;
                    cout<<"0"<<endl;
                    break ;
                }
                maxi2 = max(i % 5, maxi2);
            }
            
            if(!f)
            cout << 5 - maxi2 << endl;
            break;
        }

        default:
            cout << "Invalid value for k" << endl;
            break;
        }
    }
}
