#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<stdint.h>
#include<assert.h>
#include "helpers.h"


uint64_t tirs=0,tirs_in=0;
double pi=0,t1;

int main(int argc,char * argv[]){
	double x,y;
	t1=tstamp();
	alarm(5);

	while(1){
		x=((double)rand())/(double)RAND_MAX;
		y=((double)rand())/(double)RAND_MAX;
		tirs ++;
		if (x*x+y*y<=1) tirs_in ++;
	}
}
