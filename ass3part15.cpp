#include <iostream>
using namespace std;
// Function to print word vertically
void printVertical(char word[], int size)
{
 for (int i = 0; i < size; i++)
 {
 cout << word[i] << endl;
 }
}
int main()
{
 char word[100];
 int size;
 cout<<"enter word ";
cin >> word;
cout<<"enter size ";
 cin >> size;
 printVertical(word, size);
  return 0;}
