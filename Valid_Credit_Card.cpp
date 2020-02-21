/* Some credit card companies assign a special digit, called a check digit, to the end of each customer’s credit card number. Many methods for
creating the check digit have been developed. One very simple method is to append the second digit in the credit card number to the end of the 
number. For example, if the first four characters in the credit card number are 1357, you would append the number 3 to the end of the number, 
making the credit card number 13573. Write a program that prompts the user to enter a five-digit credit card number, with the fifth digit being
the check digit. Verify that the user entered exactly five numbers. If the user entered the required number of characters, verify that the last
character is the check digit. Display appropriate messages indicating whether the credit card number is valid or invalid. Save and then run the
program. Test the program appropriately. */

#include<iostream>
#include<vector>
using namespace std;
int get_input();
bool correct_number_of_digits(int);
bool valid_card(int);
int main()
{
    int num = get_input();
    bool check; 
    bool vali = true;;
    //cout<<"Original value of check is "<<check<<endl;
    check = correct_number_of_digits(num);
   // cout<<"Check is "<<check<<endl;
    if(check)
    {
       // cout<<"Num is "<<num<<endl;
        //cout<<"Old Vali value is "<<vali<<endl;
        vali = valid_card(num);
        if(vali)
        {
            cout<<"Credit Card Number is valid "<<endl;
        }
        else
        {
            cout<<"Credit Card Number is invalid "<<endl;
        }
    }
    else
    {
        cout<<"The number of digits of credit card number is not 5 "<<endl; 
    }
return 0;
}

int get_input()
{
    int card;
    cout<<"Please enter the crdit card number you want to validate "<<endl;
    cin>>card;
    return card;
}

bool correct_number_of_digits(int card_num)
{
    int count =0;
    bool b1;
    while(card_num!=0)
    {
        card_num = card_num/10;
        count++;
    }
    if(count == 5)
    {
        b1=true;
        return b1;
    }
    else
    {
        b1=false;
        return b1;
    }
}

bool valid_card(int card_number)
{
    vector<int> vec (2);
    int count=5;
    bool var;
    for(int i =0;i<=4;i++)
    {
        int rem = card_number%10;
        card_number =card_number/10;
        if(count == 5)
        {
            vec.at(0)= rem;
        }
        if (count ==2)
        {
            vec.at(1)=rem;
        }
        count--;
    }
    if(vec.at(0) == vec.at(1))
    {
        var=true;
        return var;
    }
    else
    {
        var = false;
        return var;
    }
}