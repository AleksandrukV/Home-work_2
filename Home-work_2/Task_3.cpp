//#include"Library.h"
//
//void CopyWithChangeOfCase(FILE* f, FILE* f2)
//{
//	char c = fgetc(f);
//	while (c != EOF)
//	{
//		if (c >= 'A' && c <= 'Z')
//			fprintf(f2, "%c", c + 32);
//		else 
//			fprintf(f2, "%c", c);
//		c = fgetc(f);
//	}
//}
//
//int main()
//{
//	FILE* f = fopen("d:\\temp\\file.txt", "r");
//	FILE* f2 = fopen("d:\\temp\\file2.txt", "w");
//	CopyWithChangeOfCase(f, f2);
//	fclose(f);
//	fclose(f2);
//}