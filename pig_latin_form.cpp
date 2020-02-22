/* Create a program that allows the user to enter a word. The program should display the word in pig latin form. The rules for converting a 
word into pig latin form are listed below.
• When the word begins with a vowel (A, E, I, O, or U), add the string “-way” (a dash followed by the letters w, a, and y) to the end of the 
word. For example, the pig latin form of the word “ant” is “ant-way”.
• When the word does not begin with a vowel, fi rst add a dash to the end of the word. Then continue moving the first character in the word to
the end of the word until the first character is the letter A, E, I, O, U, or Y. Then add the string “ay” to the end of the word. For example,
the pig latin form of the word “Chair” is “air-Chay”.
• When the word does not contain the letter A, E, I, O, U, or Y, add the string “-way” to the end of the word. For example, the pig latin form 
of “56” is “56-way”.*/

#include<iostream>
#include<string>
using namespace std;
string get_input();
string pig_latin_word(string);
int main()
{
    string str = get_input();
    cout<<"Input string is "<<str<<endl;
    string latin_word = pig_latin_word(str);
    cout<<"Pig Latin Word is "<<latin_word<<endl;
return 0;
}

string get_input()
{
    string word;
    cout<<"Please enter the word you want to convert to pig-latin format?"<<endl;
    cin>>word;
    return word;
}

string pig_latin_word(string str)
{
    
    int counter = 0;
    int counter_2 = 0;
    int start_index, end_index;
    string final_string; 
    int len_str = str.length();
    if(str[0]=='A' || str[0]=='E' || str[0]=='I' || str[0]=='O' || str[0]=='U' || str[0]=='a' || str[0]=='e' || str[0]=='i' || str[0]=='o' || str[0]=='u')
        {
            str=str + "-way";
        }
    else if(str[0]!='A' || str[0]!='E' || str[0]!='I' || str[0]!='O' || str[0]!='U' || str[0]!='a' || str[0]!='e' || str[0]!='i' || str[0]!='o' || str[0]!='u')
    {
        
        for(int i=0;i<len_str;i++)
        {
            if(int(str[i])>=49 && int(str[i]<=57))//str = str + "-";
        {
           goto xyz;
        }
            cout<<"String is "<<str[i]<<endl;
            if(str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
                {
                    if(counter == 0)
                    {
                       start_index =i;
                       counter++; 
                    }
                    else
                    {
                        continue;
                    }
                }
            else
            {
                end_index = i-1;
                break;
            }
        }
        string r = str.substr(start_index, end_index-start_index+1);
        cout<<"Sub string is "<<r<<endl;
        string y = str.substr(end_index+1);
        final_string = y + "-" + r + "ay"; 
        str = final_string;
    }
else
    {
xyz:        for(int i=0;i<len_str;i++)
        {
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
                {
                   counter_2++; 
                }
        }
                if(counter == 0)
                {
                    str = str + "-way";
                }
    
    }
return str;
}
