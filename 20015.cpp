#include<iostream>
#include<string>
using namespace std;


struct eb{
	int current_read;
	int prev_read;
	int units_consumed;
	string cust_type;
	float bill_amount;
	float pending_amount;

	void record(int curr,int prev)
	{
		current_read=curr;
		prev_read=prev;
		units_consumed= current_read-prev_read;
	}

	void bill()
	{
		float rate;
		if(cust_type=="home")
			rate=10.0;
		if(cust_type=="office")
			rate=20.0;
		bill_amount=units_consumed*rate;
		pending_amount+=bill_amount;
	}

        void payment(float amount)
	{
	      if(amount>pending_amount)
	      cout<<"paid amount is more than the bill pending amount"<<endl;
              else 
	      {
	           pending_amount-=amount;
	      }
        }
         
       void display()
       {
              cout<<"customer type: "<<cust_type<<endl;
              cout<<"units consumed: "<<units_consumed<<endl;
               cout<<"bill amount: "<<bill_amount<<endl;
	       cout<<"pending amount: "<<pending_amount<<endl<<endl;
       }

       void status()
       {
	       if(pending_amount==0)
		       cout<<"completely paid  no due"<<endl;
	       else 
		       cout<<"pending in due for "<<pending_amount<<endl;
      }

};


int main()
{ 
       struct eb b1,b2,b3;
       int prev,curr;
       float amount;

       cout<<"for customer 1 input"<<endl;
       cout<<"previous,current,pending,type"<<endl;
       cin>>prev>>curr>>b1.pending_amount>>b1.cust_type;

       b1.record(curr,prev);
       b1.bill();
       b1.display();

       cout<<endl<<endl<<"making payment....................."<<endl;
       cout<<"enter amount"<<endl;
       cin>>amount;
       b1.payment(amount);
       b1.display();
       b1.status();
        
       cout<<endl<<endl<<endl;

        cout<<"for customer 2 input"<<endl;
       cout<<"previous,current,pending,type"<<endl;
       cin>>prev>>curr>>b2.pending_amount>>b2.cust_type;

       b2.record(curr,prev);
       b2.bill();
       b2.display();

       cout<<endl<<endl<<"making payment....................."<<endl;
       cout<<"enter amount"<<endl;
       cin>>amount;
       b2.payment(amount);
       b2.display();
       b2.status();

       cout<<endl<<endl<<endl;
       

        cout<<"for customer 3 input"<<endl;
       cout<<"previous,current,pending,type"<<endl;
       cin>>prev>>curr>>b3.pending_amount>>b3.cust_type;

       b3.record(curr,prev);
       b3.bill();
       b3.display();

       cout<<endl<<endl<<"making payment....................."<<endl;
       cout<<"enter amount"<<endl;
       cin>>amount;
       b3.payment(amount);
       b3.display();
       b3.status();

       cout<<endl<<endl<<endl;
       

       return 0;
}


