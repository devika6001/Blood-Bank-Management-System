//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************
#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;
//***************************************************************
//        global declaration
//****************************************************************
void Instructions(int);
void exitprogram();
char donors[8][4]={"A+","A-","B+","B-","O+","O-","AB+","AB-"};
int number_donors[]={9,2,6,7,8,0,7,1};
int number_plasma_donors[]={5,4,2,9,3,0,8,8};
//***************************************************************
//        Function declaration
//****************************************************************
void List_of_plasma_donors();
void Assign_date(int k);
void Blood_request(int z);
void plasma_request(int z);
void List_of_blood_donors();
void Instructions(int a);
void exitprogram();
//****************************************************************
//                   CLASS USED IN PROJECT//FORWARD DECLARATION
//****************************************************************
class Person_personalInfo;
class Person_HealthInfo;
class Patient;
class Donor;
class Plasma;
class Donation_camps;
class Person_personalInfo
{
           protected:
                              char email[25];
                              string phone_num,fname,lname,id,address;
                              int age;
                              char gender;
           public:
                              void getDetails()
                               {
                                            cout <<"\n# Fill the following form for the registration:\n”;
                                            cout << "------------------------------------------------"<<endl;
                                            cout << "* ID:";
srand(time(NULL));//initialize random number
generator for ID
                                            cout << (rand() %10) + 7;
                                            cout << "\n* Enter first name:";
                                            cin >>fname;
                                            cout << "* Enter last name:";
                                            cin >>lname;
                                            cout << "* Enter your address:";
cin.ignore();      //used to ignore or clear one or 
more characters from the input buffer
                                            getline(cin,address);
                                            cout << "* Enter Email ID:";
                                            cin >> email;
                                            cout << "* Enter your age:";
                                            cin>>age;
                                            while(phone_num.size() != 10)
                                            {
                                                       cout<<"* Enter your phone number:";
                                                       cin>>phone_num;
                                                       if(phone_num.size() != 10)
                                                                  cout<<"Invalid phone number! Enter again!\n";
                                            }
                                            cout<<"* Gender(F for female / M for male):";
                                            cin>> gender;
                                 }
};   //Class ends here
class Person_HealthInfo
{
           protected:
                              int dd2,mm2,yyyy2;
                              int dd1=26,mm1=4,yyyy1=2021;
                              int dd,mm,yyyy;
                              float Temp,Haemoglobin;
                             double weight, blood_pressure_d, pulse_rate,blood_pressure_s;
                             string blood_group;
           public:
                             int getHealthDetails(int z)
                             {
                                            cout << "\n\n# HEALTH INFORMATION:"<<endl;
                                            cout << "---------------------------------------------"<<endl;
                                            cout << "* Enter your body temperature(in deg celsius):";
                                            cin >> Temp;
                                            cout << "* Haemoglobin(in grams per deciliter):";
                                            cin >>Haemoglobin;
                                            cout << "* Enter your body weight(in kg):";
                                            cin >> weight;
                                            cout << "* BP(in mm Hg):\n";
                                            cout<<"* Diastolic :";
                                            cin >>blood_pressure_d;
                                            cout<<"* Systolic :";
                                            cin >>blood_pressure_s;
                                            cout << "* Enter your pulse rate(beats/min):";
                                            cin >>pulse_rate;
                                            cout << "* Enter your blood group:";
                                            cin >>blood_group;
                                            cout<<"Enter your last bold donation date in formatdd mm“
cout<<” yyyy\n";
                                            cin>>dd2>>mm2>>yyyy2;
yyyy=yyyy1-yyyy2;
                                            mm=mm1-mm2;
                                            dd=dd1-dd2;
                                            if(dd<0)
                                            {
                                                       mm--;
                                                       dd+=30;
                                            }
                                            if (mm<0)
                                            {
yyyy--;
                                                       mm+=12;
                                            }
                                            try        //Using try and catch block for exception handling
                                            {
                                                       if(mm<3&&yyyy<1)
                                                                  throw mm;
                                            }
catch(int k)
                                            {
Instructions(1);            //user informed
                                                       cout<<"--------------------------------------------“;
cout<<”---------";
                                                       cout<<"\nYour last donation must be three months “;
cout<<”prior\n";
                                                       cout<<"\nAs per the instruction for blood donation ”;
cout<<”you are not fit to donate blood\n\n";
                                                       if(z==5)
                                                       {
                                                                  
                                                                  return z;
                                                       }
getch();
exitprogram();
                                            }
				return 0;
                                 }
};   //class ends here
class Plasma:publicPerson_personalInfo
{
           private:
                         int eligiblity=0;
                         float wgt,protein;
                         float bp_d,bp_s;
                         string hname,haddress;
           public:
                        void Plasma_to_hospital()
                        {
                                 cout << "\n# Enter the details of the hospital:\n";
                                 cout << "~ Enter the name of the hospital:";
cin.ignore();       
//used to ignore or clear one or more characters from the 
            input buffer.
                                 getline(cin,hname);
                                 cout << "~ Enter the address of the hospital:";
cin.ignore();
                                 getline(cin,haddress);
                        }
                        void donate_plasma()
                        {
                                   if(eligiblity==1)
                                   {
                                              int num;
                                              char ch;
  srand(time(NULL));
                                              num=rand()%1000;
                                              cout<<"\n# PLASMA DONATION AREA";
                                              cout<<"\n=======================";
                                              cout<<"\n\n-------->Instructions";
                                              cout<<"\n#Drink lots of water before donating on your”;
  cout<<” plasma";
                                              cout<<"\n#Eat a healthy meal within two hours of your “;
  cout<<”visit";
                                              cout<<"\n#Avoid foods high in fat or cholesterol";
                                              cout<<"\n#Don't use tobacco for an hour after donating";
                                              cout<<"\n#Avoid alcohol and caffeine before and after “;
  cout<<”plasma is donated";
                                              cout<<"\n#Avoid strenuous exercise an hour before “;
  cout<<”plasma donation";
  PLASMA:cout<<"\n\n-------->Have you read all the “;
  cout<<”instructions??(y/n)";
                                              cin>>ch;
                                              if(ch=='y'||ch=='Y')  
 //using if and else ladder to check the conditions
                for plasma donation
                                              {
                                                         cout<<"Your room number is:"<<num;
  getch();
                                                         cout<<"\nPlasma donated :)) Thanks for your “;
  cout<<”donation!!\n We want you to encourage “;
  cout<<”other to donate plasma";
  getch();
  exitprogram();
                                              }
                                              else
                                              {
                                                         cout<<"Please read them carefully and little “;
  cout<<”bit fastly :))";
  getch();
                                                         goto PLASMA;  
                                   	            // one-way transfer of control  to another line 
of code
                                              }
                                   }
                                   else
                                   {
                                            cout<<"\n-------->Please undergo health checkup first!!\n"; 
getDetails();
//user want to donate plasma without entering 
                  his /her details
Plasma_health_details();
Instructions(2);
donate_plasma();
                                   }
                        }
                        void Plasma_health_details()
                        {
                                   char ch,ch1,ch2;
                                   if(age<18) //using if and else to check the conditions for plasma 
                                   {
Instructions(2);
getch();
                                            cout<<"\n\n-------->Oops !! Too young to donate plasma";
exitprogram();
                                   }
                                   else if(age>69)
                                   {
Instructions(2);
getch();
                                            cout<<"\n\n-------->Too old to donate plasma";
exitprogram();
                                   }
                                   else
                                   {
                                              cout<<"\n|----------HEALTH INFORMATION------------|";
                                              cout<<"\n#Enter your weight:";
                                              cin>>wgt;
                                              if(wgt<50)
                                              {
Instructions(2);
getch();
                                                       cout<<"\n\n-------->Sorry but you are underweight";
exitprogram();
                                              }
                                              else
                                              {
                                                         cout<<"#Are you suffering from any “;
  cout<<”chronic disease?(y/n):";
                                                         cin>>ch;
                                                         cout<<endl;
                                                         if(ch=='n'||ch=='N')
                                                         {
                                                                    cout<<"#Enter your daily protein “;
  cout<<”intake(in g):";
                                                                    cin>>protein;
                                                                    if(protein<50||protein>80)
                                                                    {
  Instructions(2);
  getch();
                                                                               cout<<"\n\n-------->Sorry!! but your“;
  cout<<” daily intake of proteins “; 
  cout<<”does not allow you to donate “;
  cout<<”plasma";
exitprogram();
                                                                    }
                                                                    else
                                                                    {
                                                                               cout<<"#Have you undergone “;
  cout<<”any Antibody Test?(y/n):";
                                                                               cin>>ch1;
                                                                               if(ch1=='Y'||ch1=='y')
                                                                               {
                                                                                          cout<<"-------->Please “;
  cout<<”submit your reports ”;
  cout<<”at the reception!!";
  getch();
                                                                                          cout<<"\nMedical“;
	  cout<<”reports approved!!";
                                                                                          cout<<"\n#Enter your “;
  cout<<”Blood pressure:”;
  cout<<”Diastolic(in mm Hg):";
                                                                                          cin>>bp_d;
                                                                                          if(!(bp_d>50&&bp_d<100))    
   //user informed why he 
        can't donate plasma
                                                                                          {
Instructions(2);
getch();
                                                                                                   cout<<"\n\n------->>”;
cout<<”Sorry but Blood“;
cout<<” pressure:”; cout<<”Diastolic is not”;
cout<<” appropriate";
exitprogram();
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                                   cout<<"#Enter “;
cout<<”your Blood “;cout<<”pressure:”;
cout<<”Systolic(in mm “; cout<<”Hg):";
                                                                                                   cin>>bp_s;
                                                                                                   if(!(bp_s>100
&&bp_d<160))
                                                                                                   {
Instructions(2);
getch();
cout<<"\n\n----“;
cout<<”---->”;
cout<<”Sorry “;
cout<<”but “;
cout<<”Blood ”;
cout<<”pressure”;
cout<<”:Systolic “;
cout<<”is not  “;
cout<<”appropria”;
cout<<”te";
exitprogram();
                                                                                                    }
                                                                                                   else
                                                                                                   {
                                                                                                              cout<<"--------->
cout<<”Blood “;
cout<<”pressure”;
cout<<” is “;
cout<<”appropria”;cout<<”te!!";
                                                                                                              cout<<"\n\n----“;
cout<<”----->”;
cout<<”Reason “;
cout<<”for “;
cout<<”donating “;
cout<<”plasma\n”;
cout<<”1.Cured “;
cout<<”from “; cout<<”corona\n”;
cout<<”2.Got “;
cout<<”vaccinat”;
cout<<”ed\n3.No”;
cout<<” reason";
                                                                                                              cout<<"\nEnte”;
cout<<”ryour “;
cout<<”choice:";
                                                                                                              cin>>ch2;
                                                                                                              if(ch==3)
                                                                                                              {
Instructions(2);
getch();
cout<<"\n”;
cout<<”\n”;
cout<<”--“;
cout<<”--“;
cout<<”----->Sorry but since you have not undergone any of the above 2 options so can't donate";                                                                                                                         exitprogram();
                                                                                                              }
                                                                                                              else
         eligibility=1;
                                                                                                   }
                                                                                          }
                                                                               }
                                                                               else
                                                                               {
Instructions(2);
getch();
                                                                                        cout<<"\n\n-------->Sorry “;
cout<<”but without Antibody “;
cout<<”test you can't donate";
exitprogram();
                                                                               }
                                                                    }
                                                         }
                                                         else
                                                         {
  Instructions(2);
  getch();
                                                                    cout<<"\n-------->Sorry but since you “;
  cout<<”are suffering from chronic disease “;
  cout<<”so can't donate plasma ";
  exitprogram();
                                                         }
                                              }
                                   }
                        }
};   //class ends here
class Donor: public Person_personalInfo, public Person_HealthInfo
{
           private:
                         string disease_name;
                         int c=0;
           public:
                        char ch;
                        void certificate();
                        void disease()
                       {
                                 cout << "* Are you suffering from any disease? [Y/N]: ";
                                 cin >> ch;
if(ch == 'y' || ch == 'Y')
                                 {
                                            cout << "~Name the disease:";
cin.ignore();
getline(cin, disease_name);
                                 }
                       }
                      void criteria1()
                      {
                                 try    //Using try and catch block for exception handling
                                 {
                                            if(!(age>=18&&age<65))
                                            {
c++;
                                                       throw age;
                                            }
                                            else if(!(pulse_rate>50 &&pulse_rate<100))
                                            {
c++;
                                                       throw 'a';
                                            }
                                            else if (Haemoglobin<12.5)
                                            {
c++;
                                                       throw Haemoglobin;
                                            }
                                            else if(weight<45)
                                            {
c++;
                                                       throw"*The donor should weigh minimum of 50 kg";
                                            }
                                 }
catch(int a)
                                 {
                                            cout<<"*The donor must be 18-65 years old.\n";
                                 }
catch(char code )
                                 {
                                            cout<<"*The donor pulse rate should be between 50 and “;
cout<<”100 without irregularities.\n";
                                 }
catch(float num)
                                 {
                                            cout<<"*The donor Hemoglobin level should be -A “;
cout<<”minimum of 12.5 g/dL.\n";
                                 }
catch(const char *str)
                                 {
                                            cout<<str;
                                 }
                      }
                      void criteria2()
                      {
                                 try         //Using try and catch block for exception handling
                                 {
if(Temp>37.5)
                                            {
c++;
                                                       throw Temp;
                                            }
                                            else if(!(blood_pressure_d>50&&blood_pressure_d<100))
                                            {
c++;
                                                       throw 'k';
                                            }
                                            else if(!(blood_pressure_s>100&&blood_pressure_s<180))
                                            {
c++;
throw  2;
                                            }
                                            else if(ch=='y'||ch=='Y')
                                            {
c++;
                                                       throw "*The donor must be physically fit";
                                            }
                                 }
catch(float num)
                                 {
                                            cout<<"*Body temperature- Should be normal, with an “;
cout<<”oral temperature not exceeding 37.5 Degree:C\n";
                                 }
catch( char c)
                                 {
                                            cout<<"*Blood pressure- Diastolic: 50-100 mm Hg\n";
                                 }
catch(int a)
                                 {
                                            cout<<"*Blood pressure-Systolic: 100-180 mm Hg\n";
                                 }
catch(const char *str1)
                                 {
                                            cout<<str1;
                                 }
                      }
                      int criteria3(int m)
                      {
                                 int room;
                                 if(c>0)      // informing the user why he can't donate blood
                                 {
                                            cout<<"-----------------------------------------------------";
                                            cout<<"\nAs per the instructions for blood donation you “;
cout<<”are not fit to donate blood\n";
                                            if(m!=5)
                                            {
getch();
exitprogram();
                                            }
                                            else
                                            {
                                                       return m;
                                            }
                                 }
                                 else
                                 {
                                            //informing the user how to proceed after he/she
           is eligible to donate blood
                                            cout<<"-----------------------------------------------------";
                                            cout<<"\nAs per our instructions for blood donation ,“;
cout<<”you are fit to donate blood\n";
                                            room= rand() % 5 + 7;
                                            cout<<"You can head to Room No  "<<room<<" for “;
cout<<”the donation process\n";
getch();
certificate();
                                            if(m==5)
{
                                                       cout<<"\nThe blood will be delivered at the “;
cout<<”entered address hospital address!!\n";
				}
getch();
exitprogram();
                                            return 0;
                                 }
                      }
};   // class ends here
void Donor::certificate()
{
            //Printing the certificate for appreciation of blood donation
            cout<<"_____________________________________________________”;
 cout<<”_____________________________________________________”;
 cout<<”________________________\n";
            cout<<"\n|*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_|~|~|~|”;
	 cout<<”~ CERTIFICATE OF APPRECIATION ~|~|~|~|_*_*_*_*_*_*_*_*”;
 cout<<”_*_*_*_*_*_*_*_*_*_*_*_*|";
            cout<<"\n_______________________________________________”;
 cout<<”_________________________________________________”;
 cout<<”________________________________\n\n\n";
            cout<<"\nThis is to certify Mr/Ms :"<<fname<<" "<<lname<<" has donate blood “;
 cout<<”on date to our blood bank.His/her blood group is "<<blood_group<<".\n";
            cout<<"We express our heartfelt gratitude to you. With your valuable “;
 cout<<”donation , you are saving so many lives .";
            cout<<"\nWe are confident that your altruistic act of blood donation will “;
 cout<<"be followed by many individuals.\nWe request you to encourage “;
 cout<<”the importance of voluntary blood donation , which will tremendously”;
 cout<<” support to serve the needy patients .\n\n";
}
class Patient: public Person_personalInfo, public Person_HealthInfo
{
           private:
                         string hospital_name, hospital_address, disease;
           public:
                        void get_hospitalInfo()
                        {
                                 cout << "\n# Enter the details of the hospital:\n";
                                 cout << "~ Enter the name of the hospital:";
cin.ignore();               
                                 getline(cin,hospital_name);
                                 cout << "~ Enter the address of the hospital:";
cin.ignore();  
            //used to ignore or clear one or more characters from the 
           input buffer
                                 getline(cin,hospital_address);
                                 cout << "Enter the name of the disease you are suffering from:";
cin.ignore();
                                 getline(cin,disease);
                      }
};   //class ends here
class Donation_camps
{
           private:
                          char email[25];
                          string phone_num, name, id, address, city, msg, oname;
                          int age, dd, mm, yyyy = 2021, minutes, hours, vol;
           public:
                        void Organizer_Details()
                        {
//organizer details
                                 cout << "Enter your contact details:\n";
                                 cout << "\n* Enter your name:";
cin.ignore();
                                 getline(cin,name);
                                 cout << "* Enter your address:";
cin.ignore();
                                 getline(cin,address);
                                 cout << "* Enter Email ID:";
                                 cin >> email;
                                 cout << "* Enter your age:";
                                 cin>>age;
if(age < 18)   
           //checking condition whether user is able to organize a camp
                                 {
                                            cout << "\nYou are not yet eligible to organize a camp!\n";
exitprogram();
                                 }
                                 while(phone_num.size() != 10)
                                 {
                                            cout << "* Enter your phone number:";
                                            cin >>phone_num;
                                            if(phone_num.size() != 10)
                                                       cout << "Invalid phone number! Enteragain!\n\n”;
                                 }
                      }
                      void Camp_Details()
                      {
                                 int ch = 0;
                                 cout << "Enter the following details for the camp:\n";
while(ch <= 0 || ch >= 3)
                                 {
                                            cout << "\nWhich camp do you want to organize?\n”;
cout<<”1.Blood Donation Camp\n2.Plasma Donation Camp\n";
                                            cout << "\nPlease enter your choice : ";
                                            cin >> ch;
                                 }
                                 cout << "\nOrganize camp in City region: ";
cin.ignore();         
           //used to ignore or clear one or more characters from the 
                  input buffer
                                 getline(cin,city);
                                 cout << "Your organization name / university name: ";
cin.ignore();
                                 getline(cin,oname);
                                 cout << "Estimated number of volunteers: ";
                                 cin >> vol;
                                 label: cout<<"Enter the date you want to organize the “;
cout<<”camp on(format dd mm yyyy): "<<endl;
                                 cout << "Date:"; cin >> dd;
                                 cout << "Month:"; cin >> mm;
                                 cout << "Year:"; cin >>yyyy;
if(yyyy - 2021 >= 0 && (mm >=1 && mm <=12))   
//checking whether date is valid or not using if-else statement
                                 {
if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10
|| mm==12)
                                            {
                                                       if(!(dd>=1 && dd<=31))
                                                       {
                                                                  cout<<"\nInvalid date...Enter again!\n";
                                                                  goto label;
                                                       }
                                            }
                                            else if(mm==4 || mm==6 || mm==9 || mm==11)
                                            {
                                                       if(!(dd>=1 && dd<=30))
                                                       {
                                                                  cout<<"\nInvalid date...Enter again!\n";
                                                                  goto label;   
                                                        }
                                            }
                                            else if(mm==2)
                                            {
                                                       if(!(dd>=1 && dd<=29))
                                                       {
                                                                  cout<<"\nInvalid date...Enter again!\n";
                                                                  goto label;
                                                       }
                                            }
                                            else
                                            {
                                                       cout<<"\nInvalid date...Enter again!\n";
                                                       goto label;
                                            }
                                 }
                                 else
                                 {
                                            cout<<"\nInvalid date...Enter again!\n";
                                            goto label;
                                 }
                                 time: cout<<"\nEnter the time of camp(24 hours format)"<<endl;
                                 cout << "Hours:";
                                 cin >> hours;
                                 cout << "Minutes:";
                                 cin >> minutes;
if(minutes >= 60)         //checking whether time entered is correct
hours+=minutes/60;    or not using if-else statements
if(hours >= 8 && hours <= 19)
                                            cout << "You can organize the camp!\nOne of our “;
cout<<”volunteers will contact you soon to help you “;
cout<<”with the organization of camp.\n";
                                 else
                                 {
                                            cout << "Please choose some other time\n";
                                            goto time;
                                 }
                                 cout<<"\nDo you want to leave any message for us? ";
cin.ignore();
                                 getline(cin,msg);        
     			//used to read a string or a line from an input stream
                      }
};   //class ends here
void Assign_date(int k)
{
           Donor D;   //object of class donor
           int d,m,y,choice;
           cout<<"\n\n\t\t--------------------------------------------------------------\n";
           cout<<"\t\t|Hi ,Thank you for being a valuable part of our life center. |\n\t”;
cout<<\t|We would like to know whether you would like to donate blood”;
cout<<”|\n\t\t|\t\t\t\t\t\t\t     |";
           cout<<"\n\t\t|\t\t1.Today\t\t\t\t\t     | \n\t\t|\t\t2.Or any other day”;
cout<<”\t\t\t     |";
           cout<<"\n\t\t--------------------------------------------------------------\n";
           do
           {
                      cout<<"\n\n\t\tEnter your choice :";
                      cin>>choice;
                      if(choice==1)
                      {
                                 cout<<"\n\nYou can proceed with the registration process ,”;
cout<<”Thank you\n\n";
                                 if(k==1)     //if user books his appointment before
 registering himself
                                 {
D.getDetails();
                                            D.getHealthDetails(0);
                                            D.disease();
Instructions(1);
                                            D.criteria1();
                                            D.criteria2();
                                            D.criteria3(1);
                                 }
                      }
                      else if(choice==2)
                      {
if(k==1)
 {
           cout<<"\n\nYou need to register yourself first\n";
           D.getDetails();
  }
                                 DATE;cout<<"\n\n\t\tEnter the day on which you want to “;
cout<<”donate in format dd mm yyyy"<<endl;
                                 cout<<"\n\t\t";
                                 cin>>d;
                                 cout<<"\t\t";
                                 cin>>m;
                                 cout<<"\t\t";
                                 cin>>y;
if(y - 2021 >= 0 && (m >=1 && m <=12))       
//checking whether date is valid or not using if-else statement
                                 {
                                            if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
                                            {
                                                       if(!(d>=1 && d<=31))
                                                       {
                                                                  cout<<"\nInvalid date...Enter again!\n";
                                                                  goto DATE;
                                                       }
                                            }
                                            else if(m==4 || m==6 || m==9 || m==11)
                                            {
                                                       if(!(d>=1 && d<=30))
                                                       {
                                                                  cout<<"\nInvalid date...Enter again!\n";
                                                                  goto DATE;         
//one-way transfer of control to another
         line of code
                                                       }
                                            }
                                            else if(m==2)
                                            {
                                                       if(!(d>=1 && d<=29))
                                                       {
                                                                  cout<<"\nInvalid date...Enter again!\n";
                                                                  goto DATE;
                                                       }
                                            }
                                            else
                                            {
                                                       cout<<"\nInvalid date...Enter again!\n";
                                                       goto DATE;
                                            }
                                 }
                                 else
                                 {
                                            cout<<"\nInvalid date...Enter again!\n";
                                            goto DATE;
                                 }
                                 if(y==2021)
                                 {
                                     int dd1=8,mm1=5,yyyy1=2021;
                                     if(m<mm1)
                                     {
                                            cout<<"\nInvalid date...Enter again!\n";
                                            goto DATE;
                                     }
                                     else if(m==mm1)
                                     {
if(d<dd1)
                                         	{
cout<<"\nInvalid date...Enter again!\n";
                                                 	goto DATE;
                                          	}
                                  }
                                 cout<<"\n\n\tYour date for blood donation is registered “;
cout<<”i.e  "<<d<<"/"<<m<<"/"<<y;
                                 cout<<"\n\tYou are requested to look through the “;
cout<<”instructions carefully\n\n";
getch();
Instructions(1);
getch();
exitprogram();
                      }
                      else
                                 cout<<"\t\tWrong input ";
}while(!(choice==1||choice==2));
}
void Blood_request(int z)
{
           int flag=0,unit,i,amount,flag1=0;
           int mode,mode1;
           Donor P;
           Patient Pt;
           int bill,acc[20];
           int num;
           char ch1[3],ch,pin[4];
           cout<<"\n\tBLOOD REQUEST";
           cout<<"\n\t|++++++++++++|";
           cout<<"\n\nEnter the blood group you want:";
           cin>>ch1;
           for(i=0;i<8;i++)
           {
                      if(strcmpi(ch1,donors[i])==0)               //use of string function
                      {
                                 if(number_donors[i]!=0)
                                 {
                                            flag=1;
                                            cout<<"Blood group Available!!";
                                            break;
                                 }
                                 else
                                            cout<<"Sorry!! Blood group not available...Kindly “;
cout<<”contact some other blood management system";
                      }
           }
           if(z==2)
           {
         Pt.getDetails();
                    Pt.get_hospitalInfo();
                    cout<<endl;
           }
           if(flag==1)
           {
                      cout<<"\nEnter the number of units you want:";
                      cin>>unit;
                      if(unit<=number_donors[i])  //checking whether number of units available
                      {
                                 cout<<"------------>Yes!!! That much unit is available :)";
                                 List_of_blood_donors();
                                 cout<<"\n\nDo you want to purchase(Y/N)?:";
                                 cin>>ch;
                                 if(ch=='Y'||ch=='y')
                                 {
                                            cout<<"------------>The Blood cost you Rs.950/- per unit";
                                            bill=950*unit;
                                            cout<<"\nBILL:"<<bill;
                                            number_donors[i]-=unit;
                                            cout<<"\n\nYou have 2 process to do the payment!!";
                                            cout<<"\n1.By cash";
                                            cout<<"\n2.By donating the blood";
                                            cout<<"\nEnter your choice:";
                                            cin>>mode;
//different modes for payment using if else statements
                                            if(mode==1)
                                            {
BILL:cout<<"\n\n\n------------>By which “;
cout<<”mode are you going to pay?";
                                                       cout<<"\n1)Cash\n2)Paytm\n3)Credit OR “;
cout<<”Debit card!\nEnter Your Choice:";
                                                       cin>>mode1;
                                                       if(mode1==1)
                                                       {
                                                                  cout<<"\n|- - - - - - - - - - - - - - - -|";
                                                                  cout<<"\n Total Amount:"<<bill;
                                                                  cout<<"\n Enter Amount tendered:";
                                                                  cin>>amount;
                                                                  cout<<" Balance Amount:"<<amount-bill;
                                                                  cout<<"\n|- - - - - - - - - - - - - - - -|";
                                                                  flag1=1;
                                                       }
                                                       else if(mode1==2)
                                                       {
                                                                  cout<<"\n------------>Total Amount to “;
cout<<”be paid:"<<bill;
                                                                  cout<<"\nPlease wait while we confirm “;
cout<<”your payment";
                                                                  cout<<"\nPayment confirmed!!";
                                                                  flag1=1;
                                                       }
                                                       else if(mode1==3)
                                                       {
                                                                  int k;
                                                                  cout<<"\nTotal Amount to be paid:"<<bill;
                                                                  cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ “;
cout<<”_ _ _ _ _";
                                                                  cout<<"\n| \t\tAccountnumber  \t|\n|\t\t";
for(k = 0;k<15;k++)
                                                                  {
                                                                             num=getch();
                                                                             acc[k]=num;
                                                                             cout<<(char)num;
                                                                  }
                                                                  cout<<"\t\t|";
                                                                  k=0;
                                                                  cout<<"\n|\t\t   Pin \t\t\t|\n|\t\t   ";
while( k<4)
                                                                  {
                                                                             pin[i]=getch();
                                                                             cout<<"*";
                                                                             k++;
                                                                  }
                                                                  cout<<"\t\t\t|";
                                                                  cout<<"\n|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ “;
cout<<”_ _ _ _ _|";
                                                                  flag1=1;
                                                       }
                                                       else
                                                       {
                                                                  cout<<"Invalid number entered!!";
                                                                  cout<<"\nKindly Enter a valid number!!\n";
                                                                  goto BILL;   //one way transfer control 
to another line
                                                       }
                                                       if(flag1==1)
                                                                  cout<<"\nThe blood will be delivered “;
cout<<”at the entered address hospital ”;cout<<”address!!";
                                            }
                                            else
                                            {
cout<<"The person whose going to donate blood “;
 cout<<”from your side should register as a donor “;
 cout<<”now ";
P.getDetails();
                                                       int a=P.getHealthDetails(5);
if(a==5)
                                                        {
                                                             	cout<<"\n\Sorry you can't donate the blood”; 
cout<<”,you need to purchase it only\n";
                                                              	 goto BILL;
                                                        } 
P.disease();
Instructions(1);
P.criteria1();
P.criteria2();
                                                       int k=P.criteria3(5);
getch();
if(k==5)
                                                        {
                                                             	cout<<"\n\Sorry you can't donate the blood”; 
cout<<”,you need to purchase it only\n";
                                                              	 goto BILL;
                                                        } 

                                            }
                                 }
                                 else
                                            cout<<"No problem!! You can contact us anytime for “;
cout<<”the need of blood :))";
                      }
                      else
                                 cout<<"Sorry!! That much unit is not available...Kindly contact “;
cout<<”some other blood management system";
           }
}
void plasma_request(int z)
{
           char ch1[4];
           int num,d,m;
           Plasma P1;
           char time[3];
           int c=1,k;
           cout<<"\n\n||=||=||=||=||=|| PLASMA REQUEST ||=||=||=||=||=||=||";
BLOODGROUP:cout<<"\nEnter the blood group of the plasma you want:";
           cin>>ch1;
           int i;
for(int i=0;i<8;i++)
           {
                      if(strcmpi(ch1,donors[i])==0)    //use of string function
                      {
                                 k=i;
                                 c=0;
                      }
           }
           if(c!=0)
           {
                      cout<<"-------->Sorry!! Invalid Blood group";
                      goto BLOODGROUP;   
//one-way transfer of control to another line of code
           }
           if(z==3)
           {
                      cout<<"\n-------->Please Enter your details first !!\n";
                      P1.getDetails();
                      P1.Plasma_to_hospital();
                      cout<<"\n\n||=||=||=||=||=|| PLASMA REQUEST ||=||=||=||=||=||=||";
           }
           if(number_plasma_donors[k]!=0)    //checking whether number of units available
           {
                   	 cout<<"\n\n-------->Blood group available";
                   	 List_of_plasma_donors();
 DONOR:cout<<"\nWhen we u want our donor to reach hospital?";
                    	 cout<<"\n1.Within 24 hours\n2.On the required date";
                    	 cout<<"\nEnter your choice:";
                    	 cin>>num;
                       if(num==1)
                      {      
      // informing user how to proceed
                            cout<<"-------->OKAY!! So our donor will reach at hospital “;
      cout<<”within 24 hours";
                            cout<<"\n-------->No need of Billing!! Consider this as a Gift “;
      cout<<”from our side :))";
      getch();
      exitprogram();
                    }
                    else if(num==2)
                    {
                            cout<<"-------->Enter the date:-";
                            cout<<"\nDay:";
                            cin>>d;
                            cout<<"Month:";
                            cin>>m;
                            cout<<"Time:";
                            cin>>time;
                            cout<<"-------->OKAY!! So our donor will reach at hospital on “;
      cout<<”the required day at the required timing";
                            cout<<"\n-------->No need of Billing!! Consider this as a Gift from “;
      cout<<”our side :))";
      getch();
      exitprogram();
                    }
                    else
                    {
                            cout<<"Enter a valid number!!";
                            goto DONOR;  
      //one-way transfer of control to another line of code
                    }
           }
           else
           {
                    	cout<<"\nSorry!! Plasma not available...Kindly contact some “;
        	 cout<<”other blood management system";
getch();
exitprogram();
           }
}
void List_of_blood_donors()
{
//printing the list of blood donors
           cout<<"\n\t LIST OF BLOOD DONORS";
           cout<<"\n\t ||==================||";
           cout<<"\n|----------------------------------|";
           cout<<"\n|   Blood Group   |   No Of Units  |";
           cout<<"\n|----------------------------------|";
           //using two for loops in order to manage spaces
for(int i=0;i<6;i++)
           {
                      cout<<"\n|        "<<donors[i]<<"       |       "<<number_donors[i]<<"        |";
           }
for(int i=6;i<8;i++)
           {
                      cout<<"\n|        "<<donors[i]<<"      |       "<<number_donors[i]<<"        |";
           }
           cout<<"\n|----------------------------------|";
}
void List_of_plasma_donors()
{
//printing the list of plasma donors
           cout<<"\n\t LIST OF PLASMA DONORS";
           cout<<"\n\t ||==================||";
           cout<<"\n|----------------------------------|";
           cout<<"\n|   Blood Group   |   No Of People |";
           cout<<"\n|----------------------------------|";
           //using two for loops in order to manage spaces
for(int i=0;i<6;i++)
           {
                      cout<<"\n|        "<<donors[i]<<"       |       "<<number_plasma_donors[i];
		cout<"        |";
           }
for(int i=6;i<8;i++)
           {
                      cout<<"\n|        "<<donors[i]<<"      |       "<<number_plasma_donors[i];
cout<<”     |";
           }
           cout<<"\n|----------------------------------|";
}
void exitprogram()
{
//calling the exit function
           cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~”;
cout<<”~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~”;
cout<<”~~~~~~~~\n";
           cout << "~ THANK YOU! :)\n\n~ Developed By-\n\tAnanya  :) \n\tDevika “;
cout<<”Gupta :) \n\tDrishika Chauhan :)  \n";
           cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~”;
