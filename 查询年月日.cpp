# include <stdio.h>
# include<stdlib.h>
int year(int y)
{
if((y%4==0)&&(y%100!=0)||y%400==0)//��������ʱΪ366�쵱��ƽ��ʱΪ365��
return 366;
else
return 365;
}
int main()
{
while(1)//����ѭ��ʱ����ʹ�û������ظ�����
{
int y;
int i,j,sum=0;
int begin,week;//begin�ں������൱���Ǽ�����������
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};//ƽ��һ��ÿ���µ�����
printf("��ӭ��������������:\n\n\n");
printf("_______________________\n");
printf("********         *\n");
printf("********        *\n");//�������
printf("********  *\n");
printf("_______________________\n");
printf("����������Ҫ��ѯ����һ���������:\n");
scanf("%d",&y);
for(i=1;i<y;i++)
sum+=year(i);
week=(sum+1)%7;//��ʾ����1��1��Ϊ���ڼ�
if(year(y)==366)//���һ�������Ϊ366��
days[1]=29;//��Ѷ��·���Ϊ29��
printf("\n%d �������������:\n\n",y);
for(i=0;i<12;i++)//���1��12�µ�����
{
printf("     %dmonth       \n",i+1);
printf("  7  1  2  3  4  5  6 \n");
printf("=======================\n");
begin=1;
for(j=0;j<week;j++)
printf("   ");  //ÿ�µ�һ��Ϊ���ڼ�(��һ��ǰ�������Ϊ�ո�)
while(begin<=days[i])//���������С������µ������Ļ���ִ��ѭ��
{
printf("%3d",begin); //��ӡ������
begin++;
week=(week+1)%7;//����ʹÿ��������ƶ�
if(week%7==0)
printf("\n");//ÿ��һ��ִ�л���

}
printf("\n\n");
}
printf("��1���˳���ѯ,���������ּ�����ѯ\n\n");
int a;
scanf("%d",&a);
if(a==1) break;
system("CLS");//��������
}
return 0;
}
