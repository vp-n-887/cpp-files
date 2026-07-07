#include <iostream>
#include <cstdlib>
using namespace std;

template <typename T>
class matsum{
   int r,c;
   T **mat;
   
   public:
      matsum(int rr,int cc){
       r=rr;
       c=cc;
       mat=new T*[r];
       for(int i=0;i<r;i++)
        mat[i]=new T[c];

     for(int i=0;i<r;i++)
       {for(int j=0;j<c;j++)
          {mat[i][j]=rand()%10;}
       }
}

    friend matsum<T> operator +(matsum<T> m1,matsum<T> m2)
{
       matsum <T>m3(m1.r,m1.c);
       
      for(int i=0;i<m1.r;i++)
       { for(int j=0;j<m1.c;j++)
           {m3.mat[i][j]=m1.mat[i][j]+m2.mat[i][j];}
       }
     
     return m3;
}


friend ostream& operator <<(ostream& os,matsum<T> m)
{
    for(int i=0;i<m.r;i++)
      { for(int j=0;j<m.c;j++)
           {os<<m.mat[i][j]<<"\t";}
        os<<endl;
      }
  return os; 
}

};

class C{
   int ip,rp;
  
    public:
         C(int ii=0,int rr=0):ip(ii),rp(rr){}
    
         friend C operator +(C c1,C c2)
{   
          C c3(c1.ip+c2.ip,c1.rp+c2.rp);

          return c3;
}

friend ostream& operator <<(ostream& os,C& c)
{
     os<<c.rp<<"+"<<c.ip<<"i";
     return os;
}

};



int main()
{
     matsum <int> a(2,3),b(2,3),c(2,3);
     matsum <C> d(3,3),e(3,3),f(3,3);  
     matsum <double> g(2,5),h(2,5),k(2,5);
    
    cout<<"int"<<endl;
    c=a+b;
    cout<<a;
    cout<<endl<<endl;
     cout<<b;
    cout<<endl<<endl;
     cout<<c;
    cout<<endl<<endl;
     

   cout<<endl<<endl<<"complex"<<endl;
   d=e+f;
    cout<<e;
    cout<<endl<<endl;
     cout<<f;
    cout<<endl<<endl;
     cout<<d;
    cout<<endl<<endl;

   
   cout<<endl<<endl<<"double"<<endl;
   g=h+k;
   cout<<h;
    cout<<endl<<endl;
     cout<<k;
    cout<<endl<<endl;
     cout<<g;
    cout<<endl<<endl;

     return 0;
}
