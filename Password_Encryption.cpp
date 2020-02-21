/* Create a program that allows the user to enter a password. The program then should create and display a new password using the rules listed 
below.
1. All vowels (A, E, I, O, and U) in the original password should be replaced with the letter X.
2. All numbers in the original password should be replaced with the letter Z.
3. All of the characters in the original password should be reversed. */

#include<iostream>
#include<vector>
#include <typeinfo>
#include <bits/stdc++.h> 
using namespace std;
string get_input();
string encrypt_password(string);
string reverse_password(string);
int main()
{
    string str = get_input();
    string updated_password  = encrypt_password(str);
    cout<<"Updated Password is "<<updated_password<<endl;
    string encoded_password = reverse_password(updated_password);
    cout<<"Reversed Password is "<<encoded_password<<endl;
return 0;
}

string get_input()
{
    string password;
    cout<<"Please enter the password "<<endl;
    cin>>password;
    return password;
}

string encrypt_password(string password_enyc)
{
   int len_str = password_enyc.length(); 
   for(int i=0;i<=len_str;i++)
   {
      if(int(password_enyc[i])=='A' || int(password_enyc[i])=='E' || int(password_enyc[i])=='I' || int(password_enyc[i])=='O' || int(password_enyc[i])=='U' || int(password_enyc[i])=='a' || int(password_enyc[i])=='e' || int(password_enyc[i])=='i' || int(password_enyc[i])=='o' || int(password_enyc[i])=='u')
      {
          password_enyc[i]='X';
      }
      else if (password_enyc[i]>=48 && password_enyc[i]<=57)
      {
          password_enyc[i]='Z';
      }
      else
          password_enyc[i]=password_enyc[i];
   }
  return password_enyc;
}

string reverse_password(string password)
{
    // Reverse string
    reverse(password.begin(), password.end()); 
return password;
}