// https://stackoverflow.com/questions/11081032/how-do-i-check-the-memory-being-used-by-my-c-code
// https://www.hackerearth.com/practice/notes/memory-layout-of-c-program/
//https://github.com/PabloVieira/TCS-hf-risc/blob/7fd415efa34263e4142bbbc7ddd2d9fffc674e0c/software/include/hf-risc.h
// TCS-hf-risc/software/include/hf-risc.h
//https://stackoverflow.com/questions/4462915/find-the-exact-address-of-variable-buf
#include <hf-risc.h>

void main(void){
	printf("helll world!\n");
	int a = 42;
	int b = 8;
	int c = a+b;
	uint64_t *ptr;
	//ptr = 0x40000520;
	*ptr = 0;
	printf("%d+%d=%d \n",a,b,c);
	printf("&prt:%0x\n", &ptr); // endereco de p
	int i;
	for(i=0;i<1000;i++){
		printf("i:%d *prt:%x\n", i, *(&ptr+0x4fffffe8+i)); 
		if(*(&ptr+0x4fffffe8+i) == 0x3200693){
			printf("ok\n");
			break;
		}
	}

	printf("i:%d *prt:%x\n", i, *(&ptr+0x4fffffe8+i));
	*(&ptr+0x4fffffe8+i) = 0x3200793;

	printf("i:%d *prt:%x\n", i, *(&ptr+0x4fffffe8+i));
	printf("%d+%d=%d \n",a,b,c);


}

