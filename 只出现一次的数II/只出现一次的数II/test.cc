 int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        for(;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                i+=2;
            else
              break;
        }
        return nums[i];
    }