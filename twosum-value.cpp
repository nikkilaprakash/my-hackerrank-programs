#include <bits/stdc++.h>
using namespace std;
int bs(int x,int arr[],int n)
{
    int l=0;
    int h=n-1;
    
    while(l<=h)
    {  
     int mid=l+ (h-l)/2;
        int y=arr[mid];
     if(x==y)
     {
         return 1;
     }
     else if(x<y)
        {
            h=mid-1;
        }
     else
     {
         l=mid+1;
     }
         
    }
    return 0;
}
int main() {
int n;
   cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
       
    }
    sort(arr,arr+n);
    int k;
    cin>>k;
    int f=0;
       for(int i=0;i<n;i++)
    {
  int z=  bs(k-arr[i],arr,n);
      if(z==1)
      {
          
          f++;
    } 
       }
    cout<<f;
   
    return 0;
}