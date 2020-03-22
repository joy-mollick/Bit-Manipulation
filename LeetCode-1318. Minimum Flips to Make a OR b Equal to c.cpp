class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        for(int i=0;i<32;i++)
        {
            bool C=false;
            bool A=false;
            bool B=false;
            if(c&(1<<i)) C=true;
            if(a&(1<<i)) A=true;
            if(b&(1<<i)) B=true;
            if(!C)// C is not on here in this bit
            {
                if(A&&B) ans=ans+2;// change both to zero bit
                else if(A||B) ans=ans+1;// change anyone to zero
            }
            else // C is on here in this bit
            {
                if(!A&&!B) ans=ans+1;// make anyone to on 
            }
        }
        return ans;
    }
};
