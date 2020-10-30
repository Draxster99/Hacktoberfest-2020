#include<stdio.h>

int main () {
	long long int i,j,k,a,b,c,d,n,sx,sy,x[200005],y[200005],ax,ay,ans;
	scanf("%lld %lld %lld",&n,&sx,&sy);
	for (i=0;i<n;i++)
	{
		scanf("%lld %lld",&x[i],&y[i]);
	}
	
	a=0;
	b=0;
	c=0;
	d=0;
	for (i=0;i<n;i++)
	{
		if (x[i]<=sx && y[i]<sy)
		c++;	

		else if (x[i]<sx && y[i]>=sy)
		b++;

		else if (x[i]>sx && y[i]<=sy)
		d++;
		
		else if (x[i]>=sx && y[i]>sy)
		a++;	
	}

	if (d>=a && d>=b && d>=c)
	{
		if (a>=c)
		{
			ans=a+d;
			ax=sx+1;
			ay=sy;
		}
		else
		{
			ans=c+d;
			ax=sx;
			ay=sy-1;
		}
	}
	else if (a>=d && a>=b && a>=c)
        {
                if (b>=d)
                {
                        ans=a+b;
                        ax=sx;
                        ay=sy+1;
                }
                else
                {
                        ans=a+d;
                        ax=sx+1;
                        ay=sy;
                }
        }

	else if (b>=a && b>=d && b>=c)
        {
                if (a>=c)
                {
                        ans=a+b;
                        ax=sx;
                        ay=sy+1;
                }
                else
                {
                        ans=c+b;
                        ax=sx-1;
                        ay=sy;
                }
        }

	else if (c>=a && c>=b && c>=d)
        {
                if (b>=d)
                {
                        ans=b+c;
                        ax=sx-1;
                        ay=sy;
                }
                else
                {
                        ans=c+d;
                        ax=sx;
                        ay=sy-1;
                }
        }

	printf("%lld\n",ans);
	printf("%lld %lld\n",ax,ay);
}



