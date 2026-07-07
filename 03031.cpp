#include<iostream>
#include<string>
using namespace std;


//template<typename T>

/*class cal{
	T a,b;

	public:
	
	cal(T x,T y):a(x),b(y){}

	T add(){return a+b;}
	T sub(){return a-b;}
	T mul(){return a*b;}
	T div(){return a/b;}

};*/
template <typename T>
class C{
	T r,i;

	public:
	 C(T rr,T ii){ r=rr;i=ii;}

	 friend C<T> operator +(C<T> c1,C<T> c2)
	 {
		 C<T> c3(0,0);
		 c3.i=c1.i+c2.i;
		 c3.r=c1.r+c2.r;

		 return c3;
	 }

	 friend ostream& operator <<(ostream &os,C<T> c)
	 {
		 os<<c.r<<"+"<<c.i<<"i"<<endl;
		 return os;
	 }

};


template <typename T>
class A{
	T a;

	public:
	A(T x):a(x){}

	friend A<T> operator +(A<T> a1,A<T> a2)
	{
	        A<T> a3(a1.a+a2.a);

		return a3;
	}

	void show()
        {
		cout<<a<<endl;
	}
};



int main()
{
	C <int> c1(2,3);
	C <int> c2(3,4);
	C <int> c3(0,0);
	C <int> c4(0,0);

	cout<<c1;
	cout<<c2;
	
	c3=c1+c2;

	cout<<c3;

	/*C <double> c5(2.2,3.3);
        C <double> c6(3.3,4.4);
        C <double> c7(0,0);
        C <double> c8(0,0);

        cout<<c5;
        cout<<c6;

        c7=c5+c6;

        cout<<c7;*/

	A <C<int>> a1(c1);
	A <C<int>> a2(c2);
	A <C<int>> a3(c3);
	A <C<int>> a4(c4);

	a3=a1+a2;
	a4=a1+a2;

	a3.show();
	a4.show();



	return 0;


	/*cal <int> c1(6,3);
	cout<<c1.add();
	cout<<endl;
	cout<<c1.sub();
        cout<<endl;
	cout<<c1.mul();
        cout<<endl;
	cout<<c1.div();
        cout<<endl;

	cal <double> c2(6.6,3.3);   
        cout<<c2.add();
        cout<<endl;
        cout<<c2.sub();
        cout<<endl;
        cout<<c2.mul();
        cout<<endl;

	cal <string> c3("abc","def");
	cout<<c3.add();
	cout<<endl;*/

	return 0;
}
