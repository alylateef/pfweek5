#include <stdio.h>
#include <stdlib.h>


int main() {
	int w_a; int balance=15400 ;int pincode;int n_balance;
	printf("enter your pincode \n");
	scanf("%d",&pincode);
	if(pincode==9999){
		printf("enter your withdrawl amount \n");
		scanf("%d",&w_a);
		if(w_a<=balance){
			n_balance=balance - w_a;
			printf("your remaining balance :%d\n",n_balance);
		}
		else{
			printf("insufficient balance\n");
		}
	}
	else{
		printf("invalid pincode\n");
	}
	return 0;
}
