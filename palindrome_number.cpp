/* Write a C++ Program to Check Palindrome Number by using call by reference functions.*/

#include<iostream>
#include<string>
using namespace std;
void get_input(int&);
bool check_palindrome(int);

int main()
{
    int num;
    get_input(num);
    bool decide_palindrome;
    decide_palindrome = check_palindrome(num);
    if(decide_palindrome == 1)
    {
        cout<<"The entered number is palindrome "<<endl;
    }
    else
    {
        cout<<"The entered number is not a palindrome "<<endl;
    }
    return 0;
}

void get_input(int& number)
{
    cout<<"Enter the number for which you want to check whether it is palindrome or not? "<<endl;
    cin>>number;
}

bool check_palindrome(int num)
{
    int orig_num;
    orig_num = num;
    bool palindrome;
    int rem,reverse_num=0;
    while (num>0)
    {
        rem = num%10;
        reverse_num =(reverse_num*10)+rem;
        num=num/10;
    }
    if(orig_num == reverse_num)
    {
        palindrome=true;
        return palindrome;
    }
    else
    {
        palindrome=false;
        return palindrome;
    }
}