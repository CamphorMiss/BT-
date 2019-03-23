
#include"Date.h"


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
	return *this;
	}
}
void Date::_Printf()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}
Date Date::operator+(int days)
{
	_day = _day + days;
	return *this;
}
Date Date::operator-(int days)
{
	_day = _day - days;
	return *this;
}
int Date::operator-(const Date& d)//重载对象与对象的减，之间相差几天
{
	return (_year - d._year) * 365 + (_month - d._month) * 30 + (_day - d._day);
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
