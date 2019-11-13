class Solution {
public:
    int Fibonacci(int n) {
        int a=0,b=1;
        while((n--)>0)
        {
            b=a+b;
            a=b-a;//Ô­À´µÄb
        }
        return a;
    }
};