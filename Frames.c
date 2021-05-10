#include <stdio.h>
int main()
{
	int n;
	printf("enter no of frames\n");
	scanf("%d",&n);
	long int fr[n];
	int i;
	for(i=0;i<n;i++)
	scanf("%ld",&fr[i]);
	int j=0;
int x,y;
int b=0;
	while(j<n){
		x=fr[j];
		while(x>0){
			x=x/10;
			b++;
		}
		printf("size of frame=%d\n",b);
		b=0;
		j++;
	}
	printf("frames received are:\n");
	for(i=0;i<n;i++)
	printf("%ld\n",fr[i]);
	return 0;
}
