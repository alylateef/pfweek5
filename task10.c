#include <stdio.h> 

int main() {
	char color;char time;
	printf("enter the signal color(R-red Y-yellow G-green) \n");
	scanf(" %c",&color);
	printf("enter Y for yes if time is before 22:00 \nenter N for no");
	scanf(" %c",&time);
	if(color=='R'){
		if(time=='Y'){
			printf("stop and wait \n");
		}
		else{
			printf("Stop, but night caution allowed \n");
		}
		}
		
	else if(color =='Y'){
	 	printf("get ready \n");
	}
	else if(color =='G'){
		printf("GO \n");
	}
		
	
	else{
		printf("invalid singal color \n");
	}
	return 0;
}
