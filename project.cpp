#include<bits/stdc++.h>
#include<string>
using namespace std;
void mainMenu();
class Details
{
public:
static string name ,gender;
int phoneNO;
int age;
string add;
static int cID;
char arr[100];
void information()
{
    cout<<"\nEnter the Customer ID:";
    cin>>cID;
    cout<<"\n Enter the name: ";
    cin>>name;
    cout<<"\n Enter the age:";
    cin>>age;
    cout<<"\n Address :";
    cin>>add;
    cout<<"\n Gender :";
    cin>>gender;
    cout<<"Your Details are saved with us\n";
}
};
int Details::cID;//scope resolution
string Details::name;
string Details::gender;

class Registration
{
public:
static int choice;
int choice1;
int back;
static float charges;
void flight()
{
string flightN[]={"Dubai","Canada","USA","UK","Australia","India","Europe"};
for(int i=0;i<7;i++)
{
 cout<<(i+1)<<".flight to "<<flightN[i]<<endl;   
}
cout<<"\nWelcome to the Airlines!"<<endl;
cout<<"Press the number of the country of which you want to book  the flight: ";
cin>>choice;
switch(choice)
{
    case 1:
    {
    cout<<"____________Welcome to Dubai Emirates___________________\n"<<endl;
    cout<<"Your Comfort is our Priority. Enjoy the journey!"<<endl;
    cout<<"1. DUB -498"<<endl;
    cout<<"\t04-07-2023 8:00AM 10hrs Rs.30000"<<endl;
     cout<<"2. DUB -520"<<endl;
    cout<<"\t07-07-2023 11:00AM 08hrs Rs.35000"<<endl;
     cout<<"3. DUB -369"<<endl;
    cout<<"\t08-07-2023 4:00PM 11hrs Rs.26000"<<endl;
    cout<<"\n Select the Flight you want to book:";
    cin>>choice1;
    if(choice1==1)
    {
        charges=30000;
        cout<<"\nYou have successfully booked the flight DUB-498"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==2)
    {
        charges=35000;
        cout<<"\nYou have successfully booked the flight DUB-520"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==3)
    {
                charges=26000;
        cout<<"\nYou have successfully booked the flight DUB-369"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else{
        cout<<"Invalid input,shifting to the previous menu"<<endl;
        flight();
    }
    cout<<"press any key to go back to the main menu:"<<endl;
    cin>>back;
    if(back==1)
    {
        mainMenu();
    }
    else{
        mainMenu();
    }
    break;
    }
    case 2:
    {
    cout<<"____________Welcome to Canada Airlines___________________\n"<<endl;
    cout<<"Your Comfort is our Priority. Enjoy the journey!"<<endl;
    cout<<"1. CND -189"<<endl;
    cout<<"\t04-07-2023 8:00AM 06hrs Rs.25000"<<endl;
     cout<<"2. CND -490"<<endl;
    cout<<"\t07-07-2023 10:00AM 08hrs Rs.22000"<<endl;
     cout<<"3. CND -299"<<endl;
    cout<<"\t08-07-2023 6:00PM 07hrs Rs.24000"<<endl;
    cout<<"\n Select the Flight you want to book:";
    cin>>choice1;
    if(choice1==1)
    {
        charges=25000;
        cout<<"\nYou have successfully booked the flight CND-189"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==2)
    {
        charges=22000;
        cout<<"\nYou have successfully booked the flight CND-490"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==3)
    {
                charges=24000;
        cout<<"\nYou have successfully booked the flight CND-299"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else{
        cout<<"Invalid input,shifting to the previous menu"<<endl;
        flight();
    }
    cout<<"press any key to go back to the main menu:"<<endl;
    cin>>back;
    if(back==1)
    {
        mainMenu();
    }
    else{
        mainMenu();
    }
    break;
    }
    case 3:
    {
    cout<<"____________Welcome to USA Airways___________________\n"<<endl;
    cout<<"Your Comfort is our Priority. Enjoy the journey!"<<endl;
    cout<<"1. USA -498"<<endl;
    cout<<"\t04-07-2023 8:00AM 10hrs Rs.30000"<<endl;
     cout<<"2. USA -520"<<endl;
    cout<<"\t07-07-2023 11:00AM 08hrs Rs.28000"<<endl;
     cout<<"3. USA -369"<<endl;
    cout<<"\t08-07-2023 4:00PM 11hrs Rs.21000"<<endl;
    cout<<"\n Select the Flight you want to book:";
    cin>>choice1;
    if(choice1==1)
    {
        charges=30000;
        cout<<"\nYou have successfully booked the flight USA -498"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==2)
    {
        charges=28000;
        cout<<"\nYou have successfully booked the flight USA -520"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==3)
    {
                charges=21000;
        cout<<"\nYou have successfully booked the flight USA -369"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else{
        cout<<"Invalid input,shifting to the previous menu"<<endl;
        flight();
    }
    cout<<"press any key to go back to the main menu:"<<endl;
    cin>>back;
    if(back==1)
    {
        mainMenu();
    }
    else{
        mainMenu();
    }
    break;
    }
    case 4:
    {
    cout<<"____________Welcome to UK Airlines___________________\n"<<endl;
    cout<<"Your Comfort is our Priority. Enjoy the journey!"<<endl;
    cout<<"1. UK -498"<<endl;
    cout<<"\t04-07-2023 8:00AM 10hrs Rs.30000"<<endl;
     cout<<"2. UK -520"<<endl;
    cout<<"\t07-07-2023 11:00AM 08hrs Rs.35000"<<endl;
     cout<<"3. UK -369"<<endl;
    cout<<"\t08-07-2023 4:00PM 11hrs Rs.26000"<<endl;
    cout<<"\n Select the Flight you want to book:";
    cin>>choice1;
    if(choice1==1)
    {
        charges=30000;
        cout<<"\nYou have successfully booked the flight UK-498"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==2)
    {
        charges=35000;
        cout<<"\nYou have successfully booked the flight UK -520"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==3)
    {
                charges=26000;
        cout<<"\nYou have successfully booked the flight UK -369"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else{
        cout<<"Invalid input,shifting to the previous menu"<<endl;
        flight();
    }
    cout<<"press any key to go back to the main menu:"<<endl;
    cin>>back;
    if(back==1)
    {
        mainMenu();
    }
    else{
        mainMenu();
    }
    break;
    }
    case 5:
    {
    cout<<"____________Welcome to Australia Airlines___________________\n"<<endl;
    cout<<"Your Comfort is our Priority. Enjoy the journey!"<<endl;
    cout<<"1. AUS -498"<<endl;
    cout<<"\t04-07-2023 8:00AM 10hrs Rs.30000"<<endl;
     cout<<"2. AUS -520"<<endl;
    cout<<"\t07-07-2023 11:00AM 08hrs Rs.35000"<<endl;
     cout<<"3. AUS -369"<<endl;
    cout<<"\t08-07-2023 4:00PM 11hrs Rs.26000"<<endl;
    cout<<"\n Select the Flight you want to book:";
    cin>>choice1;
    if(choice1==1)
    {
        charges=30000;
        cout<<"\nYou have successfully booked the flight AUS -498"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==2)
    {
        charges=35000;
        cout<<"\nYou have successfully booked the flight AUS -520"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==3)
    {
                charges=26000;
        cout<<"\nYou have successfully booked the flight AUS -369"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else{
        cout<<"Invalid input,shifting to the previous menu"<<endl;
        flight();
    }
    cout<<"press any key to go back to the main menu:"<<endl;
    cin>>back;
    if(back==1)
    {
        mainMenu();
    }
    else{
        mainMenu();
    }
    break;
    }
    case 6:
    {
    cout<<"____________Welcome to Spicejet ___________________\n"<<endl;
    cout<<"Your Comfort is our Priority. Enjoy the journey!"<<endl;
    cout<<"1. IND-400"<<endl;
    cout<<"\t04-07-2023 8:00AM 10hrs Rs.30000"<<endl;
     cout<<"2.  IND-520"<<endl;
    cout<<"\t07-07-2023 11:00AM 08hrs Rs.35000"<<endl;
     cout<<"3.  IND-369"<<endl;
    cout<<"\t08-07-2023 4:00PM 11hrs Rs.26000"<<endl;
    cout<<"\n Select the Flight you want to book:";
    cin>>choice1;
    if(choice1==1)
    {
        charges=30000;
        cout<<"\nYou have successfully booked the flight IND-400"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==2)
    {
        charges=35000;
        cout<<"\nYou have successfully booked the flight IND-520"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==3)
    {
                charges=26000;
        cout<<"\nYou have successfully booked the flight IND-369"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else{
        cout<<"Invalid input,shifting to the previous menu"<<endl;
        flight();
    }
    cout<<"press any key to go back to the main menu:"<<endl;
    cin>>back;
    if(back==1)
    {
        mainMenu();
    }
    else{
        mainMenu();
    }
    break;
    }
    case 7:
    {
    cout<<"____________Welcome to Europe Airlines___________________\n"<<endl;
    cout<<"Your Comfort is our Priority. Enjoy the journey!"<<endl;
    cout<<"1. EUR-498"<<endl;
    cout<<"\t04-07-2023 8:00AM 10hrs Rs.30000"<<endl;
     cout<<"2. EUR -520"<<endl;
    cout<<"\t07-07-2023 11:00AM 08hrs Rs.35000"<<endl;
     cout<<"3. EUR-369"<<endl;
    cout<<"\t08-07-2023 4:00PM 11hrs Rs.26000"<<endl;
    cout<<"\n Select the Flight you want to book:";
    cin>>choice1;
    if(choice1==1)
    {
        charges=30000;
        cout<<"\nYou have successfully booked the flight EUR-498"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==2)
    {
        charges=35000;
        cout<<"\nYou have successfully booked the flight EUR-520"<<endl;
        
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else if(choice1==3)
    {
                charges=26000;
        cout<<"\nYou have successfully booked the flight EUR-369"<<endl;
        cout<<"You can go back to menu and take the flight"<<endl;
    }
    else{
        cout<<"Invalid input,shifting to the previous menu"<<endl;
        flight();
    }
    cout<<"press any key to go back to the main menu:"<<endl;
    cin>>back;
    if(back==1)
    {
        mainMenu();
    }
    else{
        mainMenu();
    }
    break;
    }
    default:
    {
        cout<<"Invalid input,shifting you to main menu!"<<endl;
        mainMenu();
        break;
    }

}
}
};
//register and details are required here therefore will use concept of multiple inheritance
float Registration::charges;
int Registration::choice;


class ticket :public Registration,Details//multiple inheritance because wee have to use the data of details and Registration class
{
public:
 void bill()
{
string destination="";
ofstream outf("records.txt");
{
    outf<<"_____________________Luxor Airlines____________________"<<endl;
    outf<<"_____________________Ticket____________________________"<<endl;
    outf<<"___________________________________________________________"<<endl;
    outf<<"Customer ID:"<<Details::cID<<endl;
    outf<<"Customer Name:"<<Details::name<<endl;
    outf<<"Customer Gender:"<<Details::gender<<endl;
    outf<<"\t Description"<<endl<<endl;
    if(Registration::choice==1)
    {
        destination="Dubai";
    }
   else if(Registration::choice==2)
    {
        destination="Canada";
    }
   else if(Registration::choice==3)
    {
        destination="USA";
    }
    else if(Registration::choice==4)
    {
        destination="UK";
    }
   else if(Registration::choice==5)
    {
        destination="Australia";
    }

    else if(Registration::choice==6)
    {
        destination="India";
    }
    else if(Registration::choice==7)
    {
        destination="Europe";
    }
    outf<<"Destination\t\t"<<destination<<endl;
    outf<<"Flight cost :\t\t"<<Registration::charges<<endl; 
}
outf.close();
}
void display()
{

    ifstream ifs("records.txt");
    {
        if(!ifs)
        {
            cout<<"File error!"<<endl;
        }
        while(!ifs.eof())
        {
            ifs.getline(arr,100);
            cout<<arr<<endl;
        }
    }
    ifs.close();
}
};
class Management 
{
public:
Management()//constructor 
{
    mainMenu();
}
};
void mainMenu()
{
int lchoice;
int schoice;
int back;
cout<<"\t                  Luxor Airways \n"<<endl;
cout<<"\t_____________________Main Menu__________________"<<endl;
cout<<"\t______________________________________________"<<endl;
cout<<"\t| Press 1 to add the Customer Details  \t|"<<endl;
cout<<"\t| Press 2 to for Flight Registration   \t|"<<endl;
cout<<"\t| Press 3 for Tickets and Charges     \t|"<<endl;
cout<<"\t| Press 4 to Exit                      \t|"<<endl;
cout<<"\t______________________________________________"<<endl;
// cout<<"Enter the choice :";
// cin>>lchoice;
Details d;//object of detials
Registration r;//objects of registration
ticket t;//objects for tickets
cout<<"Enter the choice :";
cin>>lchoice;
switch(lchoice)
{
    case 1:
    {
        cout<<"_________________Customers_____________\n"<<endl;
        d.information();
        cout<<"Press any key to go back to Main Menu : ";
        cin>>back;
        if(back==1)
        {
            mainMenu();
        }
        else{
            mainMenu();
        }
        break;
    }
    case 2:
    {
        cout<<"_________Book a flight using this system_____________\n"<<endl;
        r.flight();
        break;
    }
    case 3:
    {
        cout<<"_______GET YOUR TICKET_____________\n"<<endl;
        t.bill();
        cout<<"Your ticket is printed you can collect it\n"<<endl;
        cout<<"Press 1 to display your ticket : ";
        cin>>back;
        if(back==1)
        {
            t.display();
            cout<<"Press any key to go back to mainmenu : ";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        else{
            mainMenu();
        }
        break;
    }
    case 4:
    {
        cout<<"\n\n \t_______Thank You__________"<<endl;
        exit(1);
        break;
    }
    default:
    {
        cout<<"Invalid input,Please try again\n"<<endl;
        mainMenu();
        break;
    }
}

}
int main()
{
    Management Mobj;//object of class
}