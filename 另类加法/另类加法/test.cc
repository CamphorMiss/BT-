class UnusualAdd {
public:
    int addAB(int A, int B) {
        // write code here
        //A^B+(A&B)<<1������a+b���������+�����ã��͵�ת������ʽ
        while(B)//��A&B<<1==0�Ǿ�OK
        {
            int ret=A^B;
            B=(A&B)<<1;
            A=ret;
        }
        return A;
    }
};