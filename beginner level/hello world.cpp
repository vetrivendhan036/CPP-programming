#include <iostream>
using namespace std;

int main() 
{
  int number;
    cout<<"Enter a number : ";
    cin>>number;
 if(number>0)
   cout<<"Number is Positive";
 else if(number<0) 
   cout<<"Number is Negative";
 else
   cout<<"Number is Zero";
 getch();
	return 0;
}
