/** X86系统都是低端在前。*/
#include <stdio.h>
#include <stdlib.h>
typedef union{
	int i;
	char ch[sizeof(int)];
}Chi;

int main(int argc, char *argv[]) {
	Chi chi;
	int i;
	chi.i = 1234;
	for (i = 0; i < sizeof(int); i++){
		printf("%02hhX", chi.ch[i]);
	}
	printf("\n");
	return 0;
}
