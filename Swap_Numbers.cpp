/* 8. Write a program to swap two numbers by using call by reference functions.*/

#include<iostream>
#include<string>
using namespace std;
void get_input(double&, double&);
void swap_num(double&, double&);

int main()
{
    double firstvalue,secondvalue;
    get_input(firstvalue,secondvalue);
    cout<<"The value of A is "<<firstvalue<<endl;
    cout<<"The value of B is "<<secondvalue<<endl;
    swap_num(firstvalue,secondvalue);
    cout<<"After swapping "<<endl;
    cout<<"The value of A is "<<firstvalue<<endl;
    cout<<"The value of B is "<<secondvalue<<endl;
    return 0;
}

void get_input(double& first_num, double& second_num)
{
    cout<<"Enter the first number "<<endl;
    cin>>first_num;
    cout<<"Enter the second number "<<endl;
    cin>>second_num;
}

void swap_num(double& first_number,double& second_number)
{
    double swap_temp;
    swap_temp = first_number;
    first_number=second_number;
    second_number = swap_temp;
}