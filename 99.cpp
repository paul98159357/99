# include<stdio.h>
# include<stdlib.h>

int main (void)
{
	int i,j;
	
	for (i=1;i<10;i++)
	{
		for (j=1;j<10;j++)
		 
			printf("%d*%d=%d ",i,j,i*j);
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
	
}
