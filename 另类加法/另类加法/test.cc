class UnusualAdd {
public:
    int addAB(int A, int B) {
        // write code here
        //A^B+(A&B)<<1就是求a+b，但是这个+不能用，就得转换个方式
        while(B)//当A&B<<1==0是就OK
        {
            int ret=A^B;
            B=(A&B)<<1;
            A=ret;
        }
        return A;
    }
};