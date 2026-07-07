#include<iostream>
#include<string>
using namespace std;

class bankcustomer{
	protected:
		int accno;
		string name;
		float bal;

	public:
		bankcustomer(int a,string b,float c)
		{
			accno=a;
			name=b;
			bal=c;
		}

		void display()
		{
			cout<<"account no is "<<accno<<endl;
			cout<<"acc holder name "<<name<<endl;
			cout<<"balance amount is "<<bal<<endl<<endl;
		}

		virtual void withdraw(int x)=0;
};

class type1:public bankcustomer{
	public:
		type1(int a,string b,float c):bankcustomer(a,b,c){}

		void withdraw(int x)
		{
			bal=bal-x;
			if(x<=10000)
			{
				cout<<"amount withdrawed is "<<x<<endl<<"balance is "<<bal<<endl<<endl;
			}
			else 
			{
				cout<<"withdrwl not poosible......limit is 10000"<<endl;
			}
		}
};


class type2:public bankcustomer{
	  public:
                type2(int a,string b,float c):bankcustomer(a,b,c){}

                void withdraw(int x)
                {
                        bal=bal-x;
                        if(x<=50000&&bal>0)
                        {
                                cout<<"amount withdrawed is "<<x<<endl<<"balance is "<<bal<<endl<<endl;
                        }
			 else
                        {
                                cout<<"withdrawl not poosible........limit is 50000 and min balance has to be 0"<<endl;
                        }
                }
};


int main()
{
	bankcustomer* b[5];
	int m;
	float n;

	b[0]=new type1(1,"a",100000);
        b[1]=new type1(2,"b",200000);
	 b[2]=new type1(3,"c",300000);

	  b[3]=new type2(4,"d",400000);
	   b[4]=new type2(5,"e",500000);

	   for(int i=0;i<5;i++)
	   {
		   b[i]->display();
		   cout<<endl<<endl;
	   }

	   cout<<"enter the customer index i and amount to be withdrawn  "<<endl;
	   cin>>m>>n;

	   //cout<<"withdrain"<<n<< "from"<< m<<"customer"<<endl;
	   b[m]->withdraw(n);

	   cout<<endl<<endl;
	   return 0;
}




