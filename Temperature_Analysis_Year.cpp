/*Write a program that uses a two-dimensional array to store the highest and lowest temperatures for each month of the year. The program 
should output the average high, average low, and the highest and lowest temperatures for the year. Your program must consist of the following 
functions:
a. Function getData: This function reads and stores data in the two-dimensional array.
b. Function averageHigh: This function calculates and returns the average high temperature for the year.
c. Function averageLow: This function calculates and returns the average low temperature for the year.
d. Function indexHighTemp: This function returns the index of the highest high temperature in the array.
e. Function indexLowTemp: This function returns the index of the lowest low temperature in the array.
(These functions must all have the appropriate parameters.)*/

#include <iostream>
#include <string>
using namespace std;
int getData();
double averageHigh();
double averageLow();
int indexHighTemp();
int indexLowTemp();
int display();
double temp_each_month[12][2];
double average_high=0;
double average_low=0;
double sum_high=0;
double sum_low=0;
double high[12],low[12];
int index,index1;
int main()
{
    cout<<"\t \t Welcome to the program for analyzing the average temperature of the year"<<endl;
    getData();
    display();
    double out1 = averageHigh();
    cout<<"The average highest tempeature of the year is "<<out1<<endl;
    double out2 = averageLow();
    cout<<"The average lowest tempeature of the year is "<<out2<<endl;
    int out3 = indexHighTemp();
    cout<<"The index of the highest high temperature in the array is "<<out3+1<<endl;
    int out4 = indexLowTemp();
    cout<<"The index of the lowest low temperature in the array is "<<out4+1<<endl;
}

int getData()
{
    for(int i=0;i<=11;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<"Enter the lowest and the highest temperature for each month of the year in sequence."<<endl;
            cin>>temp_each_month[i][j];
        }
    }    
}

double averageHigh()
{
    for(int i=0;i<=11;i++)
    {
        for(int j=0;j<1;j++)
        {
           high[i] = temp_each_month[i][j]; 
        }
    }
    sum_high=0;
    for(int i=0;i<=11;i++)
        {
            sum_high = sum_high+high[i]; 
        }
        average_high=sum_high/12.0;
        return average_high;
}

int display()
{
    for(int i=0;i<=11;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<temp_each_month[i][j]<<"\t";
        }
        cout<<endl;
    }
}
double averageLow()
{
    for(int i=0;i<=11;i++)
    {
        for(int j=1;j<2;j++)
        {
           low[i] = temp_each_month[i][j]; 
        }
    }
    sum_low=0;
    for(int i=0;i<=11;i++)
        {
            sum_low = sum_low+low[i]; 
        }
        average_low=sum_low/12.0;
        return average_low;
}
int indexHighTemp()
{
    for(int i=0;i<=11;i++)
    {
        for(int j=0;j<1;j++)
        {
           high[i] = temp_each_month[i][j]; 
        }
    }
    double max=high[0];
    for(int k=0;k<=11;k++)
    {
        if(max<high[k])
        {
            max=high[k];
            index=k; 
        }
    }
    return index;
}

int indexLowTemp()
{
    for(int i=0;i<=11;i++)
    {
        for(int j=1;j<2;j++)
        {
           low[i] = temp_each_month[i][j]; 
        }
    }
    
    double min=low[0];
    for(int t=0;t<=11;t++)
    {
        if(min>low[t])
        {
            min=low[t];
            index1=t; 
        }
    }
    return index1;
}

