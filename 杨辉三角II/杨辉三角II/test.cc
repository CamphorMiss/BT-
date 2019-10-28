vector<int> getRow(int rowIndex) {
        vector<vector<int>> arr(rowIndex+1);
        for(int i=0;i<=rowIndex;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                if(j==i||j==0)
                    arr[i].push_back(1);
                else
            arr[i].push_back(arr[i-1][j-1]+arr[i-1][j]);
            }
        }
        return arr[rowIndex];
        
        
    }