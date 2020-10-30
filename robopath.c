#include<stdio.h>
#include<string.h>

int min (long long int a, long long int b)
{
	if (a>b)
	return b;

	else
	return a;
}

int main () {
	long long int test,t,ver,hor,sum,i,j,k,u,d,l,r,len;
	char s[100005];
	scanf("%lld",&test);
	for (t=0;t<test;t++)
	{
		scanf("%s",s);
		len=strlen(s);
		u=0;
		d=0;
		l=0;
		r=0;
		for (i=0;i<len;i++)
		{
			if (s[i]=='U')
			u++;
			
			else if (s[i]=='D')
			d++;

			else if (s[i]=='L')
			l++;
			
			else if (s[i]=='R')
			r++;
		}
		ver = min(u,d);
		hor = min(l,r);
				
		if ( (hor>0 && ver>0) || (ver==0 && hor==0) )
		{
			sum = ver + hor;
        	        printf("%lld\n",2*sum);
	
			for (i=0;i<ver;i++)
			printf("U");

			for (i=0;i<hor;i++)
			printf("R");

			for (i=0;i<ver;i++)
			printf("D");

			for (i=0;i<hor;i++)
			printf("L");	
			
		}
		else if (hor==0 && ver>=1)
		{
			printf("2\n");
			printf("U");
			printf("D");
		}

		else if (ver==0 && hor>=1)
		{
			printf("2\n");
			printf("R");
			printf("L");
		}

		printf("\n");
	}	

	return 0;
}


				


