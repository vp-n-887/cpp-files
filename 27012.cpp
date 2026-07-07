#include<iostream>
using namespace std;

class mylist{
 
	int *data;
	int size;
public:
	mylist(int size=0)
	{
		this->size=size;
		data=new int[size];
	}

	void initlist()
	{
		for(int i=0;i<size;i++)
		{
			cin>>(*(data+i));
		}
	}

	void show()
	{
		for(int i=0;i<size;i++)
		{
			cout<<*(data+i);
			cout<<endl;
		}
	}

	void search(int key)
	{
		int found=0;
		for(int i=0;i<size;i++)
		{
			if(*(data+i)==key){found=1;cout<<"found in";cout<<i+1;break;}
		}
		if(found==0)
			cout<<"not found";
	}

	void insert_first(int first)
	{
		for(int i=size-1;i>=0;i--)
		{
			*(data+i+1)=*(data+i);
		}
		*(data+0)=first;
		size++;
	}

	void insert_last(int last)
	{
		*(data+size)=last;
		size++;
	}


	void del(int dele)
	{
		int found=0;
		for(int i=0;i<size;i++)
		{
			if(*(data+i)==dele)
			{
				found=1;
				for(int j=i;j<size-1;j++)
				{
					*(data+j)=*(data+j+1);
				}
				size--;
			        i--;
			}
		}
		if(found==0)
			cout<<"element not available"<<endl;
	}

	int size_list()
	{
		int n=0;
		for(int i=0;i<size;i++)
		{
			n++;
		}
		return n;
	}


};




int main()
{
	
	int size;
	int key,first,last,dele,n;
	cout<<"enter size";
       cin>>size;

       mylist l1(size);

         l1.initlist();
         cout<<endl;
        
         cout<<endl<<"enter key"<<endl;
          cin>>key;
          l1.search(key);

        cout<<endl<<"enter first and last element"<<endl;
        cin>>first>>last;
        l1.insert_first(first);
         l1.show();
	 cout<<endl<<endl;


        l1.insert_last(last);
         l1.show();
         cout<<endl<<endl;

       cout<<"enter delete element"<<endl;
       cin>>dele;
       l1.del(dele);
       l1.show();
       cout<<endl<<endl;

       cout<<endl<<"size of array";
       n=l1.size_list();
       cout<<n;


      cout<<endl<<endl;       
	  return 0;
}
