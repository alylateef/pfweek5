#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	printf("enter the marks here :");
	scanf("%d %d %d",&a,&b,&c);
	(a>b && a>c)? printf("gratest marks : %d",a):
	(b>c)? printf("greatest marks : %d",b): printf("greatest marks :%d",c);
	
	return 0;
}
