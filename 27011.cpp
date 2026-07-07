#include<iostream>
#include<string>
using namespace std;


class time
{
public:
	int h;
	int m;
	int s;
        string st;

        void initialize(int hh=0,int mm=0,int ss=0,string stst="am")
	{
		h=hh;
		m=mm;
		s=ss;
		st=stst;
	}

	void increment(int ss=1)
	{
		s=s+ss;
		if(s>=60)
		{
			m=m+(s/60);
			s=s%60;

		}
		if(m>=60)
		{
			h=h+(m/60);
			m=m%60;
		}
		if(h>=12)
		{
			if(st=="am"){st="pm";}
			else if(st=="pm"){st="am";}
			h=h-12;
		}

	}
        
	void show()
	{
		cout<<h<<":"<<m<<":"<<s<<":"<<st;
	}

	void show_twentyfour()
	{
		if(st=="pm")
		{
			h=h+12;
		}
		 cout<<h<<":"<<m<<":"<<s;
		
	}
};
		


int main()
{
	int h,m,s,ss;
	string st;
	class time t;

        cout<<"enter initializing value";
	cin>>h>>m>>s>>st;

	cout<<"enter increment second";
	cin>>ss;


        t.initialize(h,m,s,st);
	t.increment(ss);
	t.show();
	cout<<"\n";
	t.show_twentyfour();
	cout<<endl<<endl;
	return 0;
}

