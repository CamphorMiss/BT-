#include"Date.h"


bool Date::IsLeapyear(int year)
{
	if (year <= 0)
		return false;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	return false;
}
int Date::GetTrueDay(int year, int month)
{
	int arrday[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int day = arrday[month];
	if (IsLeapyear(year) && month == 2)
		day += 1;

	return day;
}

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
	cout << "Date(int ,int,int)" << this << endl;
}
Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
	cout << "Date(const Date& )" << this << endl;
}
Date& Date:: operator=(const Date& d)//重载=，对象赋值给对象
{
	if(this!=&d)
	{ 
	_year = d._year;
	_month = d._month;
	_day = d._day;
	cout << "Date:: operator=(const Date&)" << this << endl;
	
	}
	return *this;
}
void Date::_Printf()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}
Date Date::operator+(int days)
{
	/*_day = _day + days;
	return *this;*/
	Date temp(*this);//不能改变this
	int Day = GetTrueDay(_year, _month);
	temp._day= _day + days;
	
	while(temp._day > GetTrueDay(_year, _month))//使得日期有效，天数满了，加月，月满，加年
	{
		temp._day -= GetTrueDay(_year, _month);
		temp._month += 1;
		if (temp._month ==13)
		{
			temp._month =1;
			temp._year += 1;
		}
	}

	return temp;
}
Date Date::operator-(int days)
{
	/*_day = _day - days;
	return *this;*/
	Date ret(*this);
	ret._day = _day - days;
	while(ret._day <= 0)//使得日期有效
	{
		ret._month -= 1;
		if (ret._month <= 0)
		{
			ret._month = 12;
			ret._year -= 1;
		}
		ret._day += GetTrueDay(ret._year,ret._month);//因为ret._day为负，所以+=；
	}
	return ret;
}
int Date::operator-(const Date& d)//重载对象与对象的减，之间相差几天
{
	/*return (_year - d._year) * 365 + (_month - d._month) * 30 + (_day - d._day);*/


	Date ret1(*this);
	Date ret2(d);
	int count = 0;
	if (ret1 == ret2)
		return count;
	else
	{
		if (ret1 > ret2)
		{
			while (ret1 != ret2)
			{
				ret2++;
				count++;
			}
		}
		else
		{
			while (ret1 != ret2)
			{
				ret1++;
				count++;
			}
		}
	}
	return count;
}
Date& Date::operator++()//前置++
{
	_day = _day + 1;
	return *this;
}
Date Date::operator++(int)//后置++，多一个形参，与前置++区分，无实际意义
{
	Date temp = *this;
	_day = _day + 1;
	return temp;
}
Date& Date::operator--()//前置--
{
	_day = _day - 1;
	return *this;
}
Date Date::operator--(int)//后置--
{
	Date temp = *this;
	_day = _day - 1;
	return temp;
}
bool Date::operator>(const Date& d)const//const成员函数，实际上修饰的是this指针，表明累的成员不能被修改，重载大鱼号
{
	    if (_year > d._year)
		   return true;
		if((_year==d._year)&&(_month>d._month))
			return true;
		if ((_year == d._year) && (_month ==d._month)&&(_day>d._day))
			return true;
	    return false;
}
bool Date::operator>=(const Date& d)const
{
	if (_year >= d._year)
		return true;
	
	return false;

}
bool Date::operator<(const Date& d)const
{
	if (_year < d._year)
		return true;
	if ((_year == d._year) && (_month < d._month))
		return true;
	if ((_year == d._year) && (_month == d._month) && (_day < d._day))
		return true;
	return false;
}
bool Date::operator<=(const Date& d)const
{
	if (_year <= d._year)
		return true;
	
	return false;
}
bool Date::operator==(const Date& d)const
{
	return (_year == d._year) && (_month == d._month) && (_day == d._day);
}
bool Date::operator!=(const Date& d)const
{
	return (_year != d._year)||(_month != d._month) ||(_day != d._day);
}

void TestFun()
{
	int ret = 0;
	Date d1(2019,3,23);
	Date d2(d1);
	Date d3(2018,5,18);
	ret = d1 - d3;
	d3._Printf();
	d3 = d1;
	d3._Printf();
	d3 = d3 + 5;
	d3._Printf();
	cout << "ret=" << ret << endl;
	



}


int main()
{
	TestFun();
	return 0;
}
