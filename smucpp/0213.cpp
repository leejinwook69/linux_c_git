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
		cout<<"1. «��, 2. ¥��, 3. ������, 4. ����"<<endl;
		cin>>n;

		if(n != 1 && n!=2 && n!=3 && n!=4)
		{
			cout<<"1~4 �� �����ϼ���"<<endl;
			continue;
		} else if(n == 4)
		{
			cout<<"���� ����"<<endl;
			break;
		}

		cout<<"�� �κ� ?"<<endl;
		cin>>p;

		switch (n)
		{
			case 1:
				cout<<"«�� "<<p<<"�κ� ���Խ��ϴ�"<<endl;
				break;
			case 2:
				cout<<"¥�� "<<p<<"�κ� ���Խ��ϴ�"<<endl;
				break;
			case 3:
				cout<<"������ "<<p<<"�κ� ���Խ��ϴ�"<<endl;
				break;
			default:				
				break;
		}
	}
	return 0;
}





