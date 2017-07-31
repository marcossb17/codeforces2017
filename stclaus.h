#include <stdio.h>

typedef struct block{
	struct block* prx;
	int knd;
}blk;

typedef struct list{
	struct block* first;
	struct block* last;
}hdr;

hdr* create();

void lblist(hdr* ard);

void insert(hdr* ard, int knd);

int cosmedamn(hdr* ard, int cands, int kid);

void print(hdr* ard);

int search(hdr* ard , int hnt);