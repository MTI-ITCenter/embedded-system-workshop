
#include <stdio.h>


#define A_VALUE		10
#define B_VALUE		15

#define SUM_OPR	



int main(void) {
	int c;
#ifdef SUM_OPR
	 c = A_VALUE + B_VALUE;
#elif MIN_OPR
	 c = A_VALUE - B_VALUE;
#else
#error "UNDEFINE OPERATOR"
#endif
	//a = b + c;
	printf("%d ", c);
	return 0;
}