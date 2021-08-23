#include <stdio.h>
int main ()
{
   char str[]="This is C";
   FILE *fp;
   int ch;
fp = fopen( "file.txt" , "w" );
fwrite(str , 1 , sizeof(str) , fp );
fclose(fp);
fp = fopen( "file.txt" , "r" );
printf("File contents:-\n");
while(1)
   {
	ch = fgetc(fp);
	if( feof(fp) )
	{
	break ;
	}
	printf("%c", ch);
   }
   rewind(fp);
printf("\n");
while(1)
   {
		ch = fgetc(fp);
	if( feof(fp) )
		{
	break ;
	}
	printf("%c", ch);
	}
fclose(fp);
	return(0);
}
