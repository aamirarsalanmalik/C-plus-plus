/* Consider the definition of the function main.
int main()
{
int x, y;
char z;
double rate, hours;
double amount;
}
The variables x, y, z, rate, and hours referred to in items a through f below are the variables of the function main. Each of the functions 
described must have the appropriate parameters to access these variables. Write the following definitions:
a. Write the definition of the function initialize that initializes x and y to 0 and z to the blank character.
b. Write the definition of the function getHoursRate that prompts the user to input the hours worked and rate per hour to initialize the 
variables hours and rate of the function main.
c. Write the definition of the value-returning function payCheck that calculates and returns the amount to be paid to an employee based on the
hours worked and rate per hour. The hours worked and rate per hour are stored in the variables hours and rate, respectively, of the function 
main. The formula for calculating the amount to be paid is as follows: For the first 40 hours, the rate is the given rate; for hours over 40, 
the rate is 1.5 times the given rate. 
d. Write the definition of the function printCheck that prints the hours worked, rate per hour, and the salary.
e. Write the definition of the function funcOne that prompts the user to input a number. The function then changes the value of x by assigning
the value of the expression 2 times the (old) value of x plus the value of y minus the value entered by the user.
f. Write the definition of the function nextChar that sets the value of z to the next character stored in z.
g. Write the definition of a function main that tests each of these functions.*/

#include<iostream>
#include<string>
using namespace std;
void initialize(int&, int&, char&);
void getHoursRate(double& , double&);
double payCheck(double, double);
void printCheck(double, double, double);
void funcOne(int&, int);
void nextChar(char&);

int main()
{
  int x,y;
  char z;
  double rate;
  double hour;
  double amount;
  initialize(x,y,z);
  getHoursRate(hour,rate);
  amount = payCheck(hour,rate);
  printCheck(rate, hour, amount);
  cout << "The value of x is currently: " << x << endl;
  funcOne(x,y);
  cout << "The value of x is now: " << x << endl;
  nextChar(z);
  cout << "The value of z is now: " << z << endl;
return 0;
}

void initialize(int& x, int & y, char& z)
{
    x=0;
    y=0;
    z= ' ';
}

void getHoursRate(double& hour, double& rate)
{
    cout<<"Please enter the hours worked: ";
    cin>>hour;
    cout<<"Please enter the hourly rate: ";
    cin>>rate;
    
}

double payCheck(double hour, double rate)
{
    double amount = 0;
    
    if (hour > 40) 
        {
        amount += ((hour - 40) * rate) * 1.5;
        amount += 40 * rate;
        return amount;
        } 
    else 
        {
        amount = hour * rate;
        return amount;
        }
}

void printCheck(double rate, double hour, double amount) 
{
    cout<<"Employee get a total of $"<<amount<<" for working "<<hour<<" hours "<<"at a rate of $"<<rate<<endl;
}

void funcOne(int& x, int y)
{
   int val;
   cout<<"Enter the number "<<endl;
   cin>>val;
   x = (x*2)+y-val;
}

void nextChar(char& z)
{
    z++;
}