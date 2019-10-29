class LCA {
public:
	int getLCA(int a, int b) {
		while(a!=b)
		{
			if(a>b)
				a=a/2;
			if(a<b)
				b=b/2;
		}


		return a;
		// write code here
	}
};