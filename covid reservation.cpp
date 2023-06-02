//------------------------------------
//Assignment 3
//Question 2
//Comp218A3Q2.cpp
//written by zixin deng 40047744
//For Comp218 Section EC Winter 2022
//-------------------------------------

//this program asks user to choose their desired location and schedule of the covid vaccine by retriving information in terms of their age and doses complicated. it will print the appointment result for the user to read.

//write the library for the program
   #include <iostream>
   #include <string>
   using namespace std;

    int userAge;
    string date, location, schedule;

//create a function to display header
   void displayHeader()
   {
     cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
     cout << "   Welcome to Covid Vaccine Appointment Program!";
     cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
   }

//create a function to display schedule
   void displayschedule()
   {
     cout<< "    Age    Date    | Location            | Schedule\n";
     cout<< "    >= 55  Jan.4   | 1.Pharmacy          | 1. 10:00-10:15 AM \n";
     cout<< "    50-54  Jan.6   | 2.Jean Coutu        | 2. 10:30-10:45 AM \n";
     cout<< "    40-49  Jan.12  | 3.Olympic Stadium   | 3. 11:15-11:30 AM \n";
     cout<< "    30-39  Jan.17  | 4.Uniprix Clinique  | 4. 13:30-13:45 PM \n";
     cout<< "    20-29  Jan.19  | 5.Health Center     | 5. 15:00-15:15 PM \n";
     cout<< "    >= 18  Jan.21  |                     |    \n";
     cout<< "     < 18  N/A       N/A                   N/A         \n";
     cout<< "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
   }

//create a function to get vaccine dose.
   int getVaccineDose()
   {
       int doseReceived;
       do {
           cout << "How many Covid vaccine dose(s) completed? ";
           cin>>doseReceived;
           //cout << endl;
       } while(doseReceived<0||doseReceived>3);

      return doseReceived;
   }

//create a function to get date and age information
   string getAgeInfo(int age)
   {
       string date;
       while (age<18)
       {
         cout << "Please enter your age (>=18): ";
         cin >> age;
         //cout << endl;
       }
         
       if(age>=55) date = "Jan.4";
       else if(age>=50 && age<=54) date="Jan.6";
       else if(age>=40 && age<=49) date="Jan.12";
       else if(age>=30 && age<=39) date="Jan.17";
       else if(age>=20 && age<=29) date="Jan.19";
       else if(age>=18 ) date="Jan.21";
       userAge = age;
       return date;
    }

//create a function to get location information
   string getLocationInfo(int loc)
   {
       string location;
       string date;
       while (loc<1 || loc>5)
       {
           cout << "Please enter the location (1-5): ";
           cin >> loc;
           //cout << endl;
       }
   
       if(loc==1) location = "Pharmarcy";
       else if(loc==2) location= "Jean Coutu";
       else if(loc==3) location="Olympic Stadium";
       else if(loc==4) location="Uniprix Clinique";
       else if(loc==5) location="Health Center";
       return location;
    
   }

//write a function to read schedule
   string getScheduleInfo (int time)
   {
       while (time<1 || time>5)
       {
           cout << "Please enter the schedule (1-5): ";
           cin >> time;
           //cout << endl;
       }
       string schedule;
       if(time==1) schedule = "10:00-10:15 AM";
       else if (time==2) schedule = "10:30-10:45 AM ";
       else if(time==3) schedule = "11:15-11:30 AM";
       else if(time==4)schedule = "13:30-13:45 PM";
       else if(time==5)schedule = "15:00-15:15 PM";
       
       return schedule;
    
   }

//write a function to convert input to information needed for the result
   void processManuChoice(string choice, int& userInput)
   {
       if (choice == "age") {
           date = getAgeInfo(userInput);
       } else if (choice == "location"){
           location = getLocationInfo(userInput);
       } else if (choice == "schedule") {
           schedule = getScheduleInfo(userInput);
       }
   }

//write a function to output result
   void displayResult(int age, string location, string date, string schedule)
   {
       cout << "\nYour age is "<< age << ". You can start to take the vaccine on " << date << ".\nYour appointment is at " << location << " @ " << schedule << ". Take care!\n";
   }

//write the main function
int main()

{
  //declare variable
    int doseReceived,inputAge,locationChoice,timeChoice;

  //print header and rest of the information in the table
    displayHeader();
    displayschedule();

  //end the program if the user finished three doses and contine if need more doses
    doseReceived = getVaccineDose();
    if (doseReceived==3)
    {
        cout<<"Thank you for using Covid Vaccine Appointment Program!"<<endl;
        return 0;
    }

  //ask user to input age and verify the validity of the input
    cout << "Please enter your age (>=18): ";
    cin >> inputAge;
    //cout << endl;
    processManuChoice("age", inputAge);
    
  //ask user to input location choice and verify the validity of the input
    cout << "Please enter the location (1-5): ";
    cin >> locationChoice;
    //cout << endl;
    processManuChoice("location", locationChoice);

 //ask user to input schedule choice and verify the validity of the input
    cout << "Please enter the schedule (1-5): ";
    cin >> timeChoice;
    //cout << endl;
    processManuChoice ("schedule", timeChoice);

  //display the reult
    displayResult (userAge, location, date, schedule);

  //Display closing message
    cout << "\nThank you for using Covid Vaccine Appointment Program!\n\n";

    return 0;
}
