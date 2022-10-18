#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, number;
	printf("Enter a number : ");
	scanf("%d", &number);
		for(i=0;i<=number;i++){
			if(i%2==0){
				printf("%d\n", i);
			}
		}

	return EXIT_SUCCESS;
}
