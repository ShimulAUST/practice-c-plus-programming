#include<bits/stdc++.h>

using namespace std;

int main()
{
	int Aug[31];
	int year = 2014 , monthc = 1 , day;


	day=( year + year/4 - year/100 + year/400 + monthc + 1) % 7;

    cout<<"August 2014 Calender"<<endl<<endl;

    cout<<"Su\t"<<"Mo\t" <<"Tu\t" <<"We\t" <<"Th\t"<<"Fr\t" <<"Sa"<<endl;

	for(int i=0;i<31+day;i++)
	{
		if(i%7==0&&i!=0)
			cout<<endl;
		if(i<day)
			cout<<"\t";
		else
			cout<<i+1-day<<"\t";
	}

	return 0;
}
