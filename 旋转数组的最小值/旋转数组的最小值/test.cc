class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.size()==0)
            return 0;
        sort(rotateArray.begin(),rotateArray.end());//Ŀ�ľ������������Сֵ�����Ǹ��Ӷȸ�
        return rotateArray[0];
    }
};