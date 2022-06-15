/* Name: Stephanie Bernades
Date: April 8, 2020
Section:
Assignment: Morse code program
Due Date: April 8, 2020
About this project: This is like a conversor from morse code to English and English to morse code
Assumptions:
All work below was performed by Stephanie Bernades */

#include <iostream>
#include <string.h>

using namespace std;

int compare (char a[], char b[])
{
    if (strlen(a)!=strlen(b))
        return 0;
    for (int i= 0; i < strlen(a); i++)
    {
        if (a[i]!=b[i])
            return 0;
    }
    return 1;
}

int main() {

    char str[26][10]= {".-", "-...", "-.-", "-..", ".", "..-", "....", "..", "---", "-.-", ".-..", "--", "-", "---", ".--.","--.-", ".-.", "...", "-", "..-",
                       "...-", ".--", "-..-", "-.--", "--.."};

    cout <<"Welcome to the Morse Code Program" << endl;

    do {
        cout << "Menu Options:" << endl;
        cout <<"A) Text to Morse code" << endl;
        cout << "B) Morse code to text" <<endl;
        cout << "C) Quit" <<endl;

        char c;
        cin >> c;
        if (c == 'c' || c == 'C')
            break;

        else if (c == 'a'|| c =='A')
        {
            cout <<"Enter a Morse Code separated by /s and I will translate it to text"<< endl;
            char s[100];
            cin >>s;

            int flag=0;
            for (int i=0; i< strlen(s); i++)
            {
                s[i]= tolower(s[i]);
                for (int j=0; j< 26; j++)
                {
                    if(int (s[i])-97 == j)
                    {
                        flag = 1;
                        cout << str[int(s[i])-97]<< endl;
                        break;
                    }
                }
                if (flag ==0 )
                {
                    cout <<"Word can't contain symbols"<< endl;
                    break;
                }
            }
        }
        else if (c =='b' || c=='B')
        {
            cout <<"Enter a morse code separated by /s to translate " <<endl;
            char s[100];
            cin >>s;
            char ns [1][5];
            int k=0;
            for (int i=0; i <strlen(s); i++)
            {
                if (s[i] == '/'|| i== strlen(s)-1)
                {
                    if (i==strlen(s)-1)
                        ns[0][k]=s[1];
                    k=0;
                    int flag =0;
                    for (int j=0; j <26; j++)
                    {
                        if (compare(str[j],ns[0])==1)
                        {
                            cout <<(char(j=97-32));
                            flag =1;
                        }
                    }
                    if(flag==0)
                    {
                        cout <<"Error in format of Morse Code"<< endl;
                        break;
                    }
                }
                else {
                    ns[0][k]= s[i];
                    k++;
                }
            }
            cout <<endl;
        }




    }while (true);

    return 0;
}
