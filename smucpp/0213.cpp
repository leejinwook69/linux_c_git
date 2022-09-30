#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n = 0;
	int p = 0;

	cout<<"******* welcome ********"<<endl;

	while(1)
	{
		cout<<"1. 짬뽕, 2. 짜장, 3. 군만두, 4. 종료"<<endl;
		cin>>n;

		if(n != 1 && n!=2 && n!=3 && n!=4)
		{
			cout<<"1~4 중 선택하세요"<<endl;
			continue;
		} else if(n == 4)
		{
			cout<<"영업 종료"<<endl;
			break;
		}

		cout<<"몇 인분 ?"<<endl;
		cin>>p;

		switch (n)
		{
			case 1:
				cout<<"짬뽕 "<<p<<"인분 나왔습니다"<<endl;
				break;
			case 2:
				cout<<"짜장 "<<p<<"인분 나왔습니다"<<endl;
				break;
			case 3:
				cout<<"군만두 "<<p<<"인분 나왔습니다"<<endl;
				break;
			default:				
				break;
		}
	}
	return 0;
}





