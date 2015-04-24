#include<stdio.h>
#include<string.h>
void main()
{
	char name_a[40],name_b[40],name_c[40];
	printf("What is userA's name? ");
	scanf("%s", name_a);
	printf("What is userB's name? ");
	scanf("%s", name_b);
     printf("What is userC's name? ");
	scanf("%s", name_c);
	printf("UserA_Name: %s\nUserB_Name: %s\nUserC_Name: %s", name_a, name_b, name_c);
     
}
