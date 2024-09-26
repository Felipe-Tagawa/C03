#include <iostream>
using namespace std;

long long int fatorial(int long long n)
{
	if (n <= 1ll)
	{
		return 1ll;
	}
	else
	{
		return n*fatorial(n-1);
	}
	return -1ll;
}


int main()
{
	
	int long long n;
	
	cin >> n;
	int long long result = fatorial(n);
	cout << result << endl;
	return 0;
}