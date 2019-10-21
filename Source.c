#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i, r;
	srand(time(NULL));
	r = rand() % 100;
	printf("Donner le Nombre n\n");
	scanf_s("%d", &n);
	i = 0;
	while (r != n)
	{
		if (r < n)
			printf("petit ,Deviner le Nombre encore une fois\n");
		if (r > n)
			printf("grand ,Deviner le Nombre encore une fois\n");
		i++;
		scanf_s("%d", &n);
	}
	printf("winer winer chiken dinner\n");
	printf("vous aver essaye %d de fois", i);
}
