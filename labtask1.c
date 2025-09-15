#include <stdio.h>
#include <stdlib.h>
int main() {
	char a,b,c;
	int v=0;int con=0;
	printf("enter 3 characters (a-z) \n");
	scanf("%c %c %c",&a,&b,&c);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
		v++;
	}else{
		con++;
	}
	if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'){
		v++;
	}else{
		con++;
	}
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
		v++;
	}else{
		con++;
	}
	printf("number of vowels : %d\nnumber of consonants : %d",v,con);
	return 0;
}
