#include<iostream>
#include<string>
#include<list>
using namespace std;

class dict{
    public:
    string word;
    string mean;

    dict(string a,string b)
    {
        word=a;
        mean=b;
    }

    friend ostream& operator <<(ostream &os,dict d)
    {
        os<<d.word<<"->"<<d.mean<<endl;
        return os;
    }
};

int main()
{
    dict d1("mango","fruit");
    dict d2("cpp","c++");
    dict d3("exam","tmrw");

    list <dict> l;
    l.push_back(d1);
    l.push_back(d2);
    l.push_back(d3);

    do{
        cout<<"a.display\n";
        cout<<"b.inser\n";
        cout<<"c.serach\n";
        cout<<"d.delete\n";
        cout<<"e.update\n";
        cout<<"f.exit\n";

        cout<<"\n selcet a option\n";
        char ch;
        cin>>ch;

        switch(ch)
        {
            case 'a':
            {
                for(auto it=l.begin();it!=l.end();++it)
                {
                    cout<<*it;
                }
                break;
            }

            case 'b':
            {
                cout<<"enetr the word and meaning to be inserted\n";
                string s1,s2;
                cin>>s1>>s2;
                dict d6(s1,s2);
                l.insert(l.end(),d6);
                break;
            }

            case 'c':
            {
                cout<<"enter the word to be search\n";
                string s3;
                cin>>s3;
                for(auto it=l.begin();it!=l.end();it++)
                {
                    if((it)->word==s3){ cout<<*it;}
                }
                break;
            }


            case 'd':
            {
                cout<<"enetr the word to be delted\n";
                string s4;
                cin>>s4;
                for(auto it=l.begin();it!=l.end();it++)
                {
                    if(it->word==s4){it=l.erase(it);}
                }
                break;
            }

            case 'e':
            {
                cout<<"enter the word to be updatedand meanind\n";
                string s5,s6;
                cin>>s5>>s6;
                for(auto it=l.begin();it!=l.end();it++)
                {
                    if(it->word==s5){it->mean=s6;}
                }
                break;
            }

            case 'f':
            {
                return 0;
            }

        }
    }

    while(true);
    return 0;

}