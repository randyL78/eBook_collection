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
void saveInfo()
{
    // variables to store title and author information
    string title;
    string author;

    // create file object and open the file to append
    ofstream outFile;
    outFile.open("eBooks.txt", ios::app);

    // if (the file was opened successfully)
    if (outFile.is_open())
    {
        // enter the title
        cout << "Title (-1 to stop): ";
        getline(cin, title);

        while (title != "-1")
        {
            // enter the author
            cout << "Author: ";
            getline(cin, author);

            // write the title and author to the file
            outFile << title << '#' << author << endl;

            // get title
            cout << "Title (-1 to stop): ";
            getline(cin, title);

        } // end repeat

        // close the file
        outFile.close();

    } else
        // display a message indicating that the file could not be opened
        cout << "File eBooks.txt could not be opened";

    // end if
} // end of saveInfo function

// display the eBook information
void displayInfo() {

    // variables to store title and author information
    string title;
    string author;

    // create file object and open the file for input
    ifstream inFile;
    inFile.open("eBooks.txt");

    // if (the file is opened successfully)
    if (inFile.is_open())
    {
        // display the heading
        cout <<  endl << endl << "eBook Collection" << endl;
        cout << "----------------" << endl;

        // read the first record
        getline(inFile, title, '#');
        getline(inFile, author);

        // repeat while (it's not the end of the file)
        while (!inFile.eof())
        {
            // display the title and author
            cout << title << " by: " << author << endl;

            // read another record
            getline(inFile, title, '#');
            getline(inFile, author);

        }  // end repeat

        // close the file
        inFile.close();

    } else
        // display a message indicating that the file could not be opened
        cout << "File eBooks.txt could not be opened";
    // end if

} // end of displayInfo function