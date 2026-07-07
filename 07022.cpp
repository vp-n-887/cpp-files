#include<iostream>
#include<iomanip>
using namespace std;

class list{
	int *val,size;
	public:
	list(int size=0)
	{
		this->size=size;
		val=new int[size];
	}
//	~list()
  //     	{ delete[] val; }

	void set(int arr[],int n)
	{
		for(int i=0;i<n;i++)
		{
			val[i]=arr[i];
		}
	}


	void show()
	{
		for(int i=0;i<size;i++)
		{
			cout<<setw(3)<<val[i];
		}
	}

	list(list &a1)
	{
		size=0;
		for(int i=0;i<a1.size;i++)
		{
			if(a1.val[i]%2!=0)
			{
				size++;
			}
		}
			val=new int[size];
				int j = 0; 
			for (int i = 0; i < a1.size; i++) 
			{
			       	if (a1.val[i] % 2 != 0) 
				{ val[j++] = a1.val[i]; }
			}
		
	}
	~list() {delete[] val;}
};

int main()
{
	int arr[5]={1,2,3,4,5};

	list a1(5);
	a1.set(arr,5);
	a1.show();

	cout<<endl<<endl;

	list a2(a1);
	a2.show();

	cout<<endl;

	return 0;
}
	





