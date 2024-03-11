//#include<iostream>
//using namespace std;
//
//const int row = 8;
//const int col = 8;
//int findStrInMat(char mat[row][col], char str[]) {
//	int count = 0;
//	char stop = false;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (mat[i][j] == str[0])
//			{
//				stop = false;
//				int k = 1;
//				int ii = i;
//				int jj = j;
//				while (str[k] != '\0' && !stop)
//				{
//					if (jj == col - 1) {
//						jj = 0;
//						ii++;
//					}
//					else
//						jj++;
//					if (mat[ii % (row)][jj] == str[k])
//						k++;
//					else
//						stop = true;
//				}
//				if (k == strlen(str))
//					count++;
//			}
//		}
//	}
//	return count;
//}
//void main() {
//	char mat[8][8] = {
//	{ 'e', 'n', 'j', 'c', 'y', 'o', 'x', 'e' },
//	{ 'n', 't', 'h', 'f', 'o', 'x', 't', 'u' },
//	{ 'm', 'y', 'j', 'n', 'e', 'x', 'o', 'z' },
//	{ 'g', 'h', 'v', 'd', 'i', 'r', 't', 'n' },
//	{ 'u', 'x', 'o', 'x', 'e', 'n', 'b', 'a' },
//	{ 't', 'i', 't', 'o', 'u', 't', 'i', 'r' },
//	{ 't', 't', 'g', 'g', 'h', 's', 'o', 'x' },
//	{ 'e', 'd', 'f', 'g', 'h', 's', 'o', 'x' }
//	};
//	char arr[100] = { 'o','x','e','n' };
//	cout << "Count of String: " << findStrInMat(mat, arr) << endl;
//	system("pause");
//}