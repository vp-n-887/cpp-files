#include<iostream>
#include<iomanip>
using namespace std;

int add(int a,int b)
{
	return a+b;
}

double add(double a,double b)
{
	return a+b;
}

void add(int a1[],int a2[],int res[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		res[i]=a1[i]+a2[i];
	}
}


int main()
{
	int a,b;
	int i,n1,n2;
	double c,d;
	int a1[10],a2[10],res[10];
	cin>>a>>b>>c>>d;
	cout<<"size of 1st and 2nd arr";
	cin>>n1>>n2;
	cout<<endl<<"enter elements of 1st arr";
	for(i=0;i<n1;i++)
	{
		cin>>a1[i];
	}
	cout<<endl<<"enter elements of 1st arr";
        for(i=0;i<n2;i++)
        {
                cin>>a2[i];
        }

	
        cout<<endl;

	cout<<"add(int,int) "<<add(a,b)<<endl;
	 cout<<fixed<<setprecision(2)<<"add(double,double) "<<add(c,d)<<endl;
	 
	 if(n1!=n2)
	 {
		 cout<<"list addition not possible";
                 return 0;
	 }

	 add(a1,a2,res,n1);

	 cout<<"add(arr1,arr2) ";
	 
		 for(i=0;i<n1;i++)
		 {
			 cout<<setw(5)<<res[i];
		 }


	 cout<<endl<<endl;
return 0;

}

