#include <stdio.h>
#include <stdlib.h>
#include "stclaus.h"

hdr* create(){
	
	hdr* ard = (hdr*) malloc(sizeof(hdr));

	ard->first = NULL;
	ard->last = NULL;

	return ard;

}

void lblist(hdr* ard){

	blk* adl = ard->first;

	while(adl != NULL){
		ard->first = ard->first->prx;
		free(adl);
		adl = ard->first;
	}

	free(ard);
}

void insert(hdr* ard, int knd){

	blk* and = (blk*) malloc(sizeof(blk)); //teste pra alocacao fail

		if(ard->first == NULL){
			
			and->knd = knd;
			and->prx = NULL;

			ard->first = and;
			ard->last = and;

		}

		else{
			
			ard->last->prx = and;
			ard->last = and;
			ard->last->knd = knd;
			and->prx = NULL;
		}

	return;
}

int cosmedamn(hdr* ard, int cands, int kid){

	int i = 0, mind = 0, apl = 0, docesapl;
	blk* axl;

		for(i = 0, mind = 0; i <= kid-1; ++i){
			mind+=i;
		}
		
		printf("min. distinto: %d\n\n", mind);
		docesapl = cands-mind;
		apl = 1+rand()%docesapl;
	
		printf("doces aplicados: %d\n", apl);

		if(kid == 1){
			insert(ard, cands);
			return 0;
		}

			if(ard->first == NULL){
				insert(ard, apl);
			}

			else{
				for(axl = ard->first; axl != NULL; axl = axl->prx){
					if(axl->knd == apl){
						return cands;				
					}
				}
				insert(ard, apl);
			}
			cands-=apl;
	//10 4 3 2 1 - min. distinto - V
		//for de kid-1 ate 1 e vai contando -- somando //caso nao tenha o suficiente encerra o programa --- pode fazer de primeira
//			usa a formula da pa e se for menor que o total nao rola (levando em conta que se trata do minimo distinto, alias, se tratar ja tem uma funçao pronta e unica [pq senao da igual em algum momento])
			//subtrai do total - V
			//tira um rand ate isso - V
		  //testa com os anteriores -- obviamente a primeira passada nao precisa - V
		//registra - V
		//retorna - V
	//temos um novo cont - V

	//testar se tem doces o suficiente
		//colocar pra numero perfeito - num. doces = min.distinto
	//se for o ultimo dropa td

	//todos distintos
	//faixa de valores
	//compara com os anteriores
	//permuta no final - usando for
	//ou melhor, printa um valor que engloba todas as soluções possiveis

	
	return cands;
}


int search(hdr* ard, int hnt){

}

void print(hdr* ard){

	blk* adl;

	for(adl = ard->first; adl != NULL; adl = adl->prx){
		if(adl->prx == NULL){
			printf("%d",adl->knd);
			break;		
			}
		printf("%d ->",adl->knd);
	}
}