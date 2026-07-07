#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct invoice
{
	int sno;
	string name;
	int quan;
	float unitp;
	float amount() {return quan*unitp;}
	float gst() { return amount()*0.18;}
	float totala() {return amount()+gst();}
};

void display(struct invoice s)
{
	cout<<setw(3)<<s.sno<<setw(10)<<s.name<<setw(9)<<s.quan;
	cout<<setw(9)<<fixed<<setprecision(2)<<s.unitp;
        cout<<setw(7)<<fixed<<setprecision(2)<<s.amount();
	cout<<setw(5)<<"18%";
	cout<<setw(15)<<fixed<<setprecision(2)<<s.gst();
	cout<<setw(25)<<fixed<<setprecision(2)<<s.totala();
	cout<<endl;
}
int main()
{
	struct invoice s1,s2,s3,s4,s5;
	cin>>s1.sno>>s1.name>>s1.quan>>s1.unitp;
	cin>>s2.sno>>s2.name>>s2.quan>>s2.unitp;
    cin>>s3.sno>>s3.name>>s3.quan>>s3.unitp;
	cin>>s4.sno>>s4.name>>s4.quan>>s4.unitp;
	cin>>s5.sno>>s5.name>>s5.quan>>s5.unitp;

	cout<<setw(50)<<setfill(' ')<<endl;
	cout<<setw(3)<<"S.NO"<<setw(10)<<"NAME"<<setw(9)<<"QUANTITY"<<setw(9)<<"UNITPRI"<<setw(7)<<"AMOUNT"<<setw(5)<<"GST%"<<setw(15)<<"GST AMO"<<setw(25)<<"T AMOUNT";
	 cout<<setw(50)<<setfill(' ')<<endl;

	display(s1);
	display(s2);
        display(s3);
	display(s4);
	display(s5);

	 cout<<setw(50)<<setfill(' ')<<endl;
	 cout<<right<<setw(55)<<"GST AMOUNT IS "<<s1.gst()+s2.gst()+s3.gst()+s4.gst()+s5.gst();
	 cout<<right<<setw(20)<<"TOTAL AMOUNT IS "<<s1.totala()+s2.totala()+s3.totala()+s4.totala()+s5.totala();
	 cout<<endl;

	return 0;
}

