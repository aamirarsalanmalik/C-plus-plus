/* Write a C++ program that calculates the average of three numbers by using call by reference functions.*/

#include<iostream>
#include<string>
using namespace std;
void get_input(double&,double&,double&);
double calc_average(double,double,double);

int main()
{
    double first_num,second_num,third_num,final_average;
    get_input(first_num,second_num,third_num);
    final_average = calc_average(first_num,second_num,third_num);
    cout<<"The average of three numbers is "<<final_average<<endl;
    return 0;
}

void get_input(double& first_number, double& second_number, double& third_number)
{
    cout<<"Enter the first number "<<endl;
    cin>>first_number;
    cout<<"Enter the second number "<<endl;
    cin>>second_number;
    cout<<"Enter the third number "<<endl;
    cin>>third_number;
}

double calc_average(double first_no,double second_no, double third_no)
{
    double average;
    average = (first_no+second_no+third_no)/3;
    return average;
}