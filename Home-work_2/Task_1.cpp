//#include"Library.h"
//
//char** StringArr(int size)
//{
//	char** strarr = new char* [size];
//	return strarr;
//}
//
//
//
//char* String(int size)
//{
//	char* str = new char[size];
//	return str;
//}
//
//char** CopyStrArr(char** strarr, char* str, int size)
//{
//	char** newstrarr = StringArr(size);
//	for (int i = 0; i < size - 1; i++)
//	{
//		newstrarr[i] = strarr[i];
//	}
//	delete[] strarr;
//	return newstrarr;
//}
//
//void DeleteStrarr(char** strarr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		delete[] strarr[i];
//	}
//	delete[] strarr;
//}
//
//char** CheckFile(char** strarr, FILE* f, int& size)
//{
//	char c = '0';
//	int count = 0;
//	while (c != EOF)
//	{
//		char* str = String(20);
//		fgets(str, 20, f);
//		strarr = CopyStrArr(strarr, str, size++);
//		strarr[count] = str;
//		c = fgetc(f);
//		fseek(f, -1, SEEK_CUR);
//		count++;
//	}
//	size--;
//	return strarr;
//}
//
//int RepetCount(char* str, FILE* f, int size)
//{
//	fseek(f, 0, SEEK_SET);
//	int count = 0;
//	char tempstr[20];
//	for (int i = 0; i < size; i++)
//	{
//		fgets(tempstr, 20, f);
//		if (strcmp(str, tempstr) == 0)
//			count++;
//	}
//	return count;
//}
//
//int* CreateIntArr(int size)
//{
//	int* arr = new int[size];
//	return arr;
//}
//
//int MaxInArr(int* arr, int size)
//{
//	int temp = arr[0];
//	int index = 1;
//	for (int i = 0; i < size; i++)
//	{
//		if (temp < arr[i])
//		{
//			temp = arr[i];
//			index = i + 1;
//		}
//	}
//	return index;
//}
//
//void DeleteArr(int* arr)
//{
//	delete[] arr;
//}
//
//int main()
//{
//	FILE* f = fopen("d:\\temp\\file.txt", "r");
//	int size = 1;
//	char** strarr = StringArr(size);
//	strarr = CheckFile(strarr, f, size);
//	int* arr = CreateIntArr(size);
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = RepetCount(strarr[i], f, size);
//	}
//	cout << "Row " << MaxInArr(arr, size) << " has the most repetitions." << endl;
//	DeleteArr(arr);
//	DeleteStrarr(strarr, size);
//	fclose(f);
//}