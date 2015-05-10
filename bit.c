#include <stdio.h>
#include "bit.h"

int getbit(int x, int i) {
	return (x >> i) & 1;
}

int getnum(int x, int i, int j) {
	int k,z;
	k = (sizeof(x) << 3)-1-j;
	x = x << k >> k >> i;
	for(z=31;z>(j-i);z--) x = bitoff(x,z);
	return x;
}

int biton(int x, int i) {
	return x | (1 << i);
}

int bitoff(int x, int i) {
	return ~(1 << i) & x;
}

int ispowtwo(int x) {
	return x & (x-1);
}

int isbitset(int x, int n) {
	return (x & (1 << n));
}

void bswap(int *a, int *b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

int neg(int x) {
	return (~x + 1);
	/* x = (x ^ -1) +1 is ok too*/
}

int babs(int x) {
	return (x ^ (x >> 31)) - (x>>31);
}

int isEven(int x) {
	return (x & 1)==0;
}

int togglebit(int x, int n) {
	return x ^ (1 << n);
}

int offRMostOne(int x) {
	return x & (x-1);
}

int FindRMostOne(int x) {
	x = x & (neg(x));
	int i;
	for(i=0;i<32;i++) {
		if(getbit(x,i)) return i;
	} 
}

int TRMostOneb(int x) {
	return x | (x-1);
}

int FindRMostZero(int x) {
	x = ~x & (x+1);
	int i;
	for(i=0;i<32;i++) {
		if(getbit(x,i)) return i;
	} 
}

int onRMostZero(int x) {
	return x | (x+1);
}
