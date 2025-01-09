#include <stdio.h>
int main()
{
	int i, n, j, m, d[1000000]={}, k=0, t=0, ce;
	scanf("%d %d", &n, &m);
	for(i=n; i<=m; i++)
	{
		ce=i;
		while(ce!=0)
		{
			k++;
			d[k]=ce%10;
			ce/=10;
		}
		for(j=1; j<=k; j++)
		{
			if(d[j]==3 || d[j]==6 || d[j]==9)
			{
				printf("K");
				t++;
			}
		}
		k=0;
		if(t>=1) printf("\n"), t=0;
		else printf("%d\n", i);
	}
	return 0;
}
