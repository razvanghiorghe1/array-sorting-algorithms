#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main(void)
{
int x[] = {0,78,345,1,-3};
int size = sizeof(x)/sizeof(x[0]);
qsort(x, size, sizeof(int), compare);
for(int i = 0; i < size; ++i)
	printf("%d ", x[i]);
return 0;
}
