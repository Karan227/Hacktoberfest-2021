#include<iostream>
using namespace std;
void TOH(int n,int A,int B,int C)
{   int i=1;
	if(n>0)
	
	{
		TOH(n-1,A,C,B);                  //shift n-1 blocks from A to B using C
		cout<<i<<"from tower"<<A<<"to"<<C<<"\n";
		TOH(n-1,B,A,C);                   //shift n-1 blocks from B to C using A
	}
}
int main()
{
	TOH(5,1,2,3);
}
