//����  ʵ��һ�����������ַ����еĿո��滻��20%
void Replace(char str[],int length)
{
	int strlong=0;//�ַ���ʵ�ʳ���
	int count=0;//�ո�ĸ���
	int newlength=0;//�滻������Ҫ�ĳ���
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
