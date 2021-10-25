#include <iostream>
#include <cstring>
using namespace std;
int wish;
void dash(int no)
{
    for (int i = 0; i < no; i++)
    {
        cout << "-";
    }
    cout << endl;
}
class customer_info
{
    char id[9];
    char password[10];

public:
    void enroll_id(char *p)
    {
        strcpy(id, p);
    }

    void pass(char *p)
    {
        strcpy(password, p);
    }
};
class new_customer
{
    string mail;
    char ph_no[10];
    char id[9];
    string customer;

public:
    void enroll_id(char *p)
    {
        strcpy(id, p);
    }
    void contact_detail(char *p)
    {
        strcpy(ph_no, p);
    }
    void name(string cust)
    {
        customer = cust;
    }
    void mail_id(string mailid)
    {
        mail = mailid;
    }
};
class Food_detail
{
public:
    void breakfast()
    {
        dash(55);
        cout << "S.no.\t|\tItem\t|\tPrice/Platen(in Rs.)" << endl;
        dash(55);
        cout << "1.\t|\tTea\t|\t10" << endl;
        cout << "2.\t|\tCofee\t|\t10" << endl;
        cout << "3.\t|\tPoha\t|\t30" << endl;
        cout << "\n\n";
    }
    void Lunch()
    {
        cout << "Following will be there in a plate for lunch" << endl;
        dash(40);
        cout << "S.no.\t|\tItem" << endl;
        dash(40);
        cout << "1.\t|\tMatar Paneer" << endl;
        cout << "2.\t|\tSev ki Sabji" << endl;
        cout << "3.\t|\tTawa Roti" << endl;
        cout << "4.\t|\tGulaab Jamun" << endl;
        cout << "5.\t|\tAchaar/Namkeen" << endl;
        dash(40);
        cout << "Price of per plate is 70Rs." << endl;
        cout << "\n\n";
    }
    void snacks()
    {
        cout << "Following will be there in snacks for today" << endl;
        dash(55);
        cout << "S.no.\t|\tItem\t|\tPrice/palte(in Rs.)" << endl;
        dash(55);
        cout << "1.\t|\tBhel\t|\t25" << endl;
        cout << "2.\t|\tDhokla\t|\t30" << endl;
        cout << "3.\t|\tMaggie\t|\t25" << endl;
        cout << "4.\t|\tTea\t|\t10" << endl;
        cout << "5.\t|\tCoffee\t|\t10" << endl;
        cout << "6.\t|\tPakode\t|\t30" << endl;
        dash(55);
        cout << "\n\n";
    }
    void Dinner()
    {
        cout << "Following will be there in one plate for dinner for tonight" << endl;
        dash(40);
        cout << "S.no.\t|\tItem\t|\t)" << endl;
        dash(40);
        cout << "1.\t|\tPalak Paneer" << endl;
        cout << "2.\t|\tKadhi" << endl;
        cout << "3.\t|\tAchaar/Namkeen" << endl;
        cout << "4.\t|\tTandoori Roti" << endl;
        cout << "5.\t|\tHalwa" << endl;
        dash(40);
        cout << "\n\n";
    }
    void Special()
    {
        cout << "Following will be as an special item" << endl;
        dash(55);
        cout << "S.no.\t|\tItem\t|\tPrice/item(in Rs.))" << endl;
        dash(55);
        cout << "1.\t|\tIce-Cream\t|\t15" << endl;
        cout << "2.\t|\tChocolates\t|\t10" << endl;
        cout << "3.\t|\tPaani Puri\t|\t10" << endl;
        dash(55);
        cout << "\n\n";
    }
};
class Menu_Detail : public Food_detail
{
public:
    void m_detail()
    {
        int choice;
        cout << "\n You have to choose the following..";
        cout << "\n1.Purchase Detail";
        cout << "\n2.Show Menu";
        cout << "\n3.Rules and Regulations";
        cout << "\n4.Food Suggestion";
        cout << "\nEnter your choice: ";
        cin >> choice;
        if (choice == 2)
        {
            cout << "Which menu do you want to know"
                 << "\n 1.Breakfast \n 2.Lunch \n 3.Snacks \n 4.Dinner \n 5.Special Food" << endl;
            cout << "Enter your choice:";
            cin >> wish;
            if (wish == 1)
            {
                breakfast();
            }
            else if (wish == 2)
            {
                // Lunch
                Lunch();
            }
            else if (wish == 3)
            {
                // Snacks
                snacks();
            }
            else if (wish == 4)
            {
                // Dinner
                Dinner();
            }
            else if (wish == 5)
            {
                // Special food
                Special();
            }
        }
        else if (choice == 3)
        {
            cout << "\t\t\t\t\t\t\tThe Rules and Regulation of Avantika Canteen" << endl;
            cout << "All used cutlery, plates and trays MUST be returned to the assigned stacking areas. Please do not leave them on the tables." << endl;
            cout << "Cutlery, plates and any other canteen utensils are not to be taken to classes, library or away from the canteen area." << endl;
            cout << "A refundable fee of ksh.100 will be charged for every glass picked from the canteen serving points. This is refunded immediately you return the glass back." << endl;
            cout << "Practice good table manners. Keep all food on the tray and off tables and floors." << endl;
        }
        else if (choice == 4)
        {
            string suggestion;
            cout << "Enter your kind suggestion here: ";
            cin >> suggestion;
            cout << "Your suggestion is very helpful for us. Thank You!";
        }
    }
};
class purchase : public Menu_Detail
{
public:
    purchase(int a)
    {
        cout << "\tHope you are enjoying your food at \n\t\tAVANTIKA UNIVERSITY" << endl;
    }
    purchase()
    {
    }

