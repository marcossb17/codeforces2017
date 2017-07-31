#include <stdio.h>
#include <stdlib.h>
#include <time.h> //pesquisar formas de aleatorizar
#include "stclaus.h"

int main(){
	hdr* ard;
	ard = create();

	//chamar kid vezes
	//pra cada chama o cosmedamn

	int cands;
	int kid;
	srand(time(NULL));

	cands = rand()%11;
	printf("kids nmb: ");
	scanf("%d", &kid);

	while(cands != 0){
		cands = cosmedamn(ard, cands, kid);
	}
	print(ard);
	return 0;
}