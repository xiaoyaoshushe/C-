# include <stdio.h>
# include<stdlib.h>
int year(int y)
{
if((y%4==0)&&(y%100!=0)||y%400==0)//当是闰年时为366天当是平年时为365天
return 366;
else
return 365;
}
int main()
{
while(1)//加入循环时可以使用户进行重复操作
{
int y;
int i,j,sum=0;
int begin,week;//begin在函数中相当于是计数器的作用
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};//平年一年每个月的天数
printf("欢迎进入万年历程序:\n\n\n");
printf("_______________________\n");
printf("********         *\n");
printf("********        *\n");//程序介绍
printf("********  *\n");
printf("_______________________\n");
printf("请输入您需要查询的哪一年的万年历:\n");
scanf("%d",&y);
for(i=1;i<y;i++)
sum+=year(i);
week=(sum+1)%7;//表示该年1月1日为星期几
if(year(y)==366)//如果一年的天数为366天
days[1]=29;//则把二月份置为29天
printf("\n%d 年的万年历如下:\n\n",y);
for(i=0;i<12;i++)//输出1到12月的日历
{
printf("     %dmonth       \n",i+1);
printf("  7  1  2  3  4  5  6 \n");
printf("=======================\n");
begin=1;
for(j=0;j<week;j++)
printf("   ");  //每月第一天为星期几(这一天前面的星期为空格)
while(begin<=days[i])//如果计数器小于这个月的天数的话就执行循环
{
printf("%3d",begin); //打印计数器
begin++;
week=(week+1)%7;//可以使每天的星期移动
if(week%7==0)
printf("\n");//每过一周执行换行

}
printf("\n\n");
}
printf("按1键退出查询,按其他数字继续查询\n\n");
int a;
scanf("%d",&a);
if(a==1) break;
system("CLS");//清屏函数
}
return 0;
}
