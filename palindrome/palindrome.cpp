/*Palindrome by Nicholas Rich
9/15/17
A program that reads in an input and then tells you if it is a palindrome or not
 */
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[81];//used to hold the input
  char str2[81];//removed spaces
  cin.get(str, 81);//getting the input
  cin.get();
  int count = 0;
  char c;
  for (int i = 0; i < 81; i++) {//writing the input with no spaces to a second char array
    if ((str[i] != ' ') && (str[i] != '.') && (str[i] != ';') && (str[i] != ',')) {
	    str2[count] = tolower(str[i]);//getting rid of uppercases
	    count++;
      }
  }
  cout << str2 << endl;
  int l = strlen(str2) - 1; //used to find the end of the array without the null
  for (int j = 0; j < 81; j++) {//flipping the array and writing it back to str
    str[j] = str2[l];
    l--;	
  }
  cout << str << endl;
  if (strcmp(str, str2) == 0) { //comparing the str to str2
    cout << "Palindrome";
  }
  else {
    cout << "Not a palindrome";
  }
  return 0;
}
