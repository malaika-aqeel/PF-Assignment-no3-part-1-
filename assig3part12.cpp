#include <iostream>
using namespace std;
int main() {
 int R, C;
 cout<<"enter rows";
 cin>>R;
 cout<<"ENTER COLUMNS";
 cin >> C;
 int arr[R][C];
 for (int i = 0; i < R; i++) {
 for (int j = 0; j < C; j++) {
 cin >> arr[i][j];
 }
 }


 int result = arr[0][0];
 for (int i = 0; i < R; i++) {for (int j = 0; j < C; j++) {
 if (i == 0 && j == 0)
 continue;
 result = result - arr[i][j];
 }
 }
 cout <<"the final result is"<< result;
 return 0}
 
