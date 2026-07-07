#include<iostream>
using namespace std;

class arr{
    int *a;
    int*b;
    int m;
    int n;

    public:
    arr(int mm,int nn){
        m=mm;
        n=nn;
        a=new int[m];
        b=new int [n];
    }

    friend istream& operator >>(istream &is,arr &x)
    {
        cout<<"enter for 1st array: ";
        for(int i=0;i<x.m;i++)
        {is>>x.a[i];}
        cout<<"enter 2nd array: ";
        for(int i=0;i<x.n;i++)
        {is>>x.b[i];}

        return is;
    }

    friend ostream& operator <<(ostream &os,arr &x)
    {
        os<<"1st array\n";
        for(int i=0;i<x.m;i++)
        {os<<x.a[i];}
        os<<"\n\n2nd array\n";
        for(int i=0;i<x.n;i++)
        {os<<x.b[i];}
        os<<"\n";
        return os;
    }

    void add()
    {
        for(int i=0;i<m;i++)
       
            {
                cout<<a[i]+b[i];
            }
    }
};

int main()
{
    arr ar(5,6);
    cin>>ar;
    cout<<ar;
    cout<<endl<<"add"<<endl;
    ar.add();
    return 0;
}