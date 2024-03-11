//#include <iostream>
//#include <string.h>
//#include <string>
//using namespace std;
//int countchar(char a[]);
////int IndexOfSubstring(char a[], string substring);
//void Tokenization(char a[]);
//int main()
//{
//	char str[100];
//	string substring;
//	cout << " Enter the string: " << endl;
//	cin.getline(str, 100);
//	countchar(str);
//	cout << " The number of characters in string is: " << countchar(str) << endl;
//	/*cout << " Enter the substring : " << endl;
//	getline(cin, substring);*/
//	/*IndexOfSubstring(str, substring);
//	cout << " The substring starting index is: " << IndexOfSubstring(str, substring) << endl;*/
//	Tokenization(str);
//}
//int countchar(char a[])
//{
//	int count = 0;
//	for (int i = 0; a[i] != '\0'; i++)
//	{
//		count++;
//	}
//	return count;
//}
////int IndexOfSubstring(char a[], string substring)
////{
////	int k = 0;
////	for (int i = 0; a[i] != 0; i++)
////	{
////		if (substring[i] == a[i])
////		{
////			 k = i;
////		}
////	}
////	return k;
////}
//void Tokenization(char a[])
//{
//	char arr[100]{};
//	int j = 0;
//	for (int i = 0; a[i] != '\0'; i++)
//	{
//		arr[j] = a[i];
//		if (arr[j] == ' ')
//		{
//			arr[j + 1] = '\0';
//			cout << arr << endl;
//			j = -1;
//		}
//		j++;
//	}
//	
//	cout << arr << endl;
//}