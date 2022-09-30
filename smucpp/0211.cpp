#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n = 0;
	int sum = 0;
	
	cout<<"input end num"<<endl;
	cin>>n;
	
	for(int k = 1; k <= n; k++)
		sum+=k;

	cout<<"sum of 1 to "<<n<<" is "<<sum<<endl;

	return 0;
}
	
