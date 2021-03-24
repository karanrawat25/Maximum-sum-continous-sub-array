#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx=INT_MIN;
    int curr_mx=0;
    for(int i=0;i<n;i++)
    {
        curr_mx=max(a[i],curr_mx+a[i]);
        mx=max(mx,curr_mx);
    }
    cout<<mx;
}
