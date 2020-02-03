/*Write a program that inputs a date (for example, July 4, 2008) and outputs the day of the week that corresponds to that date.*/
#include<iostream>
#include<string>
using namespace std;
void getinput();
bool isLeapYear(int);
int getCenturyValue(int);
int getYearValue(int);
int getMonthValue(string,int);
int display(int);
int date,year;
string month,day;
int main()
{
    cout<<"\t \t \tWelcome to the date to day of the week conversion module"<<endl;
    getinput();
    bool leap_year=isLeapYear(year);
    if(leap_year == 1)
    {
        cout<<"It is a leap year"<<endl;
    }
    else
    {
        cout<<"It is not a leap year "<<endl;
    }
    int century = getCenturyValue(year);
    cout<<"Century Value "<<century<<endl;
    
    int year_val = getYearValue(year);
    cout<<"Year Value is "<<year_val<<endl;
    
    int month_val = getMonthValue(month,year);
    cout<<"Month Value is "<<month_val<<endl;
    
    int calculation = date+ month_val+year_val+century;
    int cal_remainder = calculation%7;
    
    display(cal_remainder);
    return 0;
}

void getinput()
{
    cout<<"Input a date for which we want day of the week! "<<endl;
    cout<<"Enter the date value?"<<endl;
    cin>>date;
    cout<<"Enter the month name?"<<endl;
    cin>>month;
    cout<<"Enter the year value?"<<endl;
    cin>>year;
}

bool isLeapYear(int year)
{
    // If a year is multiple of 400, then it is a leap year  
    if (year % 400 == 0)  
        return true;  
  
    // Else If a year is muliplt of 100, then it is not a leap year  
    if (year % 100 == 0)  
        return false;  
  
    // Else If a year is muliplt of 4, then it is a leap year  
    if (year % 4 == 0)  
        return true;  
    return false;  
}

int getCenturyValue(int year)
{
    int century_value=year;
    century_value=century_value/10;
    century_value=century_value/10;
    int remainder = century_value%4;
    int sub_reminder = (3-remainder)*2;
    return sub_reminder;
}

int getYearValue(int year)
{
    int year_value=year;
    year_value = year_value%100;
    int remainder_1 =year_value/4;
    int final_val=year_value+remainder_1;
    return final_val;
}

int getMonthValue(string month, int year)
{
    if(month == "January")
    {
       bool check = isLeapYear(year); 
       if(check == 1)
       {
          return 6; 
       }
       else
       {
           return 0;
       }
    }
    
    if(month == "February")
    {
       bool check = isLeapYear(year);
       if(check == 1)
       {
          return 2; 
       }
       else
       {
           return 3;
       }
    }
    
    if(month == "March")
    {
        return 3;
    }
    
    if(month == "April")
    {
        return 6;
    }
    
    if(month == "May")
    {
        return 1;
    }
    
    if(month == "June")
    {
        return 1;
    }
    
    if(month == "July")
    {
        return 6;
    }
    
    if(month == "August")
    {
        return 2;
    }
    
    if(month == "September")
    {
        return 5;
    }
    
    if(month == "October")
    {
        return 0;
    }
    
    if(month == "November")
    {
        return 3;
    }
    
    if(month == "December")
    {
        return 5;
    }
}

int display(int day_val)
{
    if(day_val==0)
    {
        day="Sunday";
    }
    else if (day_val==1)
    {
        day="Monday"; 
    }
        
    else if (day_val==2)
    {
        day="Tuesday"; 
    }
        
    else if (day_val==3)
    {
        day="Wednesday"; 
    }
    
    else if (day_val==4)
    {
        day="Thursday"; 
    }
        
    else if (day_val==5)
    {
        day="Friday"; 
    }
    else
    {
        day="Saturday"; 
    }

cout<<"The day of the week corresponding to the input date is "<<day<<endl;
}