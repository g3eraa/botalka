#include <stdio.h>
#include <math.h>
int find(int a);
int main(void){
	int c;
	int result;	
	if (scanf("%d", &c)!=1 ||   c < 0){
		c = c *(-1);
		return 0;}
	if (c>=1 && c<=9){
		printf("%d",c);
		return 0;}
	result = find(c);
	printf("%d", result);
}
int find(int a){
	int max = 0;
	while(a>0){
		int digit = a %10;
		if (digit > max){
			max = digit;
		}
		a = a/10;}
	return max;
}


