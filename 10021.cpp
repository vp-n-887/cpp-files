#include<iostream>
using namespace std;

class Time{
	int h,m,s;

	public:
	Time(int hh=0,int mm=0,int ss=0)
	{
		this->h=hh;
		 this->m=mm;
		  this->s=ss;
	}

	friend Time operator +(Time &t1,int x)
	{
		Time t2(t1.h,t1.m,t1.s);
		t2.s=t1.s+x;
		if(t2.s==60){t2.m=t2.m+1;t2.s=0;}
		if(t2.m==60){t2.h=t1.h+1;t2.m=0;}
		if(t2.h==24){t2.h=0;}

		return t2;
	}

	friend ostream& operator <<(ostream &os,Time &t1)
	{
		os<<t1.h<<":"<<t1.m<<":"<<t1.s<<endl;
		return os;
	}


	friend istream& operator >>(istream &is,Time &t1)
	{
		is>>t1.h>>t1.m>>t1.s;
		return is;
	}




};

int main()
{
	//int hh,mm,ss,x;
	//cin>>hh>>mm>>ss>>x;
	int x;

	Time t1;
	Time t2;
	cin>>t1;

	cout<<endl<<endl;
	cout<<t1;

	cout<<endl<<"enter second";
	cin>>x;

	t2=t1+x;

	cout<<t2;

//	cout<<t2.h<<t2.m<<t2.s;

	return 0;
}


	
