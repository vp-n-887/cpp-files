#include<iostream>
using namespace std;

class arr
{
    int *a;
    int n;
    
    public:

    arr(int size=0){
        n=size;
        a=new int[n];
    }

    friend istream& operator >>(istream &is,arr &s)
    {
        for(int i=0;i<s.n;i++)
        {is>>s.a[i];}
        return is;
    }

    friend ostream& operator <<(ostream &os,arr &s)
    {
        for(int i=0;i<s.n;i++)
        {
            os<<s.a[i]<<"\t";
        }
        return os;
    }

    bool operator *(int key)
    {
        for(int i=0;i<n;i++)
        {if(a[i]==key)
            {return true;}
        }
        return false;
    }

    arr operator +(arr s)
    {
        int count=0;
        arr f(n+s.n);
        for(int i=0;i<n;i++)
        {
            f.a[count]=a[i];
            count++;
        }

        for(int i=0;i<s.n;i++)
        {
           if(!((*this)*s.a[i]))
           {
               f.a[count]=s.a[i];
               count++;
           }
        }

        f.n=count;
        return f;
    }

    arr operator *(arr s)
    {
        int count=0;
        arr f(n+s.n);

        for(int i=0;i<s.n;i++)
        {
            if((*this)*s.a[i])
            {
                f.a[count]=s.a[i];
                count++;
            }
        }
         f.n=count;
        return f;
    }

    arr operator -(arr s)
    {
        int count=0;
        arr f(n+s.n);

        for(int i=0;i<n;i++)
        {
            if(!(s*a[i]))
            {
                f.a[count]=a[i];
                count++;
            }
        }
         f.n=count;
        return f;
    }
};

int main()
{
    arr a(5);
    arr b(5);
    arr c;
    arr d;
    arr e;

    cout<<"\ninput 1 array\n";
    cin>>a;
    cout<<"\ninput 2 array\n";
    cin>>b;

     cout<<"\noutput 1 array\n";
    cout<<a;
    cout<<"\noutput 2 array\n";
    cout<<b;

    c=a+b;
    d=a*b;
    e=a-b;

    cout<<"\n\nunion\n";
    cout<<c;

    cout<<"\n\nintersection\n";
    cout<<d;

    cout<<"\n\ndifference\n";
    cout<<e;

    return 0;
}