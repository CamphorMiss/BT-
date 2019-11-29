#include<iostream>
#include<string>
using namespace std;
int main()
{
int total;
    while(cin>>total)
    {
        string str;
        cin>>str;
        int number =1;//µ±Ç°Î»ÖÃ
        int start =1;
        for(int i=0;i<str.size();i++)
        {
            if(total<=4)
            {
                if(str[i]=='U')
                    number--;
                else if(str[i]=='D')
                    number++;
                if(number==0)
                    number=total;
                if(number==total+1)
                    number=1;
            }
            else{
                if(str[i]=='U')
                {
                number--;
                if(number<start)
                    start=number;
                }
                else if(str[i]=='D')
               {
                    number++;
                if(number-start>3)
                    start++;}
               if(number==0)
               {
                   number=total;
                   start=total-3;
               }
               if(number==total+1)
               {
                   number=1;
                   start=1;
			   }
            }       }
        if(total>4)
            cout<<start<<" "<<start+1<<" "<<start+2<<" "<<start+3;
        else
        {
            for(int i=0;i<total;i++)
                 cout<<1+i<<" ";
        }
        cout<<"\n"<<number<<endl;        
    }    
    return 0;

}