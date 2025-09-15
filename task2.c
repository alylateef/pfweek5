#include <stdio.h>
#include <stdlib.h> 


int main() {
	int n;
	printf("enter your number here :");
	scanf("%d",&n);
	(n%2==0 )? printf("%d is even \n",n) :
	 (n%3==0) ? printf("%d is divisible by 3 \n",n) :
	 printf("odd and not divisible by 3 \n");
	return 0;
}
