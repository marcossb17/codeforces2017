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
			and->prx = NULL;
		}

	return;
}

int cosmedamn(hdr* ard, int cands, int kid){

	int i, subt, ssubt;
	blk* axl;
		for(i = 0, subt = 0; i <= kid-1; i++)
			subt+=i;
		
		printf("subt: %d\n\n", subt);
		
		ssubt = 1+rand()%(cands-subt);
	
		printf("ssubt: %d", ssubt);

			if(ard->first == NULL){
				insert(ard, ssubt);
			}

			else{
				for(axl = ard->first; axl != NULL; axl = axl->prx){
					if(axl->knd == ssubt){
						return ssubt;					
					}
				}
				insert(ard, ssubt);
			}

	//10 4 3 2 1 - min. distinto - V
		//for de kid-1 ate 1 e vai contando -- somando //caso nao tenha o suficiente encerra o programa --- pode fazer de primeira
//			usa a formula da pa e se for menor que o total nao rola (levando em conta que se trata do minimo distinto, alias, se tratar ja tem uma funçao pronta e unica [pq senao da igual em algum momento])
			//subtrai do total - V
			//tira um rand ate isso - V
		  //testa com os anteriores -- obviamente a primeira passada nao precisa - V
		//registra - V
		//retorna - V
	//temos um novo cont - V

	//todos distintos
	//faixa de valores
	//compara com os anteriores
	//permuta no final - usando for
	//ou melhor, printa um valor que engloba todas as soluções possiveis

	
	return ssubt;
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