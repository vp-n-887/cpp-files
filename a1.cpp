#include<iostream>
using namespace std;

class date{
public:
   int d,m,y;
   date(int dd=1,int mm=1,int yy=2007){d=dd;m=mm;y=yy;}

  friend istream& operator>>(istream &is,date &d1)
  {
  is>>d1.d>>d1.m>>d1.y;
  return is;
  }

  bool operator <(date d2)
   {
   int temp=0;
   if(y<d2.y){temp=1;}
   else if(y==d2.y&&m<d2.m) {temp=1;}
   else if(y==d2.y&&m==d2.m&&d<d2.d) {temp=1;}

   if(temp==1){return 1;}
   else {return 0;}
   }
   };

   //template <typename t1>
   class Dlist:public date{
   date *arr;
   int n;

   public:
      Dlist(int size=0){n=size;arr=new date[n];}

	  void init()
	  {
	  for(int i=0;i<n;i++)
	  {
	  cin>>arr[i];
	  }
	  }

	  void position(date d1)
	  {
	  int found=0;
	   for(int i=0;i<n;i++)
	   {if(arr[i].y==d1.y && arr[i].m==d1.m && arr[i].d==d1.d){found=1;cout<<"found in posiion "<<i+1<<endl;}}
	   if(found==0){cout<<"not found";}
	  }

	  void displayx(date d1,date d2)
	  {
	    for(int i=0;i<n;i++){
	     
		 /*d1.d++;
		 if(d1.d==31){d1.m++;d1.d=1;}
		 if(d1.m==13){d1.y++;d1.m=0;*/
          if(arr[i]<d2 && arr[i].d>d1.d && arr[i].m>d1.m&& arr[i].y>d1.y )
		  {
		  cout<<arr[i].d<<":"<<arr[i].m<<":"<<arr[i].y<<endl;
		  }
		 }
}

      void show()
	  {
	  for(int i=0;i<n;i++)
	  {
	  cout<<arr[i].d<<":"<<arr[i].m<<":"<<arr[i].y<<endl;
	  }
	  }


	  };



	  int main()
	  {
	 
	  date d1,d2,d3;

	  int n;
	  cout<<"number of dats in the list"<<endl;
	  cin>>n;
	  Dlist a1(n);

      /*cout<<"operaor <"<<endl;
	  cout<<"d1"<<endl;
	  cin>>d1;
	  cout<<"d2"<<endl;
	  cin>>d2;*/

	  //if(d1<d2){cout<<"d1 is earlier"<<endl;}
	  //else {cout<<"d2 is erlier"<<endl;}

	  a1.init();
	  a1.show();
	  cout<<endl<<endl;

	  cout<<endl<<"enyer dae to be found"<<endl;
	  cin>>d3;
	  a1.position(d3);

      cout<<"boundary dates"<<endl;
	  cout<<"d1:";
	  cin>>d1;
	  cout<<"d2:";
	  cin>>d2;
	  cout<<endl<<"dates in consecutive";
	  a1.displayx(d1,d2);



	  return 0;
	  }
   

