#include <stdio.h>
#include <stdlib.h>
#include <time.h> //pesquisar formas de aleatorizar
#include "stclaus.h"

int main(){
	hdr* ard;
	ard = create();
	int axc;
	//chamar kid vezes
	//pra cada chama o cosmedamn

	int cands;
	int kid;
	srand(time(NULL));

	cands = rand()%11;
	cands = 5;
	printf("cands: %d", cands);
	printf("kids nmb: ");
	scanf("%d", &kid);

	while(cands != 0 && kid != 0){
		axc = cands;
		cands = cosmedamn(ard, cands, kid);
			if(cands != axc){
				--kid;
			}
	}
	print(ard);
	return 0;
}