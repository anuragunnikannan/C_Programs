#include <stdio.h>
#include <string.h>
int checkbalanced(char a[])
{
	int flag = 0;
	int l = strlen(a);
	int i;
	for(i = 0;i<l/2;i++)
	{
		if(a[i]=='{' && a[l-i-1]=='}')
		{
			flag = 1;
		}
		else if(a[i]=='[' && a[l-i-1]==']')
		{
			flag = 1;
		}
		else if(a[i]=='(' && a[l-i-1]==')')
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int main()
{
	int n;
	printf("Enter number of lines: ");
	scanf("%d",&n);
	char s[n][1024];
	int i;
	for(i = 0;i<n;i++)
	{	
		int j = 0;
		do
		{
			printf("Enter brackets for line %d: \n", (i+1));
			scanf("%s",&s[i]);
		}while(s[i][j]=='\0');
	}
	for(i = 0;i<n;i++)
	{
		int r = checkbalanced(s[i]);
		if(r==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
