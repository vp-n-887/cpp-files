#include<iostream>
using namespace std;

class list{
	int *val;
	int n;

	public:
	list(int m=0)
	{
		this->n=m;
		val=new int[n];
	}

	void set()
	{
		for(int i=0;i<n;i++)
		{   cin>>val[i];}
	}

	friend list operator +(list l1,list l2)
	{
		list l3(l1.n);
		for(int i=0;i<l1.n;i++)
		{
			l3.val[i]=l1.val[i]+l2.val[i];
		}
		return l3;
	
	}

	friend list operator +(list l1,int x)
	{
		list l3(l1.n);
		for(int i=0;i<l1.n;i++)
		{
			l3.val[i]=l1.val[i]+x;
		}
		return l3;
	}


	void display()
	{
		for(int i=0;i<n;i++)
		{       
			cout<<val[i]<<"\t";
		}
	}
};




int main()
{
	int n,x;
	cin>>n>>x;
	list l1(n);
	list l2(n);
	list l3,l4; 

	l1.set();
	l1.display();
	cout<<endl<<endl;
	l2.set();
        l2.display();
	cout<<endl<<endl;

	l3=l1+l2;
	l3.display();
	cout<<endl<<endl;

	l4=l1+x;
	l4.display();
	cout<<endl<<endl;
	return 0;
}


