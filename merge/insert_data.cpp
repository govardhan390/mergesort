#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		return 1;
	}
	fstream src;
	src.open(argv[1], ios::out);
	if (!src) 
	{
		cout << "Error opening file!" << endl;
		return 1;
	}
	int number;
	int i=0;
	int j;
	cout<<"enter the number should be stored"<<endl;
	cin>>j;
	//cout<<"fghj";
	//cout<<j<<endl;
	srand(time(0));
	while(i<j)
	{
		number=rand()%j;
		//cout<<number;
		src<<number;
		src.put(' ');
		i++;
	}
	src.close();
}
