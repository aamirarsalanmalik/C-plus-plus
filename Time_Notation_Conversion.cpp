/*Write a program to convert the time from 24-hour notation to 12-hour notation and vice versa. Your program must be menu-driven, giving the 
user the choice of converting the time between the two notations. Furthermore, your program must contain at least the following function: 
a function to convert the time from 24-hour notation to 12-hour notation, a function to convert the time from 12-hour notation to 24-hour 
notation, a function to display the choices, function(s) to get the input, and function(s) to display the results. (For 12-hour time notation,
your program must display AM or PM.)*/

#include<iostream>
#include<string>
using namespace std;
int twenty_four_to_twelve(int,int);
int twelve_to_twenty_four(int,int);
int display_choices();
int get_input();
int display_results();
int hours,minutes;
string time_format;
int count=0;
char ch;
int main()
{
    do
    {
    cout<<"Welcome to the Time Format Conversion Module"<<endl;
    get_input();
    display_choices();
    display_results();
    cout<<"Do you want to use this module again? Type Y or y!"<<endl;
    cin>>ch;
    }
    while(ch=='Y' || ch == 'y');
    return 0; 
}

int get_input()
{
    cout<<"Please enter the time you want to convert "<<endl;
    cout<<"Enter the hour part of the time "<<endl;
    cin>>hours;
    cout<<"Enter the minutes part of the time "<<endl;
    cin>>minutes;
    return hours;
}

int display_choices()
{
    int choice;
    cout<<"Please enter your choice" <<endl;
    cout<<"Please enter 1 for converting twelve to twenty four hour format" <<endl;
    cout<<"Please enter 2 for converting twenty four to twelve hour format" <<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            hours=twelve_to_twenty_four(hours,minutes);
            break;
        }
        case 2:
        {
            hours=twenty_four_to_twelve(hours,minutes);
            break;
        }
        default:
        cout<<"Invalid Choice"<<endl;
    }
}

int twenty_four_to_twelve(int hours,int minutes)
{
    if(hours<12)
    {
        int hours=hours;
        time_format="AM";
    }
    else if(hours==12)
    {
        hours=hours;
        time_format="PM";
    }
    else 
    {
        hours=hours-12;
        time_format="PM";
    }
    return hours;
}

int twelve_to_twenty_four(int hours,int minutes)
{
    cout<<"Please enter the time format"<<endl;
    cin>>time_format;
    count+=1;
    if(time_format == "AM")
    {
        hours=hours;
    }
    else 
    {
        hours=12+hours;
    }
    return hours;
}

int display_results()
{
    if(count>0)
    {
        cout<<"The desired time after format conversion is "<<hours<<":"<<minutes<<endl;
    }
    else
        cout<<"The desired time after format conversion is "<<hours<<":"<<minutes<<" "<<time_format<<endl;
}