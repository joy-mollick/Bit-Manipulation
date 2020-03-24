/*
Here a function f(x,y) has been stated as (x|y)-y ,right ? Now its array length is 10^5 .So it should be solved with O(n) or O(nlogn) time complexity !! So, if we check that (x|y)-y ,here (x|y) part should be independent .Let's see 

x|y means where a bit in x or y or both is on that bit will be on in x|y ,right ?
Now , when we subtract y from this , so - the bit which is now on in x|y and y will be zero after subtracting y from x|y.
So , it makes sense to us that x|y has nothing to do with it ,because we subtarct again y from (x|y) . Therefore , 
 (x|y) - y means ,from x those bit will be off which are on in y . ~y means flipping its all bits (the off bit will be on and on bit will be off ) . So if we now make x&(~y) is equal to (x|y)-y ,right ? f(x,y)=x&(~y)

Now , think about array [a,b,c,d,e] .

If we think this array order as right.

Then ,value will be equal to  f(f(f(f(a,b),c),d),e) which is equivalent to a&(~b)&(~c)&(~d)&(~e) . From this expression , what will make you sense that we have to find out that value which will be first in array ,others will not make fact !! So, for traversing the whole array , we think this arri our first element and (make and operations with all ~(elements) ) .That's why make a suffix and prefix array of & operations of (~ all elements of till i) .Rest of this should be done by you 


*/


#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int prefix[n+1];
    int suffix[n+1];
    prefix[0]=INT_MAX;
    suffix[n]=INT_MAX;
    for(int i=0;i<n;i++)
    {
        prefix[i+1]=prefix[i]&(~arr[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        suffix[i]=suffix[i+1]&(~arr[i]);
    }
    int ans=-1;
    int position=0;
    /// prefix[i] hold all and operations with ~ x ,x is all elements before i,excluding i
    /// suffix[i] hold all and operations with ~ x ,x is all elements after i ,including i
    for(int i=0;i<n;i++)
    {
        int nw_val=arr[i]&prefix[i]&suffix[i+1];
        if(nw_val>ans)
        {
            ans=nw_val;
            position=i;
        }
    }
    cout<<arr[position]<<" ";
    for(int i=0;i<n;i++)
    {
        if(i!=position)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
