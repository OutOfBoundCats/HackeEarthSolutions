#include <stdio.h>
 
int main(void) {
int n,i,q,t,a[1000000],qu;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&q);
	a[q]++;
}
scanf("%d",&qu);
while(qu--)
{
	scanf("%d",&t);
	if(a[t]>0)
	printf("%d\n",a[t]);
	else
	printf("NOT PRESENT\n");
	
}
 
 
	return 0;
}