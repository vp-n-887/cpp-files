#include<iostream>
#include<string>
using namespace std;

class student{
    string gender;
    char first_n[20];
    string last_n;
    int dob_date;
    int dob_month;
    string course;
    char attend[5];
public:
    friend istream& operator >>(istream &is,student &s)
    {
       cout<<"enetr 1.mr/ms"<<endl<<"2.first_name 3.last_name"<<endl<<"4.dob date 5.dob month"<<endl<<"6.course 7.attendnance"<<endl;
        is>>s.gender>>s.first_n>>s.last_n>>s.dob_date>>s.dob_month>>s.course>>s.attend;
        return is;
    }

    friend ostream& operator <<(ostream& os,student s)
    {
        os<<s.gender<<endl<<s.first_n<<endl<<s.last_n<<endl<<s.dob_date<<endl<<s.dob_month<<endl<<s.course<<endl<<s.attend<<endl<<endl;
        return os;
    }

    void allmales()
    {
        if(gender=="mr"){cout<<*this;}
    }
    
    void nameam()
    {
        if(first_n[0]>='a'&&first_n[0]<='m')
        {cout<<*this;}
    }
    
    void april()
    {
        if(dob_month==4){cout<<*this;}
    }
    
    void classes()
    {
        int count=0;
        for(int i=0;i<sizeof(attend);i++)
        {if(attend[i]=='p')count++;}
        if(count>=4){cout<<*this;}
    }


};

int main()
{
    
    student s[2];
    
    cout<<"enter input\n";
    for(int i=0;i<2;i++)
    {cin>>s[i];}
    cout<<endl<<endl;
   
   cout<<"output\n";
    for(int i=0;i<2;i++)
    {cout<<s[i];}
    
    cout<<"\nall males\n";
    for(int i=0;i<2;i++)
    { s[i].allmales(); }
    
    
    cout<<"\n\nname from a to m\n";
     for(int i=0;i<3;i++)
    {
        s[i].nameam();
    }
    
    cout<<"\n\napril\n";
    for(int i=0;i<3;i++)
    {
        s[i].april();
    }
    
    cout<<"\n\n 4 classes\n"; 
    for(int i=0;i<3;i++)
    {
        s[i].classes();
    }
    
    
    
return 0;
}