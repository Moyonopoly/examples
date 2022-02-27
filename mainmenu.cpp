// Chapter 6 Final Project - mainmenu.cpp - George Moyo 04-09-2021

#include <iostream>
#include <iomanip>
#include <string>
#include "mainmenu.h"
using namespace std;

// List of global arrays
const int BOOK = 20;              // Global book array size
string bookTitle[BOOK];
string isbn[BOOK];
string author[BOOK];
string publisher[BOOK];
string dateAdded[BOOK];
int qtyOnHand[BOOK];
double wholesale[BOOK];
double retail[BOOK];

int main()
{
    int choice;     // To hold a menu choice

    do
    {
    cout << "\tBooksellers" << endl;
    cout << "\t Main Menu" << endl << endl;

    cout << "1. Cashier Module" << endl;
    cout << "2. Inventory Database Module" << endl;
    cout << "3. Reports Module" << endl;
    cout << "4. Exit" << endl << endl;

    cout << "Enter Your Choice (1 - 4): " << endl;
    cin >> choice;  // Receive that precious user input

    if (choice >= 1 && choice <= 4) // Only valid choices please
    {
        switch (choice)             // Acknowledge user selection
        {
            case 1:
                cashier();          // Call the Cashier function
                break;
            case 2:
                invMenu();          // Call the invMenu function
                break;
            case 3:
                reports();          // Call the reports function
        }
    }
    else
    {
        cout << "Please enter a valid option, 1-4." << endl;
    }
    } while (choice != 4);
    return 0;
}

//************************************
// Definition of cashier function!   *
//************************************
void cashier()
{
    // Assign variables
    string  date;
    string ISBN;
    string title;

    char again;     // Repeat again, Y or N

    int quantity;

    double price, total, tax;

    do
    {
    // Cashier Module portion
    cout << "Booksellers" << endl;
    cout << " Cashier Module" << endl << endl;

    cout << "What is the date? (MM/DD/YY) " << endl;
    cin >> date;

    cout << "Number of books purchased? " << endl;
    cin >> quantity;
    cin.ignore();           // It took me a while to figure out the true value of ignore. Now I'm in love.

    cout << "What is the ISBN? " << endl;
    getline(cin,ISBN);

    cout << "What is the title? " << endl;
    getline(cin,title);

    cout << "What is the cost of the book? " << endl;
    cin >> price;

    cout << endl;

    // Formula for total cost
    total = price * quantity;
    cout << "Book Sellers" << endl << endl;

    cout << "Date:" << endl;
    cout << date << endl << endl;

    // /t assists with the spacing.

    cout << "Qty    ISBN \t \t Title \t \t \t  Price \t Total" << endl;
    cout << "________________________________________________________________________" << endl;

    cout << quantity << "     " << ISBN << "     " << title << "\t \t \t" << "  $ " << price << " \t \t " << "$ " << setprecision(2) << fixed << total << endl << endl;

    cout << "\t Subtotal" << setw(50) << "$ " << setprecision(2) << fixed << total << endl;

    // Formula for tax
    tax = (0.06) * total;

    cout << "\t Tax" << setw(55) << "$ " << " " << setprecision(2) << fixed << tax << endl;

    // New formula for total
    total = total + tax;

    cout << "\t Total" << setw(53) << "$ " << setprecision(2) << fixed << total << endl << endl;

    cout << "Thank You for Shopping at Booksellers!" << endl << endl;

    cout << "Would you like to process another transaction? (Y/N)" << endl;
    cin >> again;

    } while(again == 'Y' || again == 'y');
    return;
}

//************************************
// Definition of invMenu function!   *
//************************************
void invMenu()
{
    int choice;

    do
    {
    cout << "     Booksellers" << endl;
    cout << "   Inventory Database" << endl << endl;

    cout << "1. Look Up a Book" << endl;
    cout << "2. Add a Book" << endl;
    cout << "3. Edit a Book's Record" << endl;
    cout << "4. Delete a Book" << endl;
    cout << "5. Return to the Main Menu" << endl << endl;

    cout << "Enter Your Choice (1 - 5) : " << endl;
    cin >> choice;

    if (choice >= 1 && choice <= 5) // Only valid choices please
    {
        switch (choice)             // Acknowledge user selection
        {
            case 1:
                lookUpBook();       // lookUpBook stub function
                break;
            case 2:
                addBook();          // addBook stub function
                break;
            case 3:
                editBook();         // editBook stub function
                break;
            case 4:
                deleteBook();       // deleteBook stub function
                break;
            case 5:
                cout << "You have selected: 5. Return to the Main Menu" << endl;
                break;
        }
    }
    else
    {
        cout << "Please enter a valid option, 1-5." << endl;
    }

    } while(choice != 5);
    return;

}

//************************************
// Definition of bookInfo function!  *
//************************************
void bookInfo()
{

    cout << "\t \t  Booksellers" << endl;
    cout << "\t \t Book Information" << endl << endl;

    cout << "ISBN:" << isbn[BOOK] << endl;
    cout << "Title:" << bookTitle[BOOK] << endl;
    cout << "Author:" << author[BOOK] << endl;
    cout << "Publisher:" << publisher[BOOK] << endl;
    cout << "Date Added:" << dateAdded[BOOK] << endl;
    cout << "Quantity-On-Hand:" << qtyOnHand[BOOK] << endl;
    cout << "Wholesale Cost:" << wholesale[BOOK] << endl;
    cout << "Retail Price:" << retail[BOOK] << endl;

}

