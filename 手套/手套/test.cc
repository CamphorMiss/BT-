class Gloves {
public:
    int findMinimum(int n, vector<int> left, vector<int> right) {
        // write code here
        //�õ�ֻ��1ֻ���߶�û�е�  ���е�ȡС���Ǹ�
        vector<int> v;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(left[i]==0||right[i]==0)
                count=count+left[i]+right[i];
            else
                v.push_back(min(left[i],right[i]));
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>0;i--)
            count+=v[i];
        return count+2;//���������ɫȡ��˫
    }
};