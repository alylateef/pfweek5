#include <stdio.h>
#include <stdlib.h>



int main() {
	int c1,c2,c3;int size,amount;int bill=0; int s_a=0;
	printf("welcome to our restraunt !\n");
	printf("enter 1 for Coffee Shop, 2 for BurgerHub, Ice 3 Cream Parlour.\n");
	scanf("%d",&c1);
	if (c1==2){
		printf("your order will be handled by burgerhub \n");
	}
	if (c1==3){
		printf("your order will be handled by Cream Parlour \n");
	}
	if (c1==1){
		
		printf("enter 1-small(300) \n2-medium(400) \n3-large(500)\n");
		scanf("%d",&size);
		if(size==1){
			s_a=300;
		}
		else if(size==2){
			s_a=400;
		}
		else if(size==3){
			s_a=500;
		}
		printf("You can get super economical combos \n 15 percent discount for 3 medium coffees \n 20 percent discount for 3 large coffees\n ");
		printf("how many do u want ?\n");
		scanf("%d",&amount);
		if (amount>1){
			printf("You can get super economical combos \n 15 percent discount for 3 or more medium coffees \n 20 percent discount for 3 or more large coffees\n ");
			if(amount>=3 && size==2){
				bill=(amount*s_a)*0.85;
				printf("u have got 15 percent discount\n");
			}
			else if(amount>=3 && size==3){
				bill=(amount*s_a)*0.80;
				printf("u have got 20 percent discount\n");
			}
			else{
				bill=(amount*s_a);
			}
			printf("enter your coffee type (1.Regular, 2.Cappuccino, 3.Latte).");
			
			printf("your total bill is : %d ",bill);
		}
	}
	
	return 0;
}
