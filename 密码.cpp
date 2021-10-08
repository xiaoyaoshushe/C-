#include "conio.h" 
#include "string.h"
#include "stdio.h"
int error()
{window(12,10,68,10);
textbackground(15);
textcolor(132);
clrscr();
cprintf("file or system error! you can`t enter the system!!!");
while(1); /*诺有错误不能通过程序*/ 
}
void look()
{FILE *fauto,*fbak;
char *pass="c:\\windows\\password.exe";/*本程序的位置*/
char a[25],ch;
char *au="autoexec.bat",*bname="hecfback.^^^"; /*bname 是 auto exec.bat的备份*/
setdisk(2); /*set currently disk c:*/
chdir("\\"); /*set currently directory \*/
fauto=fopen(au,"r+");
if (fauto==NULL)
{fauto=fopen(au,"w+");
if (fauto==NULL) error();}
fread(a,23,1,fauto); /*读取autoexec.bat 前23各字符*/
a[23]='\0' ;
if (strcmp(a,pass)==0) /*诺读取的和pass指针一样就关闭文件，不然就添加*/
fclose(fauto);
else
{fnak=fopen(bname,"w+");
if (fbak==NULL) error();
fwrite(pass,23,1,fbak);
fputc('\n',fbak);
rewind(fauto);
while(!feof(fauto))
{ch=fgetc(fauto);
fputc(ch,fbak);}
rewind(fauto);
rewind(fbak);
while(!feof(fbak))
{ch=fgetc(fbak);
fputc(ch,fauto);}
fclose(fauto);
fclose(fbak)
remove(bname); /*del bname file*/
}
}
void pass()
{char *password="88888888";
char input[60];
int n;
while(1)
{window(1,1,80,25);
textbackground(0);
textcolor(15);
clrscr();
n=0;
window(20,12,60,12);
textbackground(1);
textcolor(15);
clrscr();
cprintf("paswwword;");
while(1)
{input[n]=getch();
if(n>58){putchar(7); break;} /*糯字符多余个字符就结束本次输入*/ 
if(input[n]==13) break;
if (input[n]>=32 && input[n]<=122) /*诺字符是数字或字母才算数*/
{putchar('*');
 n++;}
 if (input[n]==8) /*delet*/
 if (n>0)
  {cprintf("\b \b");
  input[n]='\0';
  n--;}
}
input[n]='\0';
if (strcmp(password,input)==0)
break;
else
{putchar(7);
window(30,14,50,14);
textbachground(15);
textcolor(132);
clrscr();
cprintf("password error!");
getch();}
}
}
main()
{look();
pass();
}
