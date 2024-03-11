//#include<iostream>  
//using namespace std;
//int main()
//{
//    int arr[100] = { 0 }, size = 0;
//    cout << " Enter the size of array: " << endl;
//    cin >> size;
//    cout << " Enter the elements in array: " << endl;
//    for (int i = 0; i < size; i++)
//    {
//        cin >> arr[i];
//    }
//    cout << " The array is: " << endl;
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << "\t";
//    }
//    for (int k = 0; k < size; k++)
//    {
//        
//        int temp = arr[k];
//        int j = k - 1;
//        while (j >= 0 && temp <= arr[j])
//        {
//            arr[j + 1] = arr[j];
//            j = j - 1;
//        }
//       
//    }
//    cout << "\nSorted list is \n";
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << "\t";
//    }
//}