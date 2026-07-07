#include<iostream>
using namespace std;

class set
{
   int *a;
   int n;

public:
    set(int size=0)
        { n=size;
          a=new int [n];
        }
    
    void show()
          {
           for(int i=0;i<n;i++)
               { cout<<a[i]<<"\t";}
         }

    friend istream& operator >>(istream &is,set x)
       {
         for(int i=0;i>x.n;i++)
          { is>>x.a[i];}
         return is;
       }

   friend set operator + (set x,set y)
    {
        int s=x.n+y.n;
        for(int i=0;i<x.n;i++)
         for(int j=0;j<y.n;j++)
           {    if(x.a[i]==y.a[j]) {s=s-1;}    }
        set c(s);
		int in=0;
           for(int i=0;i<x.n;i++)
              { c.a[in]=x.a[i];
			  in=in +1;
			  }
           for(int i=0;i<y.n;i++)
              {c.a[in]=y.a[i];
			  in=in+1;}
       return c;
}



  friend set operator /(set x,set y)
   {
      int s=0;
         for(int i=0;i<x.n;i++)
          for(int j=0;j<y.n;j++)
           {   if(x.a[i]==y.a[j])   {s=s+1;}}

      set d(s);
         for(int i=0;i<x.n;i++)
          for(int j=0;j<y.n;j++)
          {
            int in=0;
             if(x.a[i]==y.a[j]){ d.a[in]=x.a[i]; in=in+1;}
          }
        return d;
}
   


   friend set operator -(set x,set y)
  {
      int s=x.n;
     for(int i=0;i<x.n;i++)
     for(int j=0;j<y.n;j++)
         {    if(x.a[i]==y.a[j]) {s=s-1;}    }

    set e(s);
     for(int i=0;i<x.n;i++)
     for(int j=0;j<y.n;j++)
	    { 
		  int in=0;
		  if(x.a[i]!=y.a[j]) { e.a[in]=x.a[i];in=in+1;}
		}

		 return 0;
}

 friend int operator *(set x,int m)
 { int found=0;
    for(int i=0;i<x.n;i++)
	{
	    if(x.a[i]==m) {found=1;}
	}


	if(found==1)
	{return 1;}
	else {return 0;}

}
};

int main()
{
    set a(5),b(5);
	cout<<"enter a"<<endl;
	cin>>a;
	cout<<endl<<"enter b"<<endl;
	cin>>b;
	cout<<endl<<endl;

	cout<<"a"<<endl;
	a.show();
	cout<<endl;
	 cout<<"b"<<endl;
     b.show();
     cout<<endl;

     cout<<"union c"<<endl;
	 set c=a+b;
	 c.show();
	 cout<<endl<<endl;

	 cout<<"intersection d"<<endl;
	 set d=a/b;
	 d.show();
	 cout<<endl<<endl;

	 cout<<"difference"<<endl;
	 set e=a-b;
	 e.show();
	 cout<<endl<<endl;

	 cout<<"membership"<<endl;
	 cout<<"enter the member variable"<<endl;
	 int y;
	 cin>>y;
	 int x=a*y;
	 if(x==1) {cout<<y<<" is a member"<<endl;}
	 else {cout<<"not a member"<<endl;}

	 cout<<endl<<endl;
	 return 0;
}




























































































     
            
               

   

