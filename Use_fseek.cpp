#include <stdio.h>
int main ()
{
	int c;
    FILE *fp;
	fp = fopen("file.txt","w+");
fputs("This is tutorialspoint.com", fp);
fseek( fp, 7, SEEK_SET );
fputs(" C Programming Language", fp);
fclose(fp);
	fp = fopen("file.txt","r");
	printf("Content of the file:-\n");
while(1)
	{
        c = fgetc(fp);
if( feof(fp) )
		{
            break;
        }
printf("%c", c); 
    }
fclose(fp);
return(0);
}
