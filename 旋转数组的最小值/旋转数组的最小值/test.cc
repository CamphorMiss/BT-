class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.size()==0)
            return 0;
        sort(rotateArray.begin(),rotateArray.end());//目的就是找数组的最小值，就是复杂度高
        return rotateArray[0];
    }
};