#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a;
    cin>>a;
    long long mx=a;
    long long sum=0;
    long long i=0;
    while(mx)
    {
        if(!(mx&1))
        {
            sum=(sum+(1<<i));
        }
        i++;
        mx=mx>>1;
    }
    cout<<a<<" "<<sum<<endl;
    
}
