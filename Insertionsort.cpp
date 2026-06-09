#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int arr[6] = {3,1,5,2,9,7} ;
    
    for(int i = 1 ; i<6 ; i++)
    {   
        int j = i-1 ;

        while(j>=0)
        {
          if(arr[j]>arr[j+1])
          {
            swap(arr[j],arr[j+1]);
          }
          j-- ;  
        }
    }
    
}