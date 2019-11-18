class Solution {
public:
    double Power(double base, int exponent) {
             if(base==0)
                 return 0;
             if(exponent==0)
                 return 1;
             if(exponent<0)
                 base=1.0/base;
        double num=1;
        while(exponent)
        {
            num*=base;
            exponent=exponent>0?exponent-1:exponent+1;
        }
        return num;
    }
};