cout<<”~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~”;
cout<<”~~~~~~~\n";
exit(0);
}
void Instructions(int a)
{
           if(a==1)
           {
 //***************************************************************
                            //        function to open/read from file
//****************************************************************
                           string line;
                           fstream myfile("INSTRUCTIONS1.txt");
                           if(myfile.is_open())
                           {
                                    while(getline(myfile,line))
                                    {
                                            cout<<line<<"\n";
                                    }
    myfile.close();
                                    cout<<endl<<endl;
                            }
                            else
                            {
                                   cout<<"Unable to open\nMake sure you have file on your system";
getch();
exitprogram();
                            }
           }
           else if(a==2)
           {
//***************************************************************
                            //        function to open/read from file                           //****************************************************************
                           string line1;
                           fstream myfile1("INSTRUCTIONS2.txt");
                           if(myfile1.is_open())
                           {
                                    while(getline(myfile1,line1))
                                    {
                                               cout<<line1<<"\n";
                                    }
                                    myfile1.close();
                                    cout<<endl<<endl;
                            }
                            else
                            {
                                    cout<<"Unable to open\nMake sure you have file on your system";
   getch();
  exitprogram();
                            }
           }
}
int main()
{
//main function
           cout<<"\n**************\t\t\t\t\t\t\t\t\t\t\t         *************";
           cout<<"\n**************\t\t\t\t\t\t\t\t\t\t\t         *************";
           cout<<"\n______________________________________________”;
cout<<”_____________________________________________________”;
cout<<”___________________\n";
cout<<"\n|*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_|~|~|~|”;
cout<<”~ BLOOD BANK~|~|~|~|_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*”;
cout<<”_*_*_|";
           cout<<"\n___________________________________________________”;
cout<<”_____________________________________________________”;
cout<<”______________";
           cout<<"\n\n**************\t\t\t\t\t\t\t\t\t\t\t         *************";
           cout<<"\n**************\t\t\t\t\t\t\t\t\t\t\t         *************";
           int ch = 0,num1,num2,num3;
           //object of class
           Donor D;
           int x,y;
           Patient Pt;
           Plasma Pl;
           Donation_camps b;
           while(ch <= 0 || ch >= 5)            //use of while loop for menu base program
           {
                      cout<<"\n\n||==============================================||";
                      cout<<"\n|| USE:\t\t\t\t\t\t||\n|| 1) Register as a donor\t\t\t||\n|| ";
                      cout<<"2) Register as a patient\t\t\t||\n|| ";
                      cout<<"3) Organize Blood or Plasma Donation Camps\t||\n|| ";
                      cout<<"4) Exit\t\t\t\t\t||\n";
                      cout<<"||==============================================||";
                      cout<<"\n\nEnter your choice:";
                      cin >> ch;
                      switch(ch)   //use of switch cases for menu based program
                      {
                                 case 1:while(1)
                                           {
                                                         system("cls");   //clear console
                                                         cout<<"\n\t\t\t||+||+||+||+||+|| DONOR”;
  cout<<” ||+||+||+||+||+||";
  CHOICE:cout<<"\n\n|-------------------------“;
  cout<<-------|";
                                                         cout<<"\n| # What do you want to donate?? |";
                                                         cout<<"\n| USE:\t\t\t\t |\n| 1.Blood\t\t\t |\n”;
  cout<<”| 2.Plasma\t\t\t |\n| 3.Exit\t\t\t |";
                                                         cout<<"\n|--------------------------------|";
                                                         cout<<"\n\n Kindly enter your choice:";
                                                         cin>>x;
                                                         if(x==1)
                                                         {
                                                                  path2:system("cls");
                                                                  cout<<"\nWe are really very happy “;
cout<<”from your such a great initiative...";
                                                                  cout<<"\nKindly go through the “;
cout<<”options given below:\n\n1.Details\n2.”;
cout<<”Instructions\n3.Assign Date\n4.Exit";
                                                                  cout<<"\n\nEnter your choice:";
                                                                  cin>>num1;
                                                                  switch(num1)
                                                                  {
                                                                             case 1:D.getDetails();
                                                                                        Assign_date(0);
                                                                                        D.getHealthDetails(0);
                                                                                        D.disease();
Instructions(1);
                                                                                        D.criteria1();
                                                                                        D.criteria2();
                                                                                        D.criteria3(1);
                                                                                        break;
                                                                             case 2:Instructions(1);
getch();
                                                                                        goto path2;
                                                                                        break;
                                                                             case 3:Assign_date(1);
                                                                                        break;
                                                                             case 4:exit(0);
                                                                                        break;
default:cout<<"Please Enter a “;
  cout<<”validnumber!!";
                                                                  }
getch();
                                                         }
                                                         else if(x==2)
                                                         {
                                                                  path1:system("cls");  //clear console
                                                                  cout<<"We are really very happy from “;
cout<<”your such a great initiative...";
                                                                  cout<<"\nKindly go through the options “;
cout<<”given below:\n\n1.Details\n2.”;
cout<<”Instructions\n3.Donate plasma\n4.”;
cout<<”Exit";
                                                                  cout<<"\n\nEnter your choice:";
                                                                  cin>>num1;
                                                                  switch(num1)
                                                                  {
                                                                             case 1:Pl.getDetails();
Pl.Plasma_health_details();
Instructions(2);
Pl.donate_plasma();
                                                                                       break;
                                                                             case 2:Instructions(2);
getch();
                                                                                       goto path1;
                                                                                       break;
                                                                             case 3:Pl.donate_plasma();
                       						break;
                                                                             case 4:exit(0);
                                                                                        break;
default:cout<<"Please Enter a “;
  cout<<”valid number!!";
                                                                  }
 	 getch();
                                                         }
                                                         else if(x==3)
                                                         {
getch();
exitprogram();   //function to  exit program
                                                         }
                                                         else
                                                         {
                                                                  cout<<"Please enter a valid choice!!";
                                                                  goto CHOICE;
                                                         }
                                               }
                                              break;
                                 case 2:while(1)
                                              {
                                                         int choice;
                                                         system("cls"); //clear console
                                                         cout<<"\n\t//#//#//#//#//#//#//#//#//#”;
  cout<<”// PATIENT //#//#//#//#//#//#//#”;
  cout<<”//#//#//#//#//";
  PATIENT:cout<<"\n\n|-----------------------------“;
  cout<<”---|";
                                                         cout<<"\n| # What do you want??\t\t |”;
  cout<<”\n| USE:\t\t\t\t |\n| 1.Blood\t\t\t |”;
  cout<<”\n| 2.Plasma\t\t\t |\n| 3.Exit\t\t\t |";
                                                         cout<<"\n|--------------------------------|";
                                                         cout<<"\n\n Enter your choice:";
                                                         cin>>y;
                                                         if(y==1)
                                                         {
                                                                  path3:system("cls");
                                                                  cout<<"We are happy to help...\nKindly go “;
cout<<”through the options given below:\n";
                                                                  cout<<"\n1.Details\n2.Blood requests\n3.”;
cout<<”List of Blood Donors\n4.Exit";
                                                                  cout<<"\n\nEnter your choice:";
                                                                  cin>>num2;
                                                                  switch(num2)       //using switch-case 
                                                                  {
                                                                             case 1:Pt.getDetails();
                                                                                       Pt.get_hospitalInfo();
                                                                                       Blood_request(0);
                                                                                       break;
                                                                             case 2:Blood_request(2);
                                                                                        break;
                                                                             case 3:List_of_blood_donors();
getch();
                                                                                        goto path3;
                                                                                        {
                          							break;
                                                                                        }
                                                                             case 4:exit(0);
                                                                                        break;
default:cout<<"Please Enter a “;
             cout<<”valid number!!";
                                                                  }
getch();
                                                       }
                                                       else if(y==2)
                                                       {
path:system("cls");
                                                                  cout<<"We are happy to help...Kindly go “;
cout<<”through the options given below:\n";
                                                                  cout<<"\n\n1.Details\n2.Plasma requests\n3”;
cout<<”.List of Plasma Donors\n4.Exit";
                                                                  cout<<"\nEnter your choice:";
                                                                  cin>>num2;
                                                                  switch(num2)         //using switch case
                                                                  {
                                                                             case 1:Pl.getDetails();
Pl.Plasma_to_hospital();
                                                                                       plasma_request(0);
                                                                                       break;
                                                                             case 2:plasma_request(3);
                                                                                        break;
                                                                             case 3:List_of_plasma_donors();
getch();
                                                                                        goto path;
                                                                                        {
                                                                                                   break;
                                                                                        }
                                                                             case 4:exit(0);
                                                                                        break;
default:cout<<"Please Enter a “;
  cout<<”valid number!!";
                                                                  }
getch();
                                                       }
                                                       else if(y==3)
                                                       {
getch();
exitprogram(); //calling function for exit
                                                       }
                                                       else
                                                       {
                                                                  cout<<"Please enter a valid choice!!";
                                                                  goto PATIENT;
                                                       }
                                              }
                                            break;
                                 case 3:while(1)
                                              {
                                                         system("cls");   //clear the console
                                                         cout<<"\n\t|~~|*_*_*_*_*_*_ BLOOD/PLASMA ”;
  cout<<”DONATION CAMPS_*_*_*_*_*_|~~|";
                                                         cout<<"\n\n|--------------------------------------“;
  cout<<”---------------------------------------------|";
                                                         cout<<"\n| # To organize a blood or “;
  cout<<”plasma donation camp, fill the following “;
  cout<<”information:    |"<<endl;
                                                         cout<<"| USE:\t\t\t\t\t\t\t\t\t\t    |\n”;
  cout<<”| 1.Organizer's Contact Details \t\t\t\t\t”;
  cout<<”\t    |\n| 2.Blood Donation Camp Details \t”;
  cout<<”\t\t\t\t\t    |\n| 3.Exit\t\t\t\t\t\t\t\t”;
  cout<<”\t    |";
                                                         cout<<"\n|-------------------------------------------";
					  cout<<”----------------------------------------|";
                                                         cout<<"\n\n Enter your choice:";
                                                         cin>>num3;
                                                         cout<<endl;
                                                         switch(num3)
                                                         {
                                                                  case 1:b.Organizer_Details();
b.Camp_Details();
exitprogram();
                                                                             break;
                                                                  case 2:cout<<" First you need to 
cout<<”register yourself and then pro“;
cout<<”ceed with camp details.\n\n";
b.Organizer_Details();
b.Camp_Details();
exitprogram();
                                                                             break;
                                                                  case 3:exitprogram();
                                                                             break;
default:cout<<"Please Enter a valid number!!";
                                                         }
                                              }
                                 case 4:exitprogram();
break;
default:cout<< "Wrong choice! Enter your “;
  cout<<”choiceagain..."<<endl<<endl;
                      }
           }
           return 0;
}   //main function ends here
//***************************************************************
//                END OF PROJECT
//***************************************************************
