#include<stdio.h>
main(){
	int x,y,z;
	
	printf("Enter the value of X:");
	scanf("%d",&x);
		
	printf("Enter the value of Y:");
	scanf("%d",&y);
	
	int *a,*b;
	a=&x;
	b=&y;

	printf("Before swapping:\n");
	printf("X:%d\n",*a);
	printf("Y:%d\n",*b);
	
	z=a;
	a=b;
	b=z;
	
	printf("After swapping:\n");
	printf("X:%d\n",*a);
	printf("Y:%d\n",*b);
}
