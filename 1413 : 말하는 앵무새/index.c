#include <stdio.h>
int main()
{
    int i, n=0;
    char d[100]={};
    gets(d);
    for(i=1; i<=100; i++)
		{
			if(d[i]>='A') n++;
			if(d[i]==' ') n++;
		}
    for(i=n; i>=0; i--)
    {
        printf("%c", d[i]);
    }
    return 0;
}
