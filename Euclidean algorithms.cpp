#include <bits/stdc++.h>
using namespace std;

// Function to return
// gcd of a and b
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

// Driver Code
int main()
{
	int a , b ;

	// Function call
	cout<<"enter value a=";
	cin>>a;
	cout <<"enter value of b=";
	cin >>b;
	cout <<gcd(a,b);

	return 0;
}