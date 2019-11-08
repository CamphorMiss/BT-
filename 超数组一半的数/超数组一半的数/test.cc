class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        if(numbers.size()==0)
            return 0;
        sort(numbers.begin(),numbers.end());
        int key=numbers[numbers.size()/2];
        int count=0;
        for(int i=0;i<numbers.size();i++)
        {
            if(numbers[i]==key)
            count++;
        }
        if(count>numbers.size()/2)
            return key;
        return 0;
    
    }
};