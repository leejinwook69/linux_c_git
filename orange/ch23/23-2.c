#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct
{
	Point ul;
	Point lr;
} Rectangle;

int Area(Rectangle* rptr)
{
	int width = rptr->lr.xpos - rptr->ul.xpos;
	int height = rptr->ul.ypos - rptr->lr.ypos;
	int area = width*height >= 0 ? width*height : -1*width*height;
	
	return area;
}

void PrintR(Rectangle* rptr)
{
	printf("print Rectangle's vertex\n");
	printf("vertex 1. UL : %d, %d		vertex 2. UR : %d, %d\n", rptr->ul.xpos, rptr->ul.ypos, rptr->lr.xpos, rptr->ul.ypos);
	printf("vertex 3. RL : %d, %d		vertex 4. LR : %d, %d\n", rptr->ul.xpos, rptr->lr.ypos, rptr->lr.xpos, rptr->lr.ypos);
}

int main(void)
{
	Rectangle rec = {{0,0}, {100,100}};
	printf("Area : %d\n\n", Area(&rec));
	PrintR(&rec);

	return 0;
}
