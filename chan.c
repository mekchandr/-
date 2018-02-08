#include <stdio.h> 
void main()
{
int Y;
scanf("%d", &Y);
if ((Y% 400) == 0)
printf("Yes");
else if ((Y % 100) == 0)
printf("No");
else if ((Y % 4) == 0)
printf("Yes");
else
printf("No");
}
