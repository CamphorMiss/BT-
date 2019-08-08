//题意  实现一个函数，把字符串中的空格都替换成20%
void Replace(char str[],int length)
{
	int strlong=0;//字符串实际长度
	int count=0;//空格的个数
	int newlength=0;//替换后所需要的长度
	int i=0;
	int oldpos=strlong;
	int newpos=newlength;
	if(str==NULL||length<=0)
		return;
	
	while(str[i]!='\0')
	{
		strlong++;
        if(str[i]==' ')
			count++;
		    i++;

	}
	newlength=strlong+count*2;
	if(newlength>length)
		return;
	while(oldpos>=0&&newpos>oldpos)
	{
		if(str[oldpos]==' ')
		{
			str[newpos--]='0';
			str[newpos--]='2';
			str[newpos--]='%';
		}
		else
		{
           str[newpos--]=str[oldpos];
         }
		oldpos--;
	}
}
