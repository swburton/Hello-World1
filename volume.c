// This program calculates the volume of a space
// 03.11.2013

# include <stdio.h>

int main()
{
	float height =0.00;
	float length = 0.00;
	float width = 0.00;
		
	printf("Enter Height: ");
	scanf("%f", &height);

	printf("Enter Length: ");
	scanf("%f", &length);


	printf("Enter Width: ");
	scanf("%f", &width);

	printf("Height = %f\nLength = %f\nWidth = %f\n",
	height,length, width);

	printf("The volume is %f units.\n",
		height * length * width);	

	return 0;
}

