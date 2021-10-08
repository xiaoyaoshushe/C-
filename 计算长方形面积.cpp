#include<stdio.h>
int main (void)
{
	float a,b,s;
	printf("输入长方形的长和宽，求长方形的面积\n");
	printf("输入长：");
	scanf("%f",&a);
	printf("输入宽: ");
	scanf("%f",&b);
    s=a*b;
    printf("此长方形的面积为: ");
    printf("%.4f",s);
	return 0; 
 } 
