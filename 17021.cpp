#include<iostream>
using namespace std;

class List{
	int size;
	int *val;
	public:
	List(int n)
	{
		size=n;
		val=new int[size];
		for(int i=0;i<size;i++)
			val[i]=i*10;
	}

	void print()
	{
		for(int i=0;i<size;i++)
		{
			cout<<val[i]<<"\t";
		}
	cout<<endl;}

	List operator +(List l2)
	{
		List l3(size);
		for(int i=0;i<size;i++)
		{
			l3.val[i]=val[i]+l2.val[i];
		}
		return l3;
	}

	void operator ++()
	{
		 for(int i=0;i<size;i++)
                {
                        val[i]=val[i]+1;
                }
               
        }

	int operator[](int i)
	{
		return val[i];
	}

	int operator()(int i,int j=0)
	{
		return val[i+j];
	}
};


int main()
{
	List l1(5),l2(5),l3(5);

	l1.print();
	l2.print();
	l3=l1+l2;
	l3.print();
	++l3;
	l3.print();
	cout<<l3[2]<<endl;
	cout<<l3(2)<<endl;
	cout<<l3(1,1)<<endl;
	return 0;
}



