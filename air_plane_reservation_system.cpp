/* Write a program that can be used to assign seats for a commercial airplane. The airplane has 13 rows, with six seats in each row. Rows 1 
and 2 are first class, rows 3 through 7 are business class, and rows 8 through 13 are economy class. Your program must prompt the user to 
enter the following information:
a. Ticket type (first class, business class, or economy class)
b. Desired seat
Output the seating plan in the following form:
        A   B   C   D   E   F
Row 1   *   *   X   *   X   X
Row 2   *   X   *   X   *   X
Row 3   *   *   X   X   *   X
Row 4   X   *   X   *   X   X
Row 5   *   X   *   X   *   *
Row 6   *   X   *   *   *   X
Row 7   X   *   *   *   X   X
Row 8   *   X   *   X   X   *
Row 9   X   *   X   X   *   X  
Row 10  *   X   *   X   X   X
Row 11  *   *   X   *   X   *
Row 12  *   *   X   X   *   X
Row 13  *   *   *   *   X   *
Here, * indicates that the seat is available; X indicates that the seat is occupied. Make this a menu-driven program; show the user’s choices 
and allow the user to make the appropriate choices. */
#include<iostream>
using namespace std;
int first_class_tickets(int,int);
int economy_class_tickets(int,int);
int business_class_tickets(int,int);
int display_reservation();
char economy_class[6][6] = {{'*','X','*','X','X','*'},{'X','*','X','X','*','X'},{'*','X','*','X','X','X'},{'*','*','X','*','X','*'},{'*','*','X','X','*','X'},{'*','*','*','*','X','*'}};
char first_class[2][6] = {{'*','*','X','*','X','X'},{'*','X','*','X','*','X'}};
char business_class[5][6] = {{'*','*','X','X','*','X'},{'X','*','X','*','X','X'},{'*','X','*','X','*','*'},{'*','X','*','*','*','X'},{'X','*','*','*','X','X'}};
char ch_in;
int main()
{
    do
    {
        int ticket_type,seat_number,row_number;
        cout<<"********************Welcome to the Ticket Reservation System of Pakistan International Airlines********************"<<endl;
        cout<<"\t \t \t First Class has two rows i.e.row 1 to 2 \t \t\ \t"<<endl;
        cout<<"\t \t \t Business class have 5 row i.e row 1 to 5\t \t \t"<<endl;
        cout<<"\t \t \t Economy Class has 6 rows i.e., row 1 to 6\t \t \t"<<endl;
        cout<<"Please enter the type of ticket you want to purchase."<<endl;
        cout<<"Please enter ticket_type as 1 for First class, 2 for Business class, 3 for Economy class"<<endl;
        cin>>ticket_type;
        switch(ticket_type)
        {
            case 1:
            {
                cout<<"Welcome to the First Class of Pakistan International Airlines"<<endl;
                cout<<"Please enter your desired seat row: Please enter 1 or 2 for first class ticket."<<endl;
                cout<<"Please enter your desired row number"<<endl;
                cin>>row_number;
                cout<<"Please enter your desired seat number"<<endl;
                cin>>seat_number;
                first_class_tickets(row_number,seat_number);
                display_reservation();
                break;
            }
            case 2:
            {
                cout<<"Welcome to the Business Class of Pakistan International Airlines"<<endl;
                cout<<"Please enter your desired seat row: Row 1 to 5 for business class."<<endl;
                cout<<"Please enter your desired row number"<<endl;
                cin>>row_number;
                cout<<"Please enter your desired seat number"<<endl;
                cin>>seat_number;
                business_class_tickets(row_number,seat_number);
                display_reservation();
                break;
            }
            case 3:
            {
                cout<<"********************Welcome to the Economy Class of Pakistan International Airlines**************"<<endl;
                cout<<"Please enter your desired seat row: Row 1 to 6 for economy class."<<endl;
                cout<<"Please enter your desired row number"<<endl;
                cin>>row_number;
                cout<<"Please enter your desired seat number"<<endl;
                cin>>seat_number;
                economy_class_tickets(row_number,seat_number);
                display_reservation();
                break;
            }    
            default:
            cout<<"Invalid Option, Please enter correct ticket type.";
            }
    cout<<"Do you want to use the reservation system again"<<endl;
    cin>>ch_in;
    }
while(ch_in == 'y' || ch_in == 'Y');
return 0;
}

int economy_class_tickets(int row_number, int seat_number)
{
    economy:
    if(economy_class[row_number-1][seat_number-1] == '*')
    {
        cout<<"The desired seat is available for reservation."<<endl;
        cout<<"Congratulations your reservation has been made"<<endl;
        economy_class[row_number-1][seat_number-1] = 'X';
    }
    else
    {
        cout<<"Sorry for inconvinience. You desired seat is not available for reservation"<<endl;
        cout<<"Please select another row and seat number"<<endl;
        cout<<"Please enter your desired row number"<<endl;
        cin>>row_number;
        cout<<"Please enter your desired seat number"<<endl;
        cin>>seat_number;
        goto economy;
    }
    
}


int business_class_tickets(int row_number,int seat_number)
{
    business:
    if(business_class[row_number-1][seat_number-1] == '*')
    {
        cout<<"The desired seat is available for reservation."<<endl;
        cout<<"Congratulations your reservation has been made"<<endl;
        business_class[row_number-1][seat_number-1] = 'X';
    }
    else
    {
        cout<<"Sorry for inconvinience. You desired seat is not available for reservation"<<endl;
        cout<<"Please select another row and seat number"<<endl;
        cout<<"Please enter your desired row number"<<endl;
        cin>>row_number;
        cout<<"Please enter your desired seat number"<<endl;
        cin>>seat_number;
        goto business;
    }
    
}


int first_class_tickets(int row_number,int seat_number)
{
    first:
    if(first_class[row_number-1][seat_number-1] == '*')
    {
        cout<<"The desired seat is available for reservation."<<endl;
        cout<<"Congratulations your reservation has been made"<<endl;
        first_class[row_number-1][seat_number-1] = 'X';
    }
    else
    {
        cout<<"Sorry for inconvinience. You desired seat is not available for reservation"<<endl;
        cout<<"Please select another row and seat number"<<endl;
        cout<<"Please enter your desired row number"<<endl;
        cin>>row_number;
        cout<<"Please enter your desired seat number"<<endl;
        cin>>seat_number;
        goto first;
    }
    
}

int display_reservation()
{
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=5;j++)
        {
            cout<<first_class[i][j]<<"\t"; 
        }
    cout<<endl;
    }
    
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=5;j++)
        {
            cout<<business_class[i][j]<<"\t"; 
        }
    cout<<endl;
    }
    
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=5;j++)
        {
            cout<<economy_class[i][j]<<"\t"; 
        }
    cout<<endl;
    }
}