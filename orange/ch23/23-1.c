#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
} Point;

void SwapPoint (Point *pt1, Point *pt2)
{
	Point tmp;
	tmp = *(pt1);
	*(pt1) = *(pt2);
	*(pt2) = tmp;
}

int main(void)
{
	Point pos1 ={2, 4};
	Point pos2 ={5, 7};
	Point *pt1 = &pos1;
	Point *pt2 = &pos2;
	
	SwapPoint(pt1, pt2);
	
	printf("pos1.x = %d, pos1.y = %d / pos2.x = %d, pos2.y = %d", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
	return 0;
}