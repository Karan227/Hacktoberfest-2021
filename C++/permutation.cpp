#include<iostream>
#include<string>
using namespace std;

void swap(char *p,char *q)
{
	char *temp;
	temp = p;
	p = q;
	q = p;
}

void permute(char arr[],int l,int r)
{
	
	int i;
	
	if(l==r)
	{
		cout<<arr<<"\n";
	}
	
	else
	{
		for(int i=l;i<r;i++)
		{
			swap(arr[l],arr[i]);
			permute(arr,l+1,r);
			swap(arr[l],arr[i]);
			
		}
	}
}

int main()
{
	char arr[] = {'k','a','r','a','n'};
	
	int r = sizeof(arr)/sizeof(char);
	int l=0;
	
	permute(arr,l,r);
	
	
	
}
