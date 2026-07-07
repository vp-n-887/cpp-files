#include<iostream>
using namespace std;


class C{
	int ip,rp;

public:
	C(int i=0,int r=0)
	{
	    this->ip=i;
            this->rp=r;
        }

friend C add(C c1,C c2)
{
	C c3(c1.ip+c2.ip,c1.rp+c2.rp);
        return c3;
}

friend C operator +(C c1,C c2)
{
      C c3(c1.ip+c2.ip,c1.rp+c2.rp);
      return c3;
}

friend C operator -(C c1,C c2)
{
	C c3(c1.ip-c2.ip,c1.rp-c2.rp);
	return c3;
}

friend C operator *(C c1,C c2)
{
	C c3;
	c3.rp=(c1.rp*c2.rp)-(c1.ip*c2.ip);
	c3.ip=(c1.ip*c2.rp)+(c2.ip*c1.rp);
	return c3;
}

friend C operator +(C c1,int x)
{
	C c3(c1.ip+x,c1.rp+x);
	return c3;
}

friend C operator -(C c1,int y)
{
	C c3(c1.ip-y,c1.rp-y);
	return c3;
}

friend C operator *(C c1,int x)
{
	C c3(c1.ip*x,c1.rp*x);
	return c3;
}




friend ostream& operator <<(ostream& os,C c)
{
	os<<c.rp<<"+"<<c.ip<<"i";
	return os;
}

friend istream& operator >>(istream& is,C c)
{
	is>>c.ip>>c.rp;
	return is;
}

void disp()
{
	cout<<this->rp<<"+"<<this->ip<<"i"<<endl;
}

};
          	
int main()
{
	int a,b,x,y;
	cin>>a>>b>>x>>y;

	C c1(a,b),c2(x,y),c3,c4,c5,c6,c7,c8,c9;
	//C c1,c2,c3,c4,c5,c6;
	cin>>c1;
	cin>>c2;

	c3=add(c1,c2);
	c4=c1+c2;
	c5=c1-c2;
	c6=c1*c2;
	c7=c1+a;
	c8=c1-a;
	c9=c1*a;
	c3.disp();
	c4.disp();
	c5.disp();
	c6.disp();
	
	cout<<c1;
	cout<<endl;
	cout<<c2;
	cout<<endl;
	cout<<c3;
        cout<<endl;
        cout<<c4;
	cout<<endl;
        cout<<c5;
        cout<<endl;
        cout<<c6;
	cout<<endl;
	cout<<c7;
	cout<<endl;
	cout<<c8;
	cout<<endl;
	cout<<c9;
	cout<<endl<<endl;
	return 0;
}



