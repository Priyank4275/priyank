#include<stdio.h>
main(){
	int num;
	printf("Enter your Number :");
	scanf("%d",&num);
	if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
        }
        else
        	printf("You entered a positive number.");

    return 0;
}
