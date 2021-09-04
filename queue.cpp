#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    queue<int>q;
    int n;
    cin>>n;
    int k;
    cin>>k;
    int x;
    while(k--)
    {
        cin>>x;
        q.push(x);
    }
    int p;
    cin>>p;
    while(p--)
        q.pop();
    
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
