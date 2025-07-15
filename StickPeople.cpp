#include <iostream>
using namespace std;

int main()
{
    cout << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << "                      /\\     "<< endl;
    cout << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " << " " <<"                   /  \\     "<< endl;
    cout << " " << "O~" << " " << "  " << "AAA" << "   " << " AAA" << " " <<  " " << " " << " O" << " " << " " <<"       /    \\     "<< endl;
    cout << "(" << "|" << ")" << "  " << " AAAAAAAAAA" << " " << " " << "[" << " " << "|" << " " << "]" << " " <<"     /      \\     "<<endl;
    cout << "|" << " " << "|" << "  " << "  AAAAAAAA" << " " << " " << " " << " " << " " << "|" << " " << " " << " " <<"    /________\\     "<< endl;
    cout << " " << "^" << " " << "  " << "   AAAAAA" << " " << " " << " " << " " << " " << "|" << " " << "|" << " " << " " <<"        ||     "<< endl;
    cout << "|" << " " << "|" << "  " << "     AA" << " " << " " << " " << " " << " " << " " << " " << "|" << " " << "|" << " " << " " <<"        ||     "<< endl;
    cout << "_______________________________________________"<< endl;

    return 0;
};


// Heart

// (row==0 && col%3!=0): In the first row (row 0), print * unless the column index is divisible by 3.
// (row==1 && col%3==0): In the second row (row 1), print * only if the column index is divisible by 3.
// (row-col==2): A diagonal from upper left to lower right starting from (2,0), "\" part of the heart.
// (row+col==8): A diagonal from upper right to lower left ending at (5,3), "/" part of the heart.
// MORE ADVANCED
// int numbr, row, col; //initialization
// // numbr = 6; //number of rows and columns
// for (row=0; row<numbr; row++) // 6 rows; start at the first row, ensure that the rows are less than six, increase the number of rows
// {
    // for(col=0; col<numbr+1; col++) // 7 columns; start at the first row, increase the number of rows by one, increase the number of rows
        // if ((row==0 && col%3!=0) || (row==1 && col%3==0) || (row-col==2) || (row+col==8))
            // cout << ("*");
        // else
            // // cout << (" ");
        // cout << ("\n");
// };