#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	int i,n;
	cout<<"give n";
	cin>>n;
	cout<<endl<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<setw(2)<<i<<setw(2)<<'*'<<setw(2)<<n<<setw(2)<<'=';
		cout<<setw(3)<<setfill(' ')<<n*i<<endl;
	}
	return 0;
}

