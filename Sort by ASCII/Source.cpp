#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int strlen(char str[]);

int main()
{
	char str[1000], temp;
	char* p = str;
	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++)
	{
		for (int j = i + 1; j < strlen(str); j++)
		{
			if (*(p + i) > * (p + j))
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;

			}
		}
	}
	printf("%s", str);


}



int strlen(char str[])
{
	int j = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		j += 1;
	}
	return j;
}