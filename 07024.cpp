#include<iostream>
using namespace std;

class mat{
	int **val;
	int row,col;

	public:
	mat(int a=0,int b=0)
	{
		this->row=a;
		this->col=b;

		val=new int*[row];

		for(int i=0;i<row;i++)
		{
			val[i]=new int[col];
		}
	}


	void set()
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				cin>>val[i][j];
			}
		}
	}

	void display()
	{
		for(int i=0;i<row;i++)
                {
                        for(int j=0;j<col;j++)
                        {
                                cout<<val[i][j]<<"\t";
                        }
			cout<<endl;
                }
        }

	mat operator +(mat m2)
	{
		mat m3(row,col);
		 for(int i=0;i<row;i++)
                {
                        for(int j=0;j<col;j++)
                        {
                                m3.val[i][j]=val[i][j]+m2.val[i][j];
                        }
                }
		 return m3;
        }


};


int main()
{
	int a,b;
	cin>>a>>b;

	mat m1(a,b),m2(a,b),m3(a,b);
	
	m1.set();
	m1.display();
	cout<<endl<<endl;

	m2.set();
        m2.display();
        cout<<endl<<endl;

	m3=m1+m2;
	 m3.display();
        cout<<endl<<endl;

	return 0;
}


