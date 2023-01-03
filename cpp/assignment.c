#include <stdio.h>

int main()
{
 FILE *fp,*fp1;
 int ch;

 fp=fopen("readfile.txt","r");
 fp1=fopen("writefile.txt","w+");
 
 if(fp == NULL)
 {
  printf("\nThe file was not found\n");
 }

 while((ch = fgetc(fp)) != EOF)
  {
   if(ch>96 && ch<122)
   {
   ch++;
   fprintf(fp1,"\nThe next character is %c\n", (ch));
   }
   else if(ch ==122)
   {
   fprintf(fp1,"\nThe next character is a\n");
   }
  }

 fclose(fp1);
 fclose(fp);
 
}