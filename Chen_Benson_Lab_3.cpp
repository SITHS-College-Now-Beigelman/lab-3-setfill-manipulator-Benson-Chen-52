// Benson Chen
// Lab 3
// 9/30/24
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Beginning of code
int main()
{   
    //Instead of couting all of these sentences, I decided to save them in strings to be used as just a variable in the cout statements
    string sentence_1 = "Ways to access the Task Manager on your Windows computer:"; 
    string sentence_2 = "Press the key combination Ctrl + Shift + Escape";
    string sentence_3 = "Press the key combination Ctrl + Alt + Delete and select 'Task Manager'";
    string sentence_4 = "Type 'Task Manager' in the Windows Start menu search";

    //Cout statements!
    cout << setfill('#') << setw(96) << "#" << endl; //Sets the width to 96 and fills everything with #
    cout << "#" << setfill(' ') << setw(95) << "#" << endl; //Sets width to be 95 and fills everything with a space
    cout << "#" << setw(58) << sentence_1 << setw(37) << "#" << endl; //Setw to manipulate the formatting
    cout << "#" << setw(95) << "#" << endl; //A line filled with blank space; copy-pasted a lot
    cout << "#" << setw(59) << sentence_2 << setw(36) << "#" << endl; //Format manipulation depending on the length of the sentence
    cout << "#" << setw(95) << "#" << endl;
    cout << "#" << setw(83) << sentence_3 << setw(12) << "#" << endl;
    cout << "#" << setw(95) << "#" << endl;
    cout << "#" << setw(64) << sentence_4 << setw(31) << "#" << endl;
    cout << "#" << setw(95) << "#" << endl;
    cout << setfill('#') << setw(96) << "#" << endl; //Fills the last line with just hashtags

    //Return statement
    return 0;
}
/*
################################################################################################
#                                                                                              #
# Ways to access the Task Manager on your Windows computer:                                    #
#                                                                                              #
#            Press the key combination Ctrl + Shift + Escape                                   #
#                                                                                              #
#            Press the key combination Ctrl + Alt + Delete and select 'Task Manager'           #
#                                                                                              #
#            Type 'Task Manager' in the Windows Start menu search                              #
#                                                                                              #
################################################################################################
*/