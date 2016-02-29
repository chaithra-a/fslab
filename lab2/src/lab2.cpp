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
#include<stdlib.h>
#include<string.h>
using namespace std;
class student
{
	string  usn,sem,name;
public:
	void read();
	void pack();
	void write();
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
	buffer=usn+'|'+name+'|'+sem;
	buffer.resize(100,'$');
	fp<<buffer;
}
void student::write()
{
	string buffer;
  fstream f1;
  f1.open("2a.txt",ios::out|ios::app);
  f1<<buffer;
  f1.close();
 }
void student::unpack(void)
{
	int i=0,buffer;
	while(!buffer[i]='|')
		{
		 usn+=buffer[i++];
		}
	     i++;
		 while(!buffer[i]='|')
		 {
			 name+=buffer[i++];
		 }
		 while(!buffer[i]='|')
			 sem+=buffer[i++];
		 i++;
		}
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
      s1.write();
       fp.close();
       break;
 case 3:s1.unpack();
        break;
	}
	}
 return 0;
}
