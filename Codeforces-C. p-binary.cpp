
/// C. p-binary
/// Bit Manipulation

#include<bits/stdc++.h>

using namespace std;


/// It can be minimized to another problem that can a number (n) be expressed as sum of the numbers(power of two(2)) ?
/// Here another one clue is here ,that the number of summands (power of two) should be evaluated to a particular number (k).
/// if number of on bits of n is less than k but as a number greater than k.
/// Then it can be expressed as k numbers (power of two).

/// Now n≤109 and p=1000, so number of bits in n−k*p should be the same as that in n. A satisfactory upper bound should be 34. Start from k=1 to 34 , but here for extra care , I use 60 

int main()

{
    long long n,p,num;
    cin>>n>>p;

    long long ans=-1;

     for(int k=1;k<=60;k++)
     {
         num=n-(p*k);
         if(num>=0 && num>=k && __builtin_popcount(num)<=k)
         {
             ans=k;
             break;
         }
     }

     cout<<ans<<endl;

    return 0;
}
