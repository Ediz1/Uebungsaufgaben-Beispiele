#define NUMH 3
#include <stdio.h>
void myCompare(const void *a, const void*b);
void arrayausgabe();

typedef struct {
	int v;
	int w;
} hase;

hase ha[NUMH] = { { 3, 4 },{ 2,3 },{ 5,4 } };

void main()
{
	//printf("test: %d", (*hase).ha[2]);
	ausgabe();
}

int ausgabe()
{
	int i=0;
	printf("Unsortiert:\n");
	arrayausgabe();

	printf("Sortiert:\n");
	qsort(ha,NUMH,sizeof(hase),myCompare);
	arrayausgabe();
}

void arrayausgabe()
{
	int i;
	for (i = 0; i < NUMH; i++)
	{
		printf("Hase%d : v = %d, w = %d\n",i+1, ha[i].v, ha[i].w);
	}
}

void myCompare(const void *a, const void*b)
{

	if (((const hase*)a) ->v < ((const hase*)b)->v) return -1;
	if (((const hase*)a)->v > ((const hase*)b)->v) return 1;
}