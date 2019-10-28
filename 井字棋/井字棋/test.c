class Board {
public:
	bool checkWon(vector<vector<int> > board) {
		// write code here
		int ret=0;
		int i=0;
		int j=0;
		for(i=0;i<board.size();i++)
		{
			for(j=0;j<board[0].size();j++)
			{
				ret+=board[i][j];
			}
		}
		return (ret>0);
	}
};//