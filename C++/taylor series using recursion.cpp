#include<iostream>
using namespace std;

float exp(float x, float n)
{   static float p=1,f=1;
    int r;
    
    
	if(n==0)
	{
		return 1;
	}
	else{
		r=exp(x,n-1);
		p=p*x;
		f=f*n;
		return r+(p/f);
		}
}

int main()
{   float value;
	value=exp(2,3);
	
	cout<<value;
}
