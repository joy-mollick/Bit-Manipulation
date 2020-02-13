#include<bits/stdc++.h>

using namespace std;


int main()

{
    int n,a;
    cin>>n;
    int arr[n];
    int xor_sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        xor_sum=xor_sum^arr[i];
    }
    int position_set=xor_sum^(xor_sum&(xor_sum-1));// number of position of bit which is set
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(position_set&arr[i]) x=x^arr[i];//this will find that element which has 1 on that position
        else y=y^arr[i];//this will find that element which has 0 on that position
    }
    cout<<min(x,y)<<" "<<max(x,y)<<endl;
    return 0;
}
