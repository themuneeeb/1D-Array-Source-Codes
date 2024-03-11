//#include <iostream>
//using namespace std;
//int main()
//{
//	int A[100]{};
//	int size, temp, pos, dir;
//	cout << " Enter the size of Array : " << endl;
//	cin >> size;
//	cout << " Enter the direction for rotation : \n 1. Left\n 2. Right " << endl;
//	cin >> dir;
//	cout << " Enter the position for rotation : " << endl;
//	cin >> pos;
//	cout << " Enter the integers in Array : " << endl;
//	while (pos > 0)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			cin >> A[i];
//		}
//		if (dir == 1)
//		{
//			temp = A[0];
//			for (int i = 0; i < size - 1; i++)
//			{
//				A[i] = A[i + 1];
//			}
//			A[size - 1] = temp;
//			cout << " After rotation : " << endl;
//			for (int i = 0; i < size; i++)
//			{
//				cout << A[i];
//			}
//			break;
//		}
//
//		else if (dir == 2)
//		{
//			temp = A[size - 1];
//			for (int i = size - 1; size > 0; i--)
//			{
//				A[size - 1] = A[size - 2];
//			}
//			A[0] = temp;
//			cout << " After rotation : " << endl;
//			for (int i = 0; i < size; i++)
//			{
//				cout << A[i];
//			}
//		}
//		else
//			cout << " Select valid option.";
//	}
//	pos--;
//}