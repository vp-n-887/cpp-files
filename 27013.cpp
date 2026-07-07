#include<iostream>
using namespace std;

class square
{
	int size;
	int row;
	int col;
public:

	square(int size=5)
	{
		this->size=size;
                row=0;col=0;
	}

	void showpos()
	{
		cout<<"current position is:("<<row<<" " <<col<<")"<<endl;
	}
	
	void moveup()
	{
		if(row==0) {row=size-1;}
		else {row=row-1;}
	}

	void movedown()
	{
		if(row==size-1) {row=0;}
		else {row=row+1;}
	}

	void moveright()
	{
		if(col==size-1) {col=0;}
		else {col=col+1;}
	}

	void moveleft()
	{
		if(col==0) {col=size-1;}
		else {col=col-1;}
	}

};

int main()
{
	int size;

	cin>>size;

	square s(size);

	cout<<"initial position";
	s.showpos();
	cout<<endl;

	cout<<"moveup";
	s.moveup();
	s.showpos();
	cout<<endl;

	cout<<"moveleft";
        s.moveleft();
        s.showpos();
        cout<<endl;

	cout<<"moveright";
        s.moveright();
        s.showpos();
        cout<<endl;

	cout<<"movedown";
        s.movedown();
        s.showpos();
        cout<<endl;

	cout<<"show final position ";
	s.showpos();
	cout<<endl<<endl;

	return 0;
}

        	
