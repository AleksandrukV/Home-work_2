#include"Library.h"

int CheckStr(char str[],int size)
{
	int letters = 0;
	int numbers = 0;
	for (int i = 0; i < size; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
		{
			letters++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			numbers++;
		}
		else
		{
			letters++;
			numbers++;
		}
	}
	if (letters == size)
		return 0;
	else if (numbers == size)
		return 1;
	else
		return 2;
}

void Distribution(FILE* f, FILE* f2, FILE* f3)
{
	char c = fgetc(f);
	char tempstr[20];
	int temp;
	while (c != EOF)
	{
		fseek(f, -1, SEEK_CUR);
		fgets(tempstr, 20, f);
		temp = CheckStr(tempstr, strlen(tempstr));
		if (temp == 0)
			fprintf(f2, "%s", tempstr);
		else if (temp == 1)
			fprintf(f3, "%s", tempstr);
		c = fgetc(f);
	}
}

int main()
{
	FILE* f = fopen("d:\\temp\\file.txt", "r");
	FILE* f2 = fopen("d:\\temp\\file2.txt", "w");
	FILE* f3 = fopen("d:\\temp\\file3.txt", "w");
	Distribution(f, f2, f3);


	fclose(f);
	fclose(f2);
	fclose(f3);
}