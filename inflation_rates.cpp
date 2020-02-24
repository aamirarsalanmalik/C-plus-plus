/* Write a program that outputs inflation rates for two successive years and whether the inflation is increasing or decreasing. Ask the user to
input the current price of an item and its price one year and two years ago. To calculate the inflation rate for a year, subtract the price of
the item for that year from the price of the item one year ago and then divide the result by the price a year ago. Your program must contain 
at least the following functions: 
a function to get the input, 
a function to calculate the results, 
and a function to output theresults. 
Use appropriate parameters to pass the information in and out of the function. Do not use any global variables.*/

#include<iostream>
#include<string>
using namespace std;
void get_input(double&,double&,double&);
double calculate_inflation_rate(double,double,double);

int main()
{
    double currentprice, oneyearearlierprice, twoyearearlierprice,inflationrate;
    get_input(currentprice, oneyearearlierprice, twoyearearlierprice);
    inflationrate = calculate_inflation_rate(currentprice, oneyearearlierprice, twoyearearlierprice);
    cout<<" The final inflation rate is "<<inflationrate<<endl;
    return 0;
}

void get_input(double& current_price, double& one_year_earlier_price, double& two_year_earlier_price)
{
    cout<<"Please enter the current price of the product "<<endl;
    cin>>current_price;
    cout<<"Please enter the price of the product one year earlier "<<endl;
    cin>>one_year_earlier_price;
    cout<<"Please enter the price of the product two year earlier "<<endl;
    cin>>two_year_earlier_price;
}

double calculate_inflation_rate(double current_year_price,double last_year_price,double two_year_earlier_price)
{
    double final_inflation_rate;
    final_inflation_rate = (current_year_price-last_year_price)/two_year_earlier_price;
    return final_inflation_rate;
}