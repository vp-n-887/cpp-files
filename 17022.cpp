#include<iostream>
using namespace std;

class List{
	int size;
	int *val;
	public:
	List(int n=0)
	{
		size=n;
		val=new int[size];
	}

	friend istream& operator >>(istream &is,List &l1);

	friend ostream& operator <<(ostream &os,List l1);
	

	void operator --()
	{
		size=size-1;
	}

	int operator[](int i)
        {
                return val[size-i];
        }

        int operator()(int i,int j)
        {
                return val[i+j];
        }

};

istream& operator >>(istream &is,List &l1)
        {
                for(int i=0;i<l1.size;i++)
                {
                        is>>l1.val[i];
                }
                return is;
        }
ostream& operator <<(ostream &os,List l1)
        {
                 for(int i=0;i<l1.size;i++)
                {
                        os<<l1.val[i]<<"\t";
                }
                return os;
        }


int main()
{
	List l1(5);

        cout<<"enter the input vakues:";
	cin>>l1;

	cout<<endl<<endl;
	cout<<l1;
	cout<<endl<<endl;

	--l1;
	cout<<"size reduced:";
	cout<<l1;
	cout<<endl<<endl;
        
	cout<<"value in 2 nd position:";
	cout<<l1[2]<<endl<<endl;
	cout<<"value when argument ius 1,1:";
	cout<<l1(1,1)<<endl<<endl;

	return 0;
}
