/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <iostream>
using namespace std;
int sum_of_two_primes(int n);

int main()
{
long int n, i,b;
cin>>b;
for(int j=0;j<b;j++)
{
cin >> n;
int flag = 0;
for(i = 2; i <= n/2; ++i)
{

// condition for i to be prime
if (sum_of_two_primes(i) == 1)
{

if (sum_of_two_primes(n-i) == 1)
{
cout <<"Deepa"<< endl;
flag = 1;
}

}
}

if (flag == 0)
cout <<"Arjit";
}
return 0;
}

//function to check if a number is prime or not
int sum_of_two_primes(int n)
{
int i, isPrime = 1;

for(i = 2; i <= n/2; ++i)
{
if(n % i == 0)
{
isPrime = 0;
break;
}
}
return isPrime;
}

