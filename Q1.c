#include<stdio.h>
main(){
	
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	
	int a[n],i;
	printf("Enter array's elements:\n");
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	int *ptr;
	ptr=&a;
	int square;
	
	printf("Square of elements of an array are:");
	for(i=0;i<n;i++){
		square=*(ptr+i)* *(ptr+i);
		printf("%d ",square);
	
	}
}
