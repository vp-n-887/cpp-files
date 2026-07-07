#include<iostream>
#include<iomanip>
using namespace std;


class Complex
{
	int ip,rp;

public:
	Complex(int a=0,int b=0):ip(a),rp(b){}
	//the above line is same as complex(a=0,b=0){a=ip;b=rp)
	
	Complex add(Complex a)
	{
		Complex c;
		c.ip=this->ip+a.ip;
		c.rp=this->rp+a.rp;

		return c;
	}

	Complex multiply(Complex a)
	{
		Complex d;
		d.rp=(this->rp*a.rp)-(this->ip*a.ip);
		d.ip=(this->rp*a.ip)+(this->ip*a.rp);

		return d;
	}



	void display()
	{
		cout<<rp<<"+"<<ip<<"i";
	}
};

int main()
{
	int a,b,c,d;
/*	cout<<"input c1.ip,c1.rp,c2.ip,c3.rp"<<endl;
	cin>>a>>b>>c>>d;
*/
	//Complex c1(a,b),c2(c,d),c3,c4;
	Complex *c1,*c2,*c3,*c4;

	c1=new Complex[5];
	c2=new Complex[5];
	c3=new Complex[5];
	c4=new Complex[5];

	for(int i=0;i<5;i++)
	{
		cout<<"input c1.ip,c1.rp,c2.ip,c3.rp for "<<i+1<<endl;
		cin>>a>>b>>c>>d;
		c1[i]=Complex(a,b);
		c2[i]=Complex(c,d);
		
		c3[i]=c1[i].add(c2[i]);
		c4[i]=c1[i].multiply(c2[i]);

		c1[i].display();
                c2[i].display();
                c3[i].display();
                c4[i].display();
	}
        
	cout<<endl<<"table..............."<<endl<<endl<<endl;
	cout<<"c1"<<setw(10)<<setfill(' ')<<"c2"<<setw(12)<<setfill(' ')<<"c1+c2"<<setw(12)<<setfill(' ')<<"c1*c2"<<endl;
	for(int i=0;i<5;i++)
	{
		c1[i].display();
                cout<<setw(7)<<setfill(' ');
		c2[i].display();
		cout<<setw(7)<<setfill(' ');
		c3[i].display();
		cout<<setw(7)<<setfill(' ');
		c4[i].display();
		cout<<endl;
	}
	return 0;
}

