#include <pthread.h>
#include <stdio.h>
#include <stdint.h>

static void* fibonacci_thread( void* arg )
 {

int n = (intptr_t)arg;
int fib;

pthread_t th1, th2;

void* pvalue; /*Holds the value*/

switch (n) {

case 0: return (void*)0;

case 1: /* Fallthru, Fib(1)=Fib(2)=1 */

case 2: return (void*)1;

default: break;

}



pthread_create(&th1, NULL, fibonacci_thread, (void*)(intptr_t)(n-1));



pthread_create( &th2, NULL, fibonacci_thread, (void*)(intptr_t)(n-2));



pthread_join(th1, &pvalue);



fib = (intptr_t)pvalue;



pthread_join(th2, &pvalue);



fib += (intptr_t)pvalue;



return (void*)(intptr_t)fib;

}



int main(int argc, char *argv[])

{

int i;

printf("Febonacci series upto %d term:->>\n ",(atoi(argv[1])));

for(i=0;i<(atoi(argv[1]));i++)

printf ("%d ",(intptr_t)fibonacci_thread((void*)(intptr_t)i));

printf("\n");

return 0;

}

