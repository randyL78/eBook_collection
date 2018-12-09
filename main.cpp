// eBook Collection.cpp - gets and displays the
// items in an eBook collection
// created/revised by Randy Layne on 9 Dec 2018

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// saveInfo and displayInfo function prototypes
void saveInfo();
void displayInfo();


// main entry into the program
int main()
{
    saveInfo();
    displayInfo();
    return 0;
} // end of main function

// get and save the eBook information
void saveInfo() {

    // open file to append

    // if (the file was opened successfully)
        // enter the title

        // repeat while(the title is not -1)
            // enter the author
            // write the title and author to the file
            // get author and title
        // end repeat

        // close the file
    // else
        // display a message indicating that the file could not be opened
    // end if
}

// display the eBook information
void displayInfo() {

    // open the file for input

    // if (the file is opened successfully)
        // display the heading
        // read the title and author from the file

        // repeat while (it's not the end of the file)
            // display the title and author
            // read the title and author from the file
        // end repeat

        // close the file
    // else
        // display a message indicating that the file could not be opened
    // end if

}