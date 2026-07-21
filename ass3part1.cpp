#include <iostream>
using namespace std;
int main()
{
 int Row, Col;
 cout << "Enter number of rows: ";
 cin >> Row;
 cout << "Enter number of columns: ";
 cin >> Col;
 int arr[Row][Col];
 int sum =0;
 for(int i = 0; i < Row; i++)
 {
 for(int j = 0; j < Col; j++)
 {
 cin >> arr[i][j];
 sum += arr[i][j];

 }
 }
 for(int i = 0; i < Row; i++)
 {
 for(int j = 0; j < Col; j++)
 {
 cout << arr[i][j] << " ";
 }
 cout << endl;

 }
 cout << "Sum = " << sum << endl;
 return 0;
}

