#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("country");
	fout<<"United States of America"<<endl;
	fout<<"United Kingdom"<<endl;
	fout<<"South Korea"<<endl;
	
	fout.close();
	
	fout.open("capital");
	
	fout<<"Washington"<<endl;
	fout<<"London"<<endl;
	fout<<"Seoul"<<endl;
	fout.close();
	
	const int N=80;
	char line[N];
	
	ifstream fin;
	fin.open("country");
	cout<<"Contents of Country file\n";
	while(fin)
	{
		fin.getline(line, N);
		cout<<line;
	}
fin.close();
fin.open("capital");

cout<<"\nContents of capital file\n";
while(fin)
{
	fin.getline(line, N);
	cout<<line;
	
}
fin.close();
return 0;
}
