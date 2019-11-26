class Gloves {
public:
    int findMinimum(int n, vector<int> left, vector<int> right) {
        // write code here
        //拿掉只有1只或者都没有的  都有的取小的那个
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
        return count+2;//最后那种颜色取两双
    }
};