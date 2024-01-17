Problem Statement:
Airline reservation system is web-based system that helps in
consolidating flight data - flight schedules, seat availability, flight fares
and reservations from all airlines with the help of global distribution
systems and provides real-time inventory and rates for customers and
travel agents to book flight tickets online.

Functionalities and its Overview:
mainMenu() :
This function allows the user to select from the following options,
1.Adding customer details: this takes the user to the information
function.
2.Flight resigtration: this takes the user to the flight function.
3.Ticket and Charges: this takes the user to the Bill function.
4.Exit: this lets the user exit from the program

bill() :
This function first asks for the details of the customer, then it asks the
user to select a Destination and then displays a charge for it.
information() :
This function basically take the user details and save that information in
our system.
flights() :
This function displays all the flights available and let us select from the
given options. We can book our ticket here.
displayBill() :
This displays the Airline ticket and saves it in the txt file using file
handling.
main() :
Here we create an object for the Management class, which automaticallt
invokes the constructor inside it.