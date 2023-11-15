/* calculates total amount of your clothes lost to lint in the laundry by weight
 * written 2023-11-15 12:56am
 */

#include <stdio.h>
int main(){
	float clothes;
	float lint;

	printf("laundry load weight(kg): ");
	if(!(scanf("%f", &clothes))){
		fprintf(stderr, "Input Format Error: incorrect format type, expected int or float\n");
		return -1;
	}

	printf("collected lint weight(g): ");
	if(!(scanf("%f", &lint))){
		fprintf(stderr, "Input Format Error: incorrect format type, expected int or float\n");
		return -1;
	}

	clothes *= 100; // convert to grams
	lint /= clothes; // make it into a ratio
	lint *= 100; // make into percentage 
	printf("%f%% of your clothes have been turned into lint\n", lint); 
}
