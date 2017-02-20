/*
 * Name: Filza Valorisantyo Hudiyono
 * NPM: 1406577215
 * Class: B
 * Comment: C Exercise
 */

#define LINETXT "===========\n"
#define OLOOPTXT "OL [%5.5d]\n"
#define LOOP 10
#define OLOOP 4

#include <stdio.h>

void main() {
	int input,jj;
	for (input=0; input<LOOP; input++) {
		printf(OLOOPTXT, input);
		for (jj=0; jj<OLOOP; jj++) {
			printf("	IL[%d]\n",jj);
		}
	printf(LINETXT);
	}
}
