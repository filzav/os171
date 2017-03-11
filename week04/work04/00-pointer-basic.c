#include <stdio.h>

char varchar0='a';
char varchar1='b';
char varchar2='c';
char varchar3='d';

char* ptrchar0=&varchar0;
char* ptrchar1=&varchar1;
char* ptrchar2=&varchar2;
char* ptrchar3=&varchar3;

void main(void) {
	printf("varchar0: val=%c, adr=%p\n", varchar0, & varchar0);
	printf("varchar1: val=%c, adr=%p\n", varchar1, & varchar1);
	printf("varchar2: val=%c, adr=%p\n", varchar2, & varchar2);
	printf("varchar3: val=%c, adr=%p\n", varchar3, & varchar3);

	printf("ptrchar0: pts=%c, val=%p, adr=%p\n", *ptrchar0, ptrchar0, &ptrchar0);
	printf("ptrchar1: pts=%c, val=%p, adr=%p\n", *ptrchar1, ptrchar1, &ptrchar1);
	printf("ptrchar2: pts=%c, val=%p, adr=%p\n", *ptrchar2, ptrchar2, &ptrchar2);
	printf("ptrchar3: pts=%c, val=%p, adr=%p\n", *ptrchar3, ptrchar3, &ptrchar3);

	char** ptrptr0=&ptrchar0;
	char** ptrptr1=&ptrchar1;
	char** ptrptr2=&ptrchar2;
	char** ptrptr3=&ptrchar3;
	
	printf("ptrptr0: ppt=%c, pts=%p, val=%p, adr=%p\n", **ptrptr0, *ptrptr0, ptrptr0, &ptrptr0);
	printf("ptrptr1: ppt=%c, pts=%p, val=%p, adr=%p\n", **ptrptr1, *ptrptr1, ptrptr1, &ptrptr1);
	printf("ptrptr2: ppt=%c, pts=%p, val=%p, adr=%p\n", **ptrptr2, *ptrptr2, ptrptr2, &ptrptr2);
	printf("ptrptr3: ppt=%c, pts=%p, val=%p, adr=%p\n", **ptrptr3, *ptrptr3, ptrptr3, &ptrptr3);

	char*** ultimate_pointer0=&ptrptr0;
	char*** ultimate_pointer1=&ptrptr1;
	char*** ultimate_pointer2=&ptrptr2;
	char*** ultimate_pointer3=&ptrptr3;
	
	printf("ultimate_pointer0: val=%p, adr=%p, pts=%p, ppt=%p, pnt=%c\n", ultimate_pointer0, &ultimate_pointer0, *ultimate_pointer0, **ultimate_pointer0, ***ultimate_pointer0);
	printf("ultimate_pointer1: val=%p, adr=%p, pts=%p, ppt=%p, pnt=%c\n", ultimate_pointer1, &ultimate_pointer1, *ultimate_pointer1, **ultimate_pointer1, ***ultimate_pointer1);
	printf("ultimate_pointer2: val=%p, adr=%p, pts=%p, ppt=%p, pnt=%c\n", ultimate_pointer2, &ultimate_pointer2, *ultimate_pointer2, **ultimate_pointer2, ***ultimate_pointer2);
	printf("ultimate_pointer3: val=%p, adr=%p, pts=%p, ppt=%p, pnt=%c\n", ultimate_pointer3, &ultimate_pointer3, *ultimate_pointer3, **ultimate_pointer3, ***ultimate_pointer3);
}
