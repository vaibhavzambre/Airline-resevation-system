#include <iostream>
#include<fstream>
using namespace std;
void mainMenu(); // function prototype
class Management
{
public:
 Management() //constructor

 {
 mainMenu();
 }
};
class Details
{
public:
 static string name, gender;
 long long int phoneNo;
 int age;
 string address;
 static int custId;
 char arr[100];
 void information()
 {
 cout<<"\nEnter customer ID: ";
 cin>>custId;
 cout<<"\nEnter Name: ";
 cin>>name;
 cout<<"\nEnter the Age: ";
 cin>>age;
 cout<<"\nAddress: ";
 cin>>address;
 cout<<"\nEnter your Phone Number: ";
 cin>>phoneNo;
 cout<<"\nGender: ";
 cin>>gender;
 cout<<"\nYour details are saved in the system\n"<<endl;
 }
};
int Details::custId; //we need to use variables of Details class in
registration class
string Details::name;
string Details::gender;
class registration
{
public:
 static int choice;
 int choice1;
 int back;
 static float charges;
 void flights()
 {
 cout<<"\t************************"<<endl;
 cout<<"\t1. Flight to Dubai"<<endl;
 cout<<"\t2. Flight to Canada"<<endl;
 cout<<"\t3. Flight to UK"<<endl;
 cout<<"\t4. Flight to USA"<<endl;
 cout<<"\t5. Flight to Australia"<<endl;
 cout<<"\t6. Flight to Europe"<<endl;
 cout<<"\t************************"<<endl;
 cout<<"\nPress the number of country of which you want to book a
flight: "<<endl;
 cin>>choice;
 switch(choice)
 {
 case 1:
 { cout<<"-----------------------------------------------------------------
------"<<endl;
 cout<<"\t\tWelcome to Dubai Airlines \t\t"<<endl;
 cout<<"\t\tYour comfort is our priority. Enjoy the
journey."<<endl;
 cout<<"\t\tFollowing are the flights \n"<<endl;
 cout<<"1. DUB - 498"<<endl;
 cout<<"\t08-01-2022 8:00 am 3hrs Rs.17000"<<endl;
 cout<<"2. DUB - 658"<<endl;
 cout<<"\t08-01-2022 4:00 pm 10hrs Rs.30000"<<endl;
 cout<<"3. DUB - 809"<<endl;
 cout<<"\t09-01-2022 11:00 am 4hrs Rs.23000"<<endl;
 cout<<"-----------------------------------------------------------------
------"<<endl;
 cout<<"\nSelect a flight you want to book: ";
 cin>>choice1;
 if(choice1==1)
 {
 charges=17000;
 cout<<"\nYou have successfully booked a flight to Dubai,
DUB - 498"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else if(choice1==2)
 {
 charges=30000;
 cout<<"\nYou have successfully booked a flight to Dubai,
DUB - 659"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else if(choice1==3)
 {
 charges=23000;
 cout<<"\nYou have successfully booked a flight to Dubai,
DUB - 809"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else
 {
 cout<<"Invalid input, shifting to the previous menu"<<endl;
 flights();
 }
 cout<<"Press 1 to go back to Main Menu"<<endl;
 cin>>back;
 if(back==1)
 {
 mainMenu();
 }
 else
 {
 cout<<"Invalid input";
 }
 break;
 }
 case 2:
 { cout<<"-----------------------------------------------------------------
------"<<endl;
 cout<<"\t\t Welcome to Canada Airlines \t\t"<<endl;
 cout<<"\t\tYour comfort is our priority. Enjoy the
journey."<<endl;
 cout<<"\t\tFollowing are the flights \n"<<endl;
 cout<<"1. CA - 189"<<endl;
 cout<<"\t08-01-2022 4:00 am 17hrs Rs.67000"<<endl;
 cout<<"2. CA - 158"<<endl;
 cout<<"\t08-01-2022 2:00 pm 20hrs Rs.59000"<<endl;
 cout<<"3. CA - 109"<<endl;
 cout<<"\t09-01-2022 12:00 am 24hrs Rs.70000"<<endl;
 cout<<"------------------------------------------------------------------
-----"<<endl;
 cout<<"\nSelect a flight you want to book: "<<endl;
 cin>>choice1;
 if(choice1==1)
 {
 charges=67000;
 cout<<"\nYou have successfully booked a flight to Canada
CA - 189"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else if(choice1==2)
 {
 charges=59000;
 cout<<"\nYou have successfully booked a flight to Canada,
CA - 158"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else if(choice1==3)
 {
 charges=70000;
 cout<<"\nYou have successfully booked a flight to Canada,
CA - 109"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else
 {
 cout<<"Invalid input, shifting to the previous menu"<<endl;
 flights();
 }
 cout<<"Press 1 to go back to Main Menu"<<endl;
 cin>>back;
 if(back==1)
 {
 mainMenu();
 }
 else
 {
 cout<<"Invalid input";
 }
 break;
 }
 case 3:
 { cout<<"-----------------------------------------------------------------
------"<<endl;
 cout<<"\t\tWelcome to United Kingdom Airways \t\t"<<endl;
 cout<<"\t\tYour comfort is our priority. Enjoy the
journey."<<endl;
 cout<<"\t\tFollowing are the flights \n"<<endl;
 cout<<"1. UK - 798"<<endl;
 cout<<"\t08-01-2022 11:00 am 7hrs Rs.44000"<<endl;
 cout<<"------------------------------------------------------------------
-----"<<endl;
 cout<<"\nSelect a flight you want to book: "<<endl;
 cin>>choice1;
 if(choice1==1)
 {
 charges=44000;
 cout<<"\nYou have successfully booked a flight to UK,
DUB - 498"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else
 {
 cout<<"Invalid input, shifting to the previous menu"<<endl;
 flights();
 }
 cout<<"Press 1 to go back to Main Menu"<<endl;
 cin>>back;
 if(back==1)
 {
 mainMenu();
 }
 else
 {
 cout<<"Invalid input";
 }
 break;
 }
 case 4:
 { cout<<"-----------------------------------------------------------------
------"<<endl;
 cout<<"\t\tWelcome to USA Airways \t\t"<<endl;
 cout<<"\t\tYour comfort is our priority. Enjoy the
journey."<<endl;
 cout<<"\t\tFollowing are the flights \n"<<endl;
 cout<<"1. US - 567"<<endl;
 cout<<"10-01-2022 8:00 am 24hrs Rs.67000"<<endl;
 cout<<"2. US - 234"<<endl;
 cout<<"11-01-2022 6:00 pm 20hrs Rs.77000"<<endl;
 cout<<"3. US - 409"<<endl;
 cout<<"13-01-2022 11:00 am 17hrs Rs.83000"<<endl;
 cout<<"------------------------------------------------------------------
-----"<<endl;
 cout<<"\nSelect a flight you want to book: "<<endl;
 cin>>choice1;
 if(choice1==1)
 {
 charges=67000;
 cout<<"\nYou have successfully booked a flight to USA,
US - 567"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else if(choice1==2)
 {
 charges=77000;
 cout<<"\nYou have successfully booked a flight to USA,
US - 234"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else if(choice1==3)
 {
 charges=83000;
 cout<<"\nYou have successfully booked a flight to USA,
US - 409"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else
 {
 cout<<"Invalid input, shifting to the previous menu"<<endl;
 flights();
 }
 cout<<"Press 1 to go back to Main Menu"<<endl;
 cin>>back;
 if(back==1)
 {
 mainMenu();
 }
 else
 {
 cout<<"Invalid input";
 }
 break;
 }
 case 5:
 { cout<<"-----------------------------------------------------------------
------"<<endl;
 cout<<"\t\tWelcome to Australian Airways \t\t"<<endl;
 cout<<"\t\tYour comfort is our priority. Enjoy the
journey."<<endl;
 cout<<"\t\tFollowing are the flights \n"<<endl;
 cout<<"1. As - 697"<<endl;
 cout<<"\t18-01-2022 9:00 am 10hrs Rs.44000"<<endl;
 cout<<"2. As- 154"<<endl;
 cout<<"\t19-01-2022 7:00 pm 12hrs Rs.40000"<<endl;
 cout<<"3. As - 708"<<endl;
 cout<<"\t20-01-2022 11:00 am 14hrs Rs.34000"<<endl;
 cout<<"------------------------------------------------------------------
-----"<<endl;
 cout<<"\nSelect a flight you want to book: "<<endl;
 cin>>choice1;
 if(choice1==1)
 {
 charges=44000;
 cout<<"\nYou have successfully booked a flight to
Australia, As - 697"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else if(choice1==2)
 {
 charges=40000;
 cout<<"\nYou have successfully booked a flight to
Australia, As - 154"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else if(choice1==3)
 {
 charges=34000;
 cout<<"\nYou have successfully booked a flight to
Australia, As - 708"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else
 {
 cout<<"Invalid input, shifting to the previous menu"<<endl;
 flights();
 }
 cout<<"Press 1 to go back to Main Menu"<<endl;
 cin>>back;
 if(back==1)
 {
 mainMenu();
 }
 else
 {
 cout<<"Invalid input";
 }
 break;
 }
 case 6:
 {
 cout<<"------------------------------------------------------------------
-----"<<endl;
 cout<<"\t\tWelcome to European Airlines \t\t"<<endl;
 cout<<"\t\tYour comfort is our priority. Enjoy the
journey."<<endl;
 cout<<"\t\tFollowing are the flights \n"<<endl;
 cout<<"1. EU - 127"<<endl;
 cout<<"\t21-01-2022 2:00 pm 14hrs Rs.36000"<<endl;
 cout<<"2. EU - 204"<<endl;
 cout<<"\t23-01-2022 6:00 pm 20hrs Rs.47000"<<endl;
 cout<<"3. EU - 209"<<endl;
 cout<<"\t13-01-2022 11:00 am 17hrs Rs.43000"<<endl;
 cout<<"------------------------------------------------------------------
-----"<<endl;
 cout<<"\nSelect a flight you want to book: "<<endl;
 cin>>choice1;
 if(choice1==1)
 {
 charges=36000;
 cout<<"\nYou have successfully booked a flight to Europe,
EU - 127"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else if(choice1==2)
 {
 charges=47000;
 cout<<"\nYou have successfully booked a flight to Europe,
EU - 204"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else if(choice1==3)
 {
 charges=43000;
 cout<<"\nYou have successfully booked a flight to Europe,
EU - 209"<<endl;
 cout<<"You can go back and take the ticket"<<endl;
 }
 else
 {
 cout<<"Invalid input, shifting to the previous menu"<<endl;
 flights();
 }
 cout<<"Press 1 to go back to Main Menu"<<endl;
 cin>>back;
 if(back==1)
 {
 mainMenu();
 }
 else
 {
 cout<<"Invalid input";
 }
 break;
 }
 default:
 {
 cout<<"Invalid input, Shifting you to main menu"<<endl;
 mainMenu();
 break;
 }
 }
 }
};
// we need to use some variables of details and registration class,and also
we will use inheritance
float registration::charges;
int registration::choice;
class ticket:public registration, Details
{
public:
 void Bill()
 {
 string destination="";
 ofstream outf("records.txt"); // used to create or write
information in files and outf is the object of class ofstream
 {
 outf<<"\n";
 outf<<"||-----------\t\t Ticket \t\t-----------||"<<endl;

outf<<"||=============================================
============||"<<endl;
 outf<<"\t\tCustomer ID: "<<Details::custId<<endl;
 outf<<"\t\tCustomer Name: "<<Details::name<<endl;
 outf<<"\t\tCustomer gender: "<<Details::gender<<endl;
 outf<<"\t\tCustomer Phone Number:
"<<Details::phoneNo<<endl;
 cout<<endl;
 if(registration::choice==1)
 {
 destination="Dubai";
 }
 else if(registration::choice==2)
 {
 destination="Canada";
 }
 else if(registration::choice==3)
 {
 destination="UK";
 }
 else if(registration::choice==4)
 {
 destination="USA";
 }
 else if(registration::choice==5)
 {
 destination="Australia";
 }
 else if(registration::choice==6)
 {
 destination="Europe";
 }
 outf<<"\t\tDestination: \t\t"<<destination<<endl;
 outf<<"\t\tFlight cost: \t\t"<<registration::charges<<endl;

outf<<"||=============================================
============||"<<endl;
 }
 outf.close();
 }
 void displayBill()
 {
 ifstream ifs("records.txt"); // it is used to read from the file and ifs
is the object of the class ifstream
 {
 if(!ifs)
 {
 cout<<"\t\t\tFile Error!\t\t\t";
 }
 while(!ifs.eof()) //checking till the end of the file
 {
 ifs.getline(arr, 100); // getline to read the content from the
file
 cout<<arr<<endl;
 }
 }
 ifs.close();
 }
};
void mainMenu()
{
 int lchoice;
 int back;
 cout<<"\t ~~~~~~~~ Airline Reservation System ~~~~~~~~ \n";
 cout<<"\n\t\t\t Main Menu \n";

cout<<"\t_________________________________________________"
<<endl;
 cout<<"\t"<<endl;
 cout<<"\t|\t Press 1 to add Customer Details \t|"<<endl;
 cout<<"\t|\t Press 2 for Flight Registration \t|"<<endl;
 cout<<"\t|\t Press 3 for Ticket and Charges \t|"<<endl;
 cout<<"\t|\t Press 4 to exit \t|"<<endl;

cout<<"\t_________________________________________________"
<<endl;
 cout<<"Enter the choice : ";
 cin>>lchoice;
 Details d;
 registration r;
 ticket t;
 switch(lchoice)
 {
 case 1:
 {
 d.information();
 cout<<"Press 1 to go back to Main Menu"<<endl;
 cin>>back;
 if(back==1)
 {
 mainMenu();
 }
 else
 {
 cout<<"Invalid input";
 }
 break;
 }
 case 2:
 {
 cout<<"\n\t\t Book a flight using this system \t\t"<<endl;
 r.flights();
 break;
 }
 case 3:
 {
 cout<<"\t\t Get your Ticket \t\t\n"<<endl;
 t.Bill();
 cout<<"Your ticket is ready, you can see it \n"<<endl;
 cout<<"Press 1 to display your ticket "<<endl;
 cin>>back;
 if(back==1)
 {
 t.displayBill();
 cout<<"Press 1 to go back to Main Menu"<<endl;
 cin>>back;
 if(back==1)
 {
 mainMenu();
 }
 else
 {
 cout<<"Invalid input";
 }
 }
 else
 {
 cout<<"Invalid input";
 }
 break;
 }
 case 4:
 {
 cout<<"\t\t Thank You \t\t"<<endl;
 break;
 }
 default:
 {
 cout<<"Invalid Input"<<endl;
 mainMenu();
 break;
 }
 }
}
int main()
{
 Management Mobj;
}

