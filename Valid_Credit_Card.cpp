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