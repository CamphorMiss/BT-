class Solution {
public:
    int climbStairs(int n) {
        int a=1;
        int b=2;
        int c=1;
         if(n==2)
           c=2;
        while(n-2>0)
        {
            c=a+b;
            a=b;
            b=c;
            n--;
        }
        return c;
    }
};