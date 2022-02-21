#include<stdio.h>

int main(void)
{
	FILE * src = fopen("232.mp3", "rb");
	FILE * des = fopen("242.mp3", "wb");
	char buf[20];
	int readCnt;

	if(src == NULL || des == NULL)
	{
		puts("File open failed");
		return -1;
	}

	while(1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if(readCnt < sizeof(buf))
		{
			if(feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				puts("File copied");
				break;
			}
			else
				puts("File not copied");

			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}

	fclose(src);
	fclose(des);
	return 0;

}
