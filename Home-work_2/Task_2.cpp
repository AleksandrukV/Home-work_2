#include"Library.h"

void File_Conc(FILE* f1, FILE* f2, FILE* f3)
{
	char c = '0';
	char tempstr[30];
	while (c != EOF)
	{
		fgets(tempstr, 30, f1);
		fprintf(f3, "%s", tempstr);
		c = fgetc(f1);
		fseek(f1, -1, SEEK_CUR);
	}
	fprintf(f3, "%s", "\n");
	c = '0';
	while (c != EOF)
	{
		fgets(tempstr, 30, f2);
		fprintf(f3, "%s", tempstr);
		c = fgetc(f2);
		fseek(f2, -1, SEEK_CUR);
	}
}

int main()
{
	char str[30];
	cout << "Specify the path to the first file from which the information will be read:" << endl;
	cin.getline(str, 30);
	char str2[30];
	cout << "Specify the path to the second file from which the information will be read:" << endl;
	cin.getline(str2, 30);
	cout << "Specify the path to the file in which the read information will be written:" << endl;
	char str3[30];
	cin.getline(str3, 30);
	FILE* f1 = fopen(str, "r");
	FILE* f2 = fopen(str2, "r");
	FILE* f3 = fopen(str3, "w");
	File_Conc(f1, f2, f3);

	fclose(f1);
	fclose(f2);
	fclose(f3);
}