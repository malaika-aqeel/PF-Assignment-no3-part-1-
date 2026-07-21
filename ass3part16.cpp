#include <iostream>
using namespace std;
void reverseWord(char word[], int size)
{
 for (int i = 0; i < size / 2; i++)
 {
 char temp = word[i];
 word[i] = word[size - 1 - i];
 word[size - 1 - i] = temp;
 }
}
int main()
{
 char word[100];
 int size = 0;
 cout<<"enter word ";
 cin >> word;
 while (word[size] != '\0')
 {
 size++;
 }
 reverseWord(word, size);
 cout << "Reversed Word: " << word;
 return 0;
}
