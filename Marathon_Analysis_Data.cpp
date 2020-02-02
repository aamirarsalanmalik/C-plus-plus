/*Jason, Samantha, Ravi, Sheila, and Ankit are preparing for an upcoming marathon. Each day of the week, they run a certain number of miles 
and write them into a notebook. At the end of the week, they would like to know the number of miles run each day, the total miles for the week,
and average miles run each day. Write a program to help them analyze their data. Your program must contain parallel arrays: an array to store 
the names of the runners and a two-dimensional array of five rows and seven columns to store the number of miles run by each runner each day. 
Furthermore, your program must contain at least the following functions: a function to read and store the runners’ names and the numbers of 
miles run each day; a function to find the total miles run by each runner and the average number of miles run each day, and a function to 
output the results. 
(You may assume that the input data is stored in a file and each line of data is in the following form: 
runnerName milesDay1 milesDay2 milesDay3 milesDay4 milesDay5 milesDay6 milesDay7.) */

#include <iostream>
#include <string>
using namespace std;
int data_runners();
int average_miles();
int display();
int display_data();
string names[5];
double data[5][7];
double average_runner[5];
double average_week[7];
double sum_runner=0;
double average_days=0;
int main()
{
    cout<<"Welcome to the Marathon Data Analysis Tool "<<endl;
    data_runners();
    display_data();
    average_miles();
    display();
    return 0;
}

int data_runners()
{
    for(int i=0;i<=4;i++)
    {
        cout<<"Enter the name of the runner"<<endl;
        cin>>names[i];
        for(int j=0;j<=6;j++)
        {
            cout<<"Enter the number of miles of the day " <<j+1<<" of "<<names[i]<<endl;
            cin>>data[i][j];
        }
    }
}


int display_data()
{
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=6;j++)
        {
            cout<<data[i][j]<<"\t";
        }
    cout<<endl;
    }
}
int average_miles()
{
    //Calculate the number of average miles of each runner.
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=6;j++)
        {
            sum_runner = sum_runner+data[i][j];
        }
    average_runner[i] = sum_runner/7.0;
    sum_runner=0;
    }
    
    //Calculate the number of miles of each day of the week.
   for(int i=0;i<=6;i++)
    {
       for(int j=0;j<=4;j++)
        {
            average_days = average_days+data[j][i];
        }
    average_week[i] = average_days/5.0;
    average_days=0;
    }
}

int display()
{
   for(int i=0;i<=6;i++)
    {
        cout<<"The average number of miles of day "<<i+1<<" is "<<average_week[i]<<endl;
    }
    
    for(int i=0;i<=4;i++)
    {
        cout<<"The average number of miles of runner "<<i+1<<" is "<<average_runner[i]<<endl;
    }
}

        
