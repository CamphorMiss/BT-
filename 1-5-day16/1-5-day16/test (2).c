#define _CRT_SECURE_NO_WARNINGS 1


1.ʵ��strcpy 
#include<stdio.h>
#include<stdlib.h>

char *strcpy(char * dest,const char* src)
{
assert(dest!=NULL);
assert(src!=NULL);
char*ret=dest;
while(*ret++=*src++)
{
;
}
return dest;
}
2.ʵ��strcat//���� 

#include<stdio.h>
#include<stdlib.h>
char *strcat(char * dest,const char *src)
{
	char *start=dest;
  while(*dest!='\0')
  {
  dest++;
  }
  while(*dest++=*src)
  {
  ;
  }
  return start;
}
3.ʵ��strstr//�����ַ���
char * strstr(char * dest,const char * src)
{
    assert(dest);
	assert(src);
 
	char *p = NULL;
	char *np = NULL;
	char *q =NULL;
		p = dest;
 
		��*p!='\0'ʱ��ѭ��һֱ����
		while (*p)
		{
			 qָ��src;
			for (np = p,q = src; (*np && *q) && (*np == *q); np++, q++)
			{
				;
			}
 
				if (*q == '\0')//˵���Ѿ��ҵ��ַ�����bbcd��
				{
					return p;
				}
				if (*np == '\0')
				{
					break;
				}
			p++;//���Եõ�ԭʼλ�õ���һ��λ�ã�
		}
		return NULL;//not find
}
 


4.ʵ��strchr//���ַ��������ַ�
char*strchr(const char *string,char c)
{
    int i = 0;
    assert(string);
    while (*string!='\0')
    {
        if (*string == c)
        {
            return string;//����ҵ����򷵻�����ַ��ĵ�ַ
        }
        else
        {
            string++;
        }
    }
    return NULL;//����ȫ�������û�У��򷵻�NULL
}


5.ʵ��strcmp //�ַ����Ƚ�
char * strcmp(const char * str1,const char * str2)
{
    assert(str1!=NULL);
    assert(str2!=NULL);
	while(*str1&&*str2&&(*str1==*str2))
	{
	  str1++;
      str2++;
	}
   return *str2-*str1;

}

6.ʵ��memcpy  �ڴ渴��
void* memcpy(void * dest,const void * src,int width)
{
   assert(dest!=NULL);
   assert(src!=NULL);
   void * ret=dest;
   while(width--)
   {
   *(char *)dest=*(char *)src;
   dest++;
   src++;
  }
return ret;

}
7.ʵ��memmove   
void *memmove(void *dest, void *src, size_t count)
{
    void *ret = dest;
    assert(dest != NULL);
    assert(src != NULL);
    if (dest>src)              //Ŀ����Դ֮ǰ
    {
        while (count)
        {
            *(char*)dest = *(char*)src;
            dest = (char*)dest +1;
            src  = (char*)src +1;
            count--;
        }
    }
    else                       //Ŀ����Դ֮��
    {
        while (count--)
        {
            *((char*)dest+count) = *((char*)src+count);
        }
    }
    return ret;
}
