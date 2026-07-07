#include<iostream>
using namespace std;

class rect{
	int l,b;

	public:

	rect(int ll=0,int bb=0){l=ll;b=bb;}

	int operator ++ ()
	{
		return l*b;
	}

};

class square{
	int s;

	public:

	square(int ss=0){s=ss;}

	int operator ++ ()
	{
	   return s*s;
	}
};

template <typename t>
class compare{
        
	t o1,o2;

	public:
		compare(t obj1,t obj2){
			o1=obj1;
			o2=obj2;
			
			if(++o1>++o2){cout<<"object 1 is larger"<<endl;}
			else {cout<<"object 2 is larger"<<endl;}

		}


		};


int main()
{
      rect r1(2,3);
      rect r2(3,3);

      int area_r1=++r1;
      int area_r2=++r2;

      square s1(2);
      square s2(3);

      int area_s1=++s1;
      int area_s2=++s2;
      

      cout<<endl<<"comparison for rectangle"<<endl;
      cout<<"r1="<<area_r1<<endl<<"r2="<<area_r2<<endl;

      compare <rect> c1(r1,r2);

      cout<<endl<<"comparison for sqaure"<<endl;
       cout<<"s1="<<area_s1<<endl<<"s2="<<area_s2<<endl;
      compare <square> c2(s1,s2);

      return 0;
}

      
