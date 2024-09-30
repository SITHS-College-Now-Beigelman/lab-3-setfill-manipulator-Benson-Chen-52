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
    //Cout statements!
    cout << setfill('#') << setw(96) << "#" << endl; //Sets the width to 96 and fills everything with #
    cout << "#" << setfill(' ') << setw(95) << "#" << endl; //Sets width to be 95 and fills everything with a space
    cout << "#" << setw(58) << "Ways to access the Task Manager on your Windows computer:"
    << setw(37) << "#" << endl; //Setw to manipulate the formatting
    cout << "#" << setw(95) << "#" << endl; //A line filled with blank space; copy-pasted a lot
    cout << "#" << setw(59) << "Press the key combination Ctrl + Shift + Escape"
    << setw(36) << "#" << endl; //Format manipulation depending on the length of the sentence
    cout << "#" << setw(95) << "#" << endl;
    cout << "#" << setw(83) << "Press the key combination Ctrl + Alt + Delete and select 'Task Manager'"
    << setw(12) << "#" << endl;
    cout << "#" << setw(95) << "#" << endl;
    cout << "#" << setw(64) << "Type 'Task Manager' in the Windows Start menu search" << setw(31) << "#" << endl;
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