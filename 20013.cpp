//have to run five test cases
#include<iostream>
#include<iomanip>
using namespace std;


float power(float a,int b=1)
{
	int i;
	float res=1.0;
	for(i=0;i<b;i++)
	{
		res=res*a;
	}
	return res;
}

int power(int a,int b=1)
{
	int i;
	int res=1;
	for(i=0;i<b;i++)
	{
		res=res*a;
	}
	return res;
}



int main()
{
	int b,x;
	float a;
	cin>>a>>b>>x;
	cout<<"power(float a,int b)"<<endl;
	cout<<scientific<<fixed<<setprecision(2)<<power(a,b);
	cout<<endl<<"power(float a)"<<endl;
	cout<<scientific<<fixed<<setprecision(2)<<power(a);
	cout<<endl<<"power(int a,int b)"<<endl;
	cout<<scientific<<fixed<<setprecision(2)<<power(x,b);
	cout<<endl<<"power(int a)"<<endl;
        cout<<scientific<<fixed<<setprecision(2)<<power(x);
	cout<<endl<<"power(100,3)"<<endl;
	cout<<scientific<<fixed<<setprecision(2)<<power(100,3);

	
	cout<<endl;
	return 0;
}



