#include<stdio.h>
int main()
{

int marks;

printf("Enter the student's Mark:");
scanf("%d",&marks);

if(marks>=85 && marks<=100)
	{
		printf("Your grade is: GRADE A");
	}
	
else if(marks>=70)
	{
			
		printf("Your grade is: GRADE B");
	}
	
	
else if(marks>=55)
	{
		printf("Your grade is: GRADE C");
	}
	
else if(marks>=40)
	{
		printf("Your grade is: GRADE D");
	}
	
else
		printf("Your grade is: GRADE F");
		
	
return 0;
	
}		
	

