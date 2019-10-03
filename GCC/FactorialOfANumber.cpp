#include<iostream>
using namespace std;
int main()
{
	int n;
  int res = 1;
	cout<<"Enter number to calculate factorial :";
	cin>>n;
	while(n>1)
  {
    res = res * n;
    n = n - 1;
  }
	cout<<"Factorial of given number is";
  cout<<res;
	return 0;
}
