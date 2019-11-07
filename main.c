#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	int i;
	int grade[5];
	int *ptr=grade;
	int total;
	
	
	for(i=0;i<5;i++)
	{
		printf("grade[%i]=", i);
		scanf("%d", &grade[i]);
	}
	
	for(i=0;i<5;i++)
	{
	   printf("grade[%d] = %d\n", i, *(ptr+i));
	   total += *(ptr+i);
}
    
    
	printf("average : %d", total/5);	
	
	    
	return 0;
}

