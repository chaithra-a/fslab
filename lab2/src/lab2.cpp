//============================================================================
// Name        : lab2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#//============================================================================
// Name        : lab2.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
using namespace std;
class student
{
	string  usn,sem,name;
public:
	void read();
	void pack();
	void unpack();
};
fstream fp;
void student::read(void)
{
    cout<<"enter the student usn,name,sem"<<endl;
    cin>>usn;
    cin>>name;
    cin>>sem;
}
void student::pack(void)
{
	string buffer;
	buffer=usn+"|"+name+"|"+sem;
	buffer.resize(100,'$');
	fp<<buffer;
}
void student::unpack(void)
{
	string extra;
	fp.open("f.txt",ios::in);
	getline(fp,usn,'|');
	cout<<usn;
	getline(fp,name,'|');
	cout<<name;
	getline(fp,sem,'|');
	getline(fp,extra);
}./workspace/lab2/src/lab2.cpp
int main()
{
	student s1;
	int ch,i;
	for(i=0;i<=3;i++)
	{
	cout<<"enter your choice"<<endl;
	cin>>ch;
switch(ch)
{
 case 1:s1.read();
 fp.open("f.txt",ios::out);
       if(!fp)
       {
	   cout<<"not opened";
       }
      s1.pack();
       fp.close();
       break;
 case 3:s1.unpack();
        break;
	}
	}
 return 0;
}
