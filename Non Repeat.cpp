#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	int count[26] = {};
	int n;
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
	{
		scanf("%s",&s);
		for(int i = 0;i<strlen(s);i++)
		{
			count[s[i]-'a']++;
		}
		for(int i = 0;i<strlen(s);i++)
		{
			if(count[s[i]-'a']==1)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}
