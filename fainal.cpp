#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//int index = -1;
bool found;
struct Date
{ // movie showing date
int day, month, year;
};
struct Time
{ // movie showing time
int hour, minute;
};
struct movie
{ // movie data
string mname;
string mnumber;
int movietype;
Date dob;
Time t;
};
//////////////////////////////////////////////////////////////password///////////////////////////////////////////////////
void password(string newpass)
{
string pass_M;
string pass;
pass = "Cen155e.@";
cout << "Enter a password: ";
cin >> pass_M;
for (int i = 0; i < 3; i++)
{
if (pass_M == pass)
{
cout << "you can enter now " << endl;
break;
}
else
{
cout << "the pass is wrong please enter the right pass to
let you in ";
}
}
}
void change_password(string newpass)
{
cout << "enter the new pass: ";
int len = newpass.length();
bool hasLower = false, hasUpper = false, hasDigit = false;
for (int i = 0; i < len; i++)
{
if (islower(newpass[i]))
hasLower = true;
if (isupper(newpass[i]))
hasUpper = true;
if (isdigit(newpass[i]))
hasDigit = true;
}
if (hasLower && hasUpper && hasDigit && (len >= 8))
cout << "the pass accepted " << endl;
else
cout << "the pass not accepted";
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void add_movie(movie m[])
{ // add new movie
int index = -1;
index++;
cout << "Enter movie name: ";
cin >> m[index].mname;
cout << "Enter movie number: ";
cin >> m[index].mnumber;
cout << "Enter movie Type: ";
cin >> m[index].movietype;
cout << "Enter the date of show (d/m/y): ";
cin >> m[index].dob.day >> m[index].dob.month >>
m[index].dob.year;
cout << "Enter the time of show (h/m): ";
cin >> m[index].t.hour >> m[index].t.minute;
cout << "**movie2 added**\n";
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void delete_movie(movie m[], string mnumber)
{ // delete movie
int index = -1;
found = false;
for (int i = 0; i <= index; i++)
{
if (mnumber == m[i].mnumber)
{
for (int i = 0; i < index; i++)
m[i] = m[i + 1];
index--;
cout << "**movie deleted**\n";
found = true;
break;
}
}
if (!found)
cout << "movie not found\n";
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void menu()
{ // main menu
cout << " Please choose from the menu:" << endl
<< "1 : Customer " << endl
<< "2 : Manger " << endl
<< "Your choice is : ";
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void choice1()
{ // Customer menu
cout << "Welcome Customer!" << endl
<< " Please choose from the menu:" << endl
<< "1 : Ticket Booking . " << endl
<< "2 : Show Ticket Details . " << endl
<< "3 : Back To Main Menu . " << endl
<< "Your choice is : ";
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void choice2()
{ // manger menu
cout << "Welcome Manger!" << endl;
cout << " Please choose from the menu:" << endl
<< "1 : Add New Movie ." << endl
<< "2 : Delete a Movie . " << endl
<< "3 : Back To Main Menu" << endl
<< "4 : Change password" << endl
<< "Your choice is : ";
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void TypeMenu()
{ // movie menu
cout << "
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<
endl;
cout << " The Movies Type " << endl;
cout << "
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<
endl;
cout << " which type of movies do you want ? (1/2/3)" << endl;
cout << "1- Drama" << endl;
cout << "2- Comedy" << endl;
cout << "3- Animation" << endl;
cout << " your choice is: "<< endl;
}
///////////////////////////////////////
int listMovies(int Type, movie movieArr[])
{ // for the list movies
cout << "
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<
endl;
cout << " The Movies Menu " << endl;
cout << "
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<
endl;
int movieArrSize = sizeof(movieArr);
movie typem[movieArrSize];
for (int i = 0; i < movieArrSize; i++)
{
if(movieArr[i].movietype == Type){
for (int j = 0; j < movieArrSize ; i++)
{
typem[j] = movieArr[i];
}
}
}
cout << "number: movie number: movie name:" << endl;
for (int i = 0; i < sizeof(typem); i++)
{
cout <<(i+1) << " "<< movieArr[i].mnumber << " " <<
movieArr[i].mname << endl;
}
cout << "Your choice is: (pick the movie number) "<< endl;
int pickedNum;
cin>> pickedNum;
if (typeid(pickedNum).name() != "int")
{
cout << "Wrong input";
}
return pickedNum;
}
//////////////////////////////////////
void movie1()
{
cout << "
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<
endl;
cout << " The Movies Menu " << endl;
cout << "
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<
endl
<< endl;
cout << "These are the Dramas movies for today which movie do
you want to watch? (1/2): " << endl;
cout << "1- Titanic" << endl;
cout << "2- The Shawshank Redemption" << endl;
cout << " your choice is: ";
}
void movie2()
{
cout << "
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<
endl;
cout << " The Movies Menu " << endl;
cout << "
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<
endl
<< endl;
cout << "These are the Comedy movies for today which movie do
you want to watch? (1/2): " << endl;
cout << "1- The Mask" << endl;
cout << "2- Mr.Bean" << endl;
cout << " your choice is: ";
}
void movie3()
{
cout << "
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<
endl;
cout << " The Movies Menu " << endl;
cout << "
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<
endl
<< endl;
cout << "These are the Animation movies for today which movie
do you want to watch? (1/2): " << endl;
cout << "1- SHREK" << endl;
cout << "2- The Little Mermaid" << endl;
cout << " your choice is: ";
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void PrintTicket(movie Movie)
{
ofstream OutTicket;
OutTicket.open("Movie.txt");
int random = rand() % 100;
int price = 65;
string alphabet[5] = {"A", "B", "C", "D", "E"};
string numbers[4] = {"1", "2", "3", "4"};
string seat = alphabet[rand() % 5] + numbers[rand() % 4];
OutTicket << "================================" << endl;
OutTicket << " Welcome to our Ticket System " << endl;
OutTicket << "================================" << endl;
OutTicket << "Ticket Number: " << random << endl;
OutTicket << "Seat Number: " << seat << endl;
OutTicket << "Movie Name: " <<  << endl;
OutTicket<<*day<<"/"<<*month<<"/"<<*year;
OutTicket << "Price: " <<price <<"SR"<< endl;
OutTicket << "========== THANK YOU ==========" << endl;
OutTicket.close();
}
/////////////////////////////main/////////////////////////////////////
int main()
{
cout<<"-------------------------------------------------------------------"<<endl
 <<"WELCOM TO C++ CINEMA"<<endl
 <<"-----------------------------------------------------------------------";
 int num1,num2,num3,num4;
int *day , *month ,*year;
 int D=25 , M= 06 ,Y=2022;
 day=&D;
 month=&M;
 year=&Y;

 menu(); // show the main menu
 cin>>num1;
 if(num1 == 1 ){
 choice1();// show the Customer menu
 cin>>num2;
 if(num2== 1){ 
 TypeMenu();
 cin>>type1;
 /*drama*/
  if(Type1 == 1){
 movie1();
 cin>>num4;
 if (num4== 1){
 cout<<" You want to watch Titanic"<<endl;
 OutTicket>>num4;
 }
 else if (num4== 2){
 cout<<" You want to watch The Shawshank Redemption"<<endl;
OutTicket>>num4;
 }
 else 
 cout<<" You did not choose the right number!! "<<endl;
 } 
 /*comedy*/
  else if(Type1==2){
 movie2();
 cin>>num4;
 if(num4== 1){
 cout<<" You want to watch The Mask"<<endl;
OutTicket>>num4;
 }
 } else if (num4 == 2){
 cout<< "You want to watch Mr.Bean"<<endl;
 OutTicket>>num4;
 }
 else 
 cout<<"You did not choose the right number!!"<<endl;
 
 /*Animation*/
  else if (Type1==3){
 movie3();
cin>>num4;
 if(num4== 1){
 cout<<" You want to watch SHREK"<<endl;
 OutTicket>>num4;
 }
 else if (num4== 2){
 cout<<"You want to watch The Little Mermaid"<<endl;
 OutTicket>>num4;
 }
 else if (num4==3)
 {
 OutTicket>>*day>>"/">>*month>>"/">>*year;
 PrintTicket(movie Movie);
 	
 }
 
 else
 cout<<" You did not choose the right number!!"<<endl;
 
 }
 }
}

//////////////////////////////manger menu deatelis//////////////
else if (num1 == 2)
{ // show the Manger menu
do
{
choice2();
cin >> num3;
switch (num3)
{
case 1:
if (index < size - 1)
add_movie(movieArr);
else
cout << "The class is full. You can't add new movies\n";
break;
case 2:
if (index >= 0)
{
cout << "Enter movie number to delete: ";
cin >> mnumber;
delete_movie(movieArr, mnumber);
}
else
cout << "There are no movie. " << "You can't delete\n";
break;
default:
cout << "Invalid choice!!\n\n"; } }
while (num3 != 0); }
return 0; 
}
}