//************************************
// Definition of reports function!   *
//************************************
void reports()
{
    int choice;

    do
    {
    cout << "       Booksellers" << endl;
    cout << "\t Reports" << endl << endl;

    cout << "1. Inventory Listing" << endl;
    cout << "2. Inventory Wholesale Value" << endl;
    cout << "3. Inventory Retail Value" << endl;
    cout << "4. Listing by Quantity" << endl;
    cout << "5. Listing by Cost" << endl;
    cout << "6. Listing by Age" << endl;
    cout << "7. Return to Main Menu" << endl << endl;

    cout << "Enter Your Choice(1 - 7): " << endl;
    cin >> choice;

    if (choice >= 1 && choice <= 7) // Only valid choices please
    {
        switch (choice)             // Acknowledge user selection
        {
            case 1:
                void repListing();
                break;
            case 2:
                void repWholesale();
                break;
            case 3:
                void repRetail();
                break;
            case 4:
                void repQty();
                break;
            case 5:
                void repCost();
                break;
            case 6:
                void repAge();
                break;
            case 7:
                cout << "You have selected: 7. Return to Main Menu" << endl;
                break;
        }
    }
    else
    {
        cout << "Please enter a valid option, 1-7." << endl << endl;
    }

    } while(choice != 7);
    return;
}

//************************************
// Definitionof linearSearch function*
//************************************
/*bool linearSearch(const int arr[], int size, int value)
{
    int index = 0;      // Used as a subscript to search array
    int position = -1;  // To record position of search value
    bool found = false; // Flag to indicate if the value was found

    while (index < size && !found)
    {
        if (arr[index] == bookTitle)    // If the value is found
        {
            found = true;           // Set the flag
            position = index;       // Record the value's subscript
        }
        index++;                    // Go to the next element
    }
    return position;                // Return the position, or -1
}
*/

//************************************
// Definition of lookUpBook function!*
//************************************
void lookUpBook()
{
    string Btitle;                                                  // variable to hold book title

    cout << "You selected Look Up Book." << endl << endl;

    cout << "Please enter the Book Title: ";
    cin >> Btitle;

    //bool Available = linearSearch(bookTitle, BOOK, Btitle);


   /* //loop through all the items and print them if they match
    string matchString = "bc";
    for(int x = 0; x < BOOK; x++){
        if (bookTitle[x].find(matchString, 0) != std::string::npos)
            {
            cout << bookTitle[x] << endl << endl;
            }
        else
        {
            cout << "Book Title Incorrect. Returning to Inventory Database Module;" << endl << endl;
            invMenu();
        }
    } */


  /*  int binarySearch(const int array[], int numElems, int value)

    int first = 0,              // First array element
        last = numElems = - 1,  // Last array element
        middle,                 // Midpoint of search
        position = -1;          // Position of search value
    bool found = false;         // Flag

        while (!found && first <= last)
    {
        middle = (first + last) / 2;    // Calculate midpoint
        if (array[middle] == value)     // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value) // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;         // If value is in upper half
    }
    return position; */

}

//************************************
// Definition of addBook function!   *
//************************************
void addBook()
{
    char again = 'Y';

    while (again == 'y' || again == 'Y')
    {
    cout << "You selected Add Book." << endl << endl;
    cout << "Book Title: ";
    cin >> bookTitle[BOOK];
    getline(cin, bookTitle[BOOK]);

    cout << endl << "ISBN: ";
    cin.ignore();
    cin >> isbn[BOOK];

    cout << endl << "Author: ";
    cin >> author[BOOK];
    getline(cin, author[BOOK]);

    cout << endl << "Publisher: ";
    cin >> publisher[BOOK];
    getline(cin, publisher[BOOK]);

    cout << endl << "Quantity: ";
    cin >> qtyOnHand[BOOK];
    cin.ignore();

    cout << endl << "Wholesale: ";
    cin >> wholesale[BOOK];
    cin.ignore();

    cout << endl << "Retail: ";
    cin >> retail[BOOK];
    cin.ignore();
    cout << endl;


    //cout << "Date: ";
    //cin >> dateAdded[BOOK];
    //cin.ignore();
    //getline(cin, dateAdded[BOOK]);

    cout << endl << endl;

    cout << "Would you like to add another book? (Y/N)" << endl;
    cin >> again;
    }   // end of while

    cout << "Returning to Inventory Database Module" << endl;
    invMenu();
}

//************************************
// Definition of editBook function!  *
//************************************
void editBook()
{
    string Btitle;                                                  // variable to hold book title

    cout << "You selected Edit Book." << endl << endl;

    cout << "You selected Look Up Book." << endl << endl;

    cout << "Please enter the Book Title: ";
    cin >> Btitle;
}

//************************************
// Definition of deleteBook function!*
//************************************
void deleteBook()
{
    string Btitle;                                                 // variable to hold book title

    cout << "You selected Delete Book." << endl << endl;

    cout << "You selected Look Up Book." << endl << endl;

    cout << "Please enter the Book Title: ";
    cin >> Btitle;
}

//************************************
// Definition of repListing function!*
//************************************
void repListing()
{
    cout << "You selected Inventory Listing" << endl << endl;
}

//**************************************
// Definition of repWholesale function!*
//**************************************
void repWholesale()
{
    cout << "You selected Inventory Wholesale Value" << endl << endl;
}

//************************************
// Definition of repRetail function! *
//************************************
void repRetail()
{
    cout << "You selected Inventory Retail Value" << endl << endl;
}

//************************************
// Definition of repQty function!    *
//************************************
void repQty()
{
    cout << "You selected Listing By Quantity" << endl << endl;
}

//************************************
// Definition of repCost function!   *
//************************************
void repCost()
{
    cout << "You selected Listing By Cost" << endl << endl;
}

//************************************
// Definition of repAge function!    *
//************************************
void repAge()
{
    cout << "You selected Listing By Age" << endl << endl;
}
