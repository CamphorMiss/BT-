class Solution {
public:
    bool isPalindrome(string s) {
        if(!s.size())return true;
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(ispunct(s[i])||isspace(s[i]))
            {
                ++i;
                continue;
            }
            if(ispunct(s[j])||isspace(s[j])){
                --j;
                continue;
            }
            if((char)tolower(s[i])==(char)tolower(s[j])){
                ++i;
                --j;
            }
            else
                return false;
        }
        return i>=j?true:false;
    }
};
