#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long int n;
    cin>>n;
    int i,arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    int min=arr[0];
    int index;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            index=i;
        }
    }
    int temp;
    if(min!=arr[0])
    {
        temp=arr[0];
        arr[0]=arr[index];
        arr[index]=temp;
        
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}