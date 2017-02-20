#define LINETXT "==========\n"
#define OLOOPTXT "OL [%4.4d]\n"
#define OLOOP 3
#define ILOOP 4

#include <stdio.h>
void main() {
	int ii, jj;
	printf(LINETXT);
	for (ii=0; ii<OLOOP; ii++) {
		printf(OLOOPTXT, ii);
		for (jj=0; jj<ILOOP; jj++) {
			printf("	IL[%d]\n",jj);
		}
	printf(LINETXT);
	}
}
