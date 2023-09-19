
#include <stdio.h>
typedef  unsigned char uint_8;
typedef   char int_8;


typedef enum enm_sum_error {
	SUM_OK,
	SUM_NOK
}enm_sum_error;
enm_sum_error sum (uint_8*a , uint_8*b , uint_8* c){
	*c =  *a + *b;
	return SUM_OK;
}


int main(void) {
	uint_8 a = 'A', b = '1', c =0;
	enm_sum_error error = sum(&a, &b,&c);
	printf("%d \n", c);
	printf("%d ", error);
	return 0;
}