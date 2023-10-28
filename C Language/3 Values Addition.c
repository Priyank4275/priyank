#include <stdio.h>
main() {

    int num1, num2, num3, d;

    printf("Enter one numbers: ");
    scanf("%d", & num1);
    
	printf("Enter second numbers: ");
    scanf("%d", & num2);
    
    printf("Enter third numbers: ");
    scanf("%d", & num3);
    
    d = num1 + num2 + num3;

    printf("Sum of the three numbers is: %d", d);

    return 0;

}
