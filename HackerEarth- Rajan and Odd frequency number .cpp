#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,a;
    cin>>n;
    n=2*n+1;
    int arr[n];
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        x=x^arr[i];
    }
    cout<<x<<endl;
    return 0;
}
