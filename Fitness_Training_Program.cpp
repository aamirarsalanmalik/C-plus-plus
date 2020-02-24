/* The cost to become a member of a fitness center is as follows: (a) Senior citizens discount is 30%, (b) If membership is bought and paid for
12 or more months, the discount is 15%, (c) If more than five personal training sessions are bought and paid for, the discount on each session 
is 20%. Write a menu-driven program that determines the cost of a new membership. Your program must contain a function that displays the 
general information about the fitness center and its charges; a function to get all of the necessary information to determine the membership 
cost; and a function to determine the membership cost. Use appropriate parameters to pass information in and out of a function.*/

#include<iostream>
#include<string>
using namespace std;
void getinfo();
void set_initial_prices(double&,double&);
void getnecessaryinfo(bool&,bool&,bool&,int&,int&);
void determinemembershipcost();
double membershipCost(double, int, double, int, bool, bool, bool);
int main()
{
    bool seniorCitizen;
    bool boughtFiveOrMoreSessions;
    bool paidTwelveOrMoreMonths;

    int numberOfMembershipMonths;
    int numberOfPersonalTrainingSessions;
    double regularMembershipChargesPerMonth;
    double costOfOnePersonalTrainingSession;
    
    double memberCost;

    getinfo();
    set_initial_prices(regularMembershipChargesPerMonth,costOfOnePersonalTrainingSession);
    getnecessaryinfo(seniorCitizen,boughtFiveOrMoreSessions,paidTwelveOrMoreMonths,numberOfMembershipMonths, numberOfPersonalTrainingSessions);
    memberCost = membershipCost(regularMembershipChargesPerMonth, numberOfMembershipMonths, costOfOnePersonalTrainingSession,numberOfPersonalTrainingSessions, seniorCitizen, boughtFiveOrMoreSessions, paidTwelveOrMoreMonths);
    cout <<"Mombership cost is" "$" << memberCost<<endl;
    return 0;
}

void getinfo()
{
    cout << "Welcome to Fitness Center." << endl;
    cout << "This program determines the cost of a new membership." << endl;
    cout << "If you are a senior citizen, then the discount is 30% off on the regular membership price." << endl;
    cout << "If you buy membership for twelve months and pay today, the discount is 15%." << endl;
    cout << "If you buy and pay for 6 or more personal training session today, the discount on each session is 20%." << endl;
}

void set_initial_prices(double& membershipcost, double& cost_per_session)
{
    cout << "Please enter the cost of regular Membership per month: " << endl;
    cin >> membershipcost;
    cout << "Please enter the cost of one personal training session: " << endl;
    cin >> cost_per_session;
}
void getnecessaryinfo(bool& senCitizen, bool& brought_Five_Or_More_Sess, bool& paid_for_Twelve_Month, int& number_of_Months, int& number_personal_training_session)
{
    char citizen_type;
    cout<<"Are you a seniour citizen, type Y or y for yes and N for No "<<endl;
    cin>>citizen_type;
    
    if(citizen_type == 'Y' || citizen_type == 'y')
    {
        senCitizen = true;
    }
    else
    {
        senCitizen = false;
    }
    
    cout<<"Enter the number of training session you have bought "<<endl;
    cin>>number_personal_training_session;
    if(number_personal_training_session>=5)
    {
        brought_Five_Or_More_Sess = true;
    }
    else
    {
        brought_Five_Or_More_Sess = false;
    }
    
    cout<<"Enter the number of month you paid for the personal training sessions "<<endl;
    cin>>number_of_Months;
    
    if(number_of_Months>=12)
    {
        paid_for_Twelve_Month = true;
    }
    else
    {
        paid_for_Twelve_Month = false;
    }
}

double membershipCost(double regular_Mem_Price_Per_Mth, int number_Of_Months, double personal_Training_Ses_Cost, int no_of_Personal_Tr_Sess, bool senior_Citizen, bool brought_Five_Or_More_Sess, bool paid_Twelve_Month)
{
    double final_Membership_Cost, final_Session_Cost;
    if(brought_Five_Or_More_Sess)
    {
        personal_Training_Ses_Cost =personal_Training_Ses_Cost*0.8;
    }
    else
    {
        personal_Training_Ses_Cost=personal_Training_Ses_Cost;
    }
    
    if(paid_Twelve_Month)
    {
        regular_Mem_Price_Per_Mth =regular_Mem_Price_Per_Mth*0.85;
    }
    else
    {
        regular_Mem_Price_Per_Mth=regular_Mem_Price_Per_Mth;
    }
    
    final_Membership_Cost = regular_Mem_Price_Per_Mth * number_Of_Months;
    final_Session_Cost = personal_Training_Ses_Cost * no_of_Personal_Tr_Sess;

    if(senior_Citizen)
    {
        return (final_Membership_Cost*0.70) + final_Session_Cost;
    }
    else
    {
        return final_Membership_Cost+final_Session_Cost;
    }
}