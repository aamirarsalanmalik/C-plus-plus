/* Write a program that allows the user to enter a part number that consists of four or five characters. The second and third characters 
represent the delivery method, as follows:  “MS” represents “Mail – Standard”, “MP” represents “Mail – Priority”, “FS” represents 
“FedEx – Standard”, “FO” represents “FedEx – Overnight”, and “UP” represents “UPS”. Display an appropriate message when the part number does 
not contain either four or five characters. Also display  an appropriate message when the second and third characters are not one of the 
delivery methods. If the part number is valid, the program should display the delivery method.*/

#include<iostream>
#include<string>
using namespace std;
string get_input();
int correct_num_of_characters(string);
string delivery_method(string);
int main()
{
    string str = get_input();
    cout<<"Input string is "<<str<<endl;
    int len_str = correct_num_of_characters(str);
     if((len_str == 4) || (len_str == 5))
     {
        cout<<"The part number contain " << len_str<< " characters "<<endl;
        string delivery = delivery_method(str);
        if(delivery == "MS")
        {
            cout<<"The delivery method is Mail–Standard "<<endl;
        }
        else if(delivery == "MP")
        {
            cout<<"The delivery method is Mail-Priority"<<endl;
        }
        else if(delivery == "FS")
        {
            cout<<"The delivery method is FedEx–Standard "<<endl;
        }
        else if(delivery == "FO")
        {
            cout<<"The delivery method is FedEx–Overnight "<<endl;
        }
        else if(delivery == "UP")
        {
            cout<<"The delivery method is UPS "<<endl;
        }
        else
        {
            cout<<"The secod and third character does not represents a delivery method "<<endl;
        }
     }
    else
         cout<<"The part number does not contain either four or five characters"<<endl;
return 0;
}

string get_input()
{
    string part_name;
    cout<<"Please enter the part name for delivery?"<<endl;
    cin>>part_name;
    return part_name;
}

int correct_num_of_characters(string str)
{
    int len_str = str.length();
    return len_str;
}

string delivery_method(string str)
{
    string r = str.substr(1, 2);
    cout<<"String is "<<r<<endl;
    return r;
}