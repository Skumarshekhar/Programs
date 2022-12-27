#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void admission();
int main()
{
printf("Checking the eligibility for admission of a student\n");
admission();
}
void admission()
{
	int pmarks, cmarks, mmarks, tmarks;
	printf("Enter the Marks in Physics\n");
	scanf("%d",&pmarks);
	printf("Enter the Marks of Chemistry\n");
	scanf("%d",&cmarks);
	printf("Enter the Marks of Math\n");
	scanf("%d",&mmarks);
    tmarks=pmarks+cmarks+mmarks;
    system("cls");
	if (tmarks>=99){
	printf("The student is eligible for Admission");
    }
	else{
	printf("The student is not eligible for Admission");
    }
}
