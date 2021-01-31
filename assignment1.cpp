#include <iostream>
using namespace std;


int main()
{

    string customer_name;
    string items;
    double vat;
    int uniqueID;
    double num_of_items;
    double amount_you_owe;
    double price;
    double wallet_balance;
    double balance_after_purchase;

    /**< this session welcomes the customer and displays the available stock  */
    cout << "Welcome to Walmart. What ever you need, we got you covered." << endl;
    cout << "Available stock with their prices." << endl;
    cout << "Printer: Gh650.00 " << endl;
    cout << "Phone: Gh3,800.00" << endl;
    cout << "Table: Gh250.00" << endl;

    /**< this session asks the customer to enter his or her personal details and the item been bought */
    cout << "\n\nEnter your name: " << endl;
    cin >> customer_name;
    cout << "Enter your unique number: " << endl;
    cin >> uniqueID;
    cout << "Enter what you are buying: " << endl;
    cin >> items;
    cout << "Enter the quantity of the product of what you are buying: " << endl;
    cin >> num_of_items;

    /**< this session calculates the amount and shows  */
    if (items == "printer")
    {
        vat = 650 * 0.12;
        amount_you_owe = 650 * num_of_items + vat;
        cout << "Amount you are to pay; Gh" << amount_you_owe;
    }
    else if (items == "phone")
    {
        vat = 3800 * 0.12;
        amount_you_owe = 3800 * num_of_items + vat;
        cout << "Amount you are to pay; Gh" << amount_you_owe;
    }
    else if ( items == "table")
    {
        vat = 250 * 0.12;
        amount_you_owe = 250 * num_of_items + vat;
        cout << "Amount you are to pay; Gh \n" << amount_you_owe << endl;
    }
    else
    {
        cout << "The item you have entered is not available in the store" << endl;
    }


    cout << "\n\nEnter the money you have at your disposal: " << endl;
    cin >> wallet_balance;

    if (wallet_balance >= amount_you_owe)
    {
        balance_after_purchase = wallet_balance - amount_you_owe;
        cout << "Your balance after purchase;Gh " << balance_after_purchase << endl;

        /**< this code is for showing the receipt after the purchase is complete */
        cout << "\n\n\nRECEIPT DETAILS" << endl;
        cout << "Customer name: " << customer_name << endl;
        cout << "Customer Unique ID: " << uniqueID << endl;
        cout << "Item bought: " << items << endl;
        cout << "Quantity: " << num_of_items << endl;
        cout << "Vat: 12%" << endl;
        cout << "Total cost: Gh" << amount_you_owe << ".00" << endl;
        cout << "Total amount paid: Gh" << wallet_balance << ".00" << endl;
        cout << "Balance: Gh" << balance_after_purchase << ".00" << endl;

        cout << "\nThank you for shopping with us." << endl;


    }
    else
    {
        cout << "You don't have enough balance to complete this transaction." << endl;
    }







    return 0;
}
