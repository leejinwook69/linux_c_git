#include <stdio.h>

int main(void)
{
	int lenarr, i=0;
	char arr[]={'\"', 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e', '\"'};
	
	lenarr=sizeof(arr)/sizeof(char);
	for(i=0; i<lenarr; i++)
	{
		printf("%c", arr[i]);
	}
	
	return 0;
}