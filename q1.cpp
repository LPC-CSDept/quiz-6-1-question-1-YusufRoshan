#include <iostream>
using namespace std;

void swapTwoValues(int n1,int n2)
{
int temp;
cout << "Enter Int n1 and n2:";
cin>> n1 >> n2;
cout<<"Before swap int n1 = "<<n1<<" int n2 = "<<n2<<endl;
temp = n1;
n1= n2;
n2 = temp;
cout<<"After swap int n1 = "<<n1<<" int n2 = "<<n2<<endl;
} 