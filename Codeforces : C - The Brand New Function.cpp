
/// Codeforces : C - The Brand New Function.
/// Category : number theory .


/// So we have to find out the number of distinct or of all sub array of array 
/// So, all numbers are in range 10^6
/// So, maximum numbers can be 2^20
/// So, curr is the set of all suffix or of  from i


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,x;
    cin>>n;

    vector<int>A;
    while(n--)
    {
        cin>>x;
        A.push_back(x);
    }

        unordered_set<int> res;
        unordered_set<int> cur;
        unordered_set<int> cur2;
        for (int a:A)
        {
            ///cur2 is a temporary set 
            cur2 = {a};
           ///this iteration will take at most 20
            for (int c:cur)
            {
                cur2.insert(c | a);
            }
            /// copying from cur2
            cur = cur2;
            /// storing final set
            res.insert(cur.begin(), cur.end());
        }

        cout<<(int)res.size()<<endl;

    return 0;
}
