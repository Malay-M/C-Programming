#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{
	int i,j,count,let=0;
	count=strlen(*argv);
	for(i=0;i<count;i++)
	{
		for(j=0;j<count;j++)
		{
			if(*argv[i]==*argv[j])
			   let++;
		}
	printf("%c = %d\n",*argv[i],let);
	let=0;
	}
	return 0;
}
