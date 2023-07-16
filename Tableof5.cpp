#include<iostream>
using namespace std;
int table(int num)
{
cout<<"----Table of 5----"<<endl;
for(int i=1;i<=10;i++)
{
	int number= num*i;
	cout<<num<<"x"<<i<<"="<<number<<endl;
}
}
int main()
{
	int n=5;
	table(n);
	return 0;
	
}
