链接：https://www.nowcoder.com/questionTerminal/d8acfa0619814b2d98f12c071aef20d4?toCommentId=4930940
来源：牛客网

class Parenthesis {
public:
    bool chkParenthesis(string A, int n) {
        // write code here
        if(n%2==1)//先排除奇数情况
            return false;
        stack<char> s1;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]=='(')
                s1.push(A[i]);
            else if(A[i]==')')
            {
                if(s1.empty())
                    return false;
                s1.top();
            }
            else 
                return false;
        }
        if(s1.empty())
            return true;
    }
};