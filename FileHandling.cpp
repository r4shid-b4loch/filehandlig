#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream myfile;
	myfile.open("word.txt");
	myfile<<"Hello World";
	myfile.close();
	ofstream myfile2;
	myfile.open("word2.txt");
	myfile<<"Rashid Abid";
	myfile2.close();
	char a[30],ch,st[1000];
	int tot=0,i=0,totword=0;
	cout<<"Enter a File name:"<<endl;
	cin>>a;
	ifstream file;
	file.open(a,ifstream::in);
	if(!file)
	{
		cout<<endl<<"File does not exist";
	}
	while(file>>noskipws>>ch)
	{
		st[tot]=ch;
		tot++;
	}
	file.close();
	st[tot]='0';
	while(st[i]!='0')
	{
		if(st[i]=='\n')
		{
		if(st[i+1]!='0'&&st[i+1]!=' ')
		totword++;
		i++;
	}
	else if(st[i]!=' ')
	i++;
	else
	{
		if(st[i+1]!='0'&&st[i+1]!=' ')
		totword++;
		i++;
	}
}
cout<<endl<<"Total Number of Words="<<totword;
cout<<endl;
char b[30],ch2,st2[1000];
int tot2=0,k=0,totword2=0;
cout<<"Enter file name:";
cin>>b;
ifstream file2;
file2.open(b,ifstream::in);
if(!file2)
{
	cout<<endl<<"File does not exist";
}
while(file2>>noskipws>>ch2)
{
	st2[tot2]=ch2;
	tot++;
}
file2.close();
st2[tot2]='0';
while(st2[k]!='0')
{
	if(st2[k]=='\n')
	{
		if(st2[k+1]!='0'&&st2[k+1]!=' ')
		totword2++;
		k++;
	}
	else if(st2[k]!=' ')
	k++;
	else
	{
		if(st2[k+1]!='0'&&st2[k+1]!=' ')
		totword2++;
		k++;
	}
}
cout<<endl<<"Total Number of Words="<<totword2;
cout<<endl;
}
