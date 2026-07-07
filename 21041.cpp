#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ofstream f1("msg.bin",ios::out|ios::binary);
	int arr[5]={1,2,3,4,5};
	char *carr=reinterpret_cast<char *>(arr);
	f1.write(carr,sizeof(arr));
	

	f1.close();
	ifstream f2("msg.bin",ios::in|ios::binary);
	if(f2)
	{
		cout<<"file created ";
	}
	int barr[5];
	char *c=reinterpret_cast<char *> (barr);
	f2.read(c,sizeof(arr));

	f2.close();
	for(int i=0;i<5;i++)
	{
		cout<<barr[i];
	}
	return 0;

}