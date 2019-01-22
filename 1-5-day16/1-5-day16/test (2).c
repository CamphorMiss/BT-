#define _CRT_SECURE_NO_WARNINGS 1


1.实现strcpy 
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
2.实现strcat//链接 

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
3.实现strstr//查找字符串
char * strstr(char * dest,const char * src)
{
    assert(dest);
	assert(src);
 
	char *p = NULL;
	char *np = NULL;
	char *q =NULL;
		p = dest;
 
		当*p!='\0'时，循环一直成立
		while (*p)
		{
			 q指向src;
			for (np = p,q = src; (*np && *q) && (*np == *q); np++, q++)
			{
				;
			}
 
				if (*q == '\0')//说明已经找到字符串“bbcd”
				{
					return p;
				}
				if (*np == '\0')
				{
					break;
				}
			p++;//可以得到原始位置的下一个位置；
		}
		return NULL;//not find
}
 


4.实现strchr//在字符串查找字符
char*strchr(const char *string,char c)
{
    int i = 0;
    assert(string);
    while (*string!='\0')
    {
        if (*string == c)
        {
            return string;//如果找到，则返回这个字符的地址
        }
        else
        {
            string++;
        }
    }
    return NULL;//找完全部，如果没有，则返回NULL
}


5.实现strcmp //字符串比较
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

6.实现memcpy  内存复制
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
7.实现memmove   
void *memmove(void *dest, void *src, size_t count)
{
    void *ret = dest;
    assert(dest != NULL);
    assert(src != NULL);
    if (dest>src)              //目标在源之前
    {
        while (count)
        {
            *(char*)dest = *(char*)src;
            dest = (char*)dest +1;
            src  = (char*)src +1;
            count--;
        }
    }
    else                       //目标在源之后
    {
        while (count--)
        {
            *((char*)dest+count) = *((char*)src+count);
        }
    }
    return ret;
}