    void invoice()
    {
        cout << "\n\n";
        int option, total = 0;
        int a = wish;
        switch (a)
        {
        case 1:
            cout << "\tBreakfast Purchased\n";
            cout << "what thing do you want to order?\nEnter order S.No.\n";
            cout << "\nKindly Press 0 for completing oreder\n";

            cout << "your purchase detail is given below " << endl;
            dash(45);
            cout << "Item\t|\tQty.\t|\tRate" << endl;
            dash(45);
            while (option > 0)
            {
                cin >> option;
                if (option == 1 | option == 2)
                {
                    total = total + 10;
                    if (option == 1)
                    {
                        cout << "tea\t|\t1\t|\t10\n";
                    }
                    else
                    {
                        cout << "Coffee\t|\t1\t|\t10\n";
                    }
                }
                else if (option == 3)
                {
                    total = total + 30;
                    cout << "poha\t|\t1\t|\t30\n";
                }
            }

            cout << "your total payable amount is - " << total;
            break;
        case 2:
            cout << "\tLunch Purchased\n";
            int n;
            cout << "How many plates do you want to order?\n";
            cin >> n;
            total = n * 70;

            cout << "your total payable amount is - " << total;
            break;
        case 3:
            cout << "\tSnacks Purchased\n";
            cout << "what thing do you want to order?\nEnter order S.No.\n";
            cout << "\nKindly Press 0 for completing order\n";

            cout << "your purchase detail is given below " << endl;
            dash(45);
            cout << "Item\t|\tQty.\t|\tRate" << endl;
            dash(45);

            while (option > 0)
            {
                cin >> option;
                if (option == 1 | option == 3)
                {
                    if (option == 1)
                    {
                        cout << "Bhel\t|\t1\t|\t25\n";
                    }
                    else if (option == 3)
                    {
                        cout << "Maggie\t|\t1\t|\t20\n";
                    }
                    total = total + 25;
                }
                else if (option == 2 | option == 6)
                {
                    if (option == 2)
                    {
                        cout << "Dhokla\t|\t1\t|\t25\n";
                    }
                    else if (option == 6)
                    {
                        cout << "Pakoda\t|\t1\t|\t20\n";
                    }
                    total = total + 30;
                }
                else if (option == 4 | option == 5)
                {
                    if (option == 4)
                    {
                        cout << "Tea\t|\t1\t|\t25\n";
                    }
                    else if (option == 5)
                    {
                        cout << "Coffee\t|\t1\t|\t20\n";
                    }
                    total = total + 10;
                }
            }
            cout << "your total payable amount is - " << total;
            break;
        case 4:
            cout << "\tDinner Purchased\n";
            cout << "How many plates do you want to order?\n";
            cin >> n;
            total = n * 70;
            cout << "your total payable amount is - " << total;
            break;

        default:
            cout << "Supper Purchased";
            cout << "what thing do you want to order?\nEnter order S.No.\n";
            cout << "\nKindly Press 0 for completing oreder\n";

            cout << "your purchase detail is given below " << endl;
            dash(45);
            cout << "Item\t|\tQty.\t|\tRate" << endl;
            dash(45);

            while (option > 0)
            {
                cin >> option;
                if (option == 1)
                {
                    if (option == 1)
                    {
                        cout << "Ice-Cream\t|\t1\t|\t25\n";
                    }
                    total = total + 15;
                }
                else if (option == 2 | option == 3)
                {
                    if (option == 2)
                    {
                        cout << "Chocolate\t|\t1\t|\t25\n";
                    }
                    else if (option == 2)
                    {
                        cout << "Paani-Puri\t|\t1\t|\t25\n";
                    }
                    total = total + 10;
                }
            }
            cout << "your total payable amount is - " << total;
            break;
        }
    }
};
main()
{
    cout << "\t\t\t\t\t\t\t Welcome To Avantika Canteen" << endl;
    cout << "\n Are you...";
    cout << "\n1.Existing Member";
    cout << "\n2.New Member";
    int choice;
    cout << "\nChoose 1 or 2- ";
    cin >> choice;
    if (choice == 1)
    {
        char enrollid[9];
        char password[10];
        customer_info user1;
        cout << "Enter your id: " << endl;
        cin >> enrollid;
        cout << "Enter your password " << endl;
        cin >> password;
        user1.enroll_id(enrollid);
        user1.pass(password);
        Menu_Detail d();
    }
    if (choice == 2)
    {
        string mid;
        char ph[10];
        string person_name;
        char enroll[9];
        new_customer user;
        cout << "Enter your mail id: " << endl;
        cin >> mid;
        cout << "Emter your phone number: " << endl;
        cin >> ph;
        cout << "Enter your name: " << endl;
        cin >> person_name;
        cout << "Enter your enrollment id: " << endl;
        cin >> enroll;
        user.mail_id(mid);
        user.contact_detail(ph);
        user.name(person_name);
        user.enroll_id(enroll);
    }
    Menu_Detail d;
    d.m_detail();
    purchase pur(5);
    pur.invoice();
}