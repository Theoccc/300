#include <stdio.h>
#include "shared_lib/shared.h"

main(){
sem_t sem1;
sem1 = sem_init( 0212 );
int *common,i, k, a;
 common = (int *)getmem(0212);
for (i=1;i<=1000000;i++){
PS(sem1);
a=*common;
a=a-1;
*common = a;
VS(sem1);
for (k=0;k<1000;k++);
}
printf("Dec process ended.\n");
}
