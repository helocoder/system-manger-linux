// #include<iostream>
#include<stdio.h>
// #include<windows.h>
// #include<conio.h>
// #include<stdlib.h>
// #include<cstdlib>
// #include<MMsystem.h>
// //#include"function.h"
#include<bits/stdc++.h>
using namespace std;
int login(void);
int login()
{
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t     SYSTEM MANAGER LOGIN \n\n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
   cout << "\t\t\t\t\t\t\t\tEnter Password: ";
   PlaySound(TEXT("H:\\Projects\\C++\\stm\\qwe.wav"), NULL, SND_SYNC);
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "hello_coder"){
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Granted! \n";
      PlaySound(TEXT("H:\\Projects\\C++\\stm\\Access.wav"),  NULL, SND_SYNC);
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("CLS");
      login();
   }
}

int main()
{
	system("color 0e ");

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                            SYSTEM MANAGER PROJECT                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                              -By Abhishek             |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
PlaySound(TEXT("H:\\Projects\\C++\\stm\\Enter your choice.wav"), NULL, SND_SYNC);
system("pause");
system("cls");

login();


 int i,j,k;                                                                                                                                   //ASSIGINING VARIABLE//

 //option for choice

A:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
cout<<"\n\n\t\t\t\t\t\t\tPlease, Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> ________________                              |\n";
cout<<"\t\t\t\t\t\t|             2  >> ________________                              |\n";
cout<<"\t\t\t\t\t\t|             3  >> Microsoft office                              |\n";
cout<<"\t\t\t\t\t\t|             4  >> Power off windows                             |\n";
cout<<"\t\t\t\t\t\t|             5  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
a:
system("sleep 3 ; play -q Enter your choice.wav &");
cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>i;
if(i>5||i<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto a;} //if inputed choice is other than given choice
system("clear");

if(i==5)
{

system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                 SYSTEM MANAGER                                        |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                 -Brought To You by Abhishek           |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
	PlaySound(TEXT("H:\\Projects\\C++\\stm\\Thanks.wav"), NULL, SND_SYNC);
	cout<<"\n";
	PlaySound(TEXT("H:\\Projects\\C++\\stm\\this-project.wav"), NULL, SND_SYNC);


}


//SWITCH STATEMENT//
	switch(i)
	{
	case 1:
	        cout<<"1.____________"<<endl;
			break;

	case 2:
			cout<<"2._____________"<<endl;
			break;

	case 3:
		    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
cout<<"\n\n\t\t\t\t\t\t\t   Please, Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t                                            	                   \n";
cout<<"\t\t\t\t\t\t                                                                   \n";
cout<<"\t\t\t\t\t\t              1  >> Ms Word                                        \n";
cout<<"\t\t\t\t\t\t              2  >> Ms Excel                                       \n";
cout<<"\t\t\t\t\t\t              3  >> Ms PowerPoint                                  \n";
cout<<"\t\t\t\t\t\t              4  >> Ms Access                                      \n";
cout<<"\t\t\t\t\t\t              5  >> OneNote                                        \n";
cout<<"\t\t\t\t\t\t              6  >> Back                                           \n";
cout<<"\t\t\t\t\t\t                                                                   \n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n\n";
PlaySound(TEXT("H:\\Projects\\C++\\stm\\Enter your choice.wav"), NULL, SND_SYNC);
c:cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>k;
if(k>6||k<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again :( ...........\n\n";goto c;}

        switch(k)
        {

	        {
	        	case 1:
	        	    cout<<"Opening Word....."<<endl;
	        	    PlaySound(TEXT("H:\\Projects\\C++\\stm\\Ms-word.wav"), NULL, SND_SYNC);
	        	    system("start winword");
	        	    cout<<"Here is your Ms word, Enjoy! :)"<<endl;

	        	    goto c;
					break;

				case 2:
	        		cout<<"Opening Excel....."<<endl;
	        		PlaySound(TEXT("H:\\Projects\\C++\\stm\\Ms-excel.wav"), NULL, SND_SYNC);
	        	    system("start excel");
	        	    cout<<"Here is your Ms Excel, Enjoy! :)"<<endl;

	        	    goto c;
	        	    break;
                case 3:
	        		cout<<"Opening PowerPoint....."<<endl;
	        		PlaySound(TEXT("H:\\Projects\\C++\\stm\\power.wav"), NULL, SND_SYNC);
	        	    system("start powerpnt");
	        	    cout<<"Here is your PowerPoint, Enjoy! :)"<<endl;

	        	    goto c;
	        	    break;
                case 4:
	        		cout<<"Opening Ms Access....."<<endl;
	        		PlaySound(TEXT("H:\\Projects\\C++\\stm\\MS-access.wav"), NULL, SND_SYNC);
	        	    system("start msaccess");
	        	    cout<<"Here is your Ms Access, Enjoy! :)"<<endl;

	        	    goto c;
	        	    break;
                case 5:
	        		cout<<"Opening OneNote....."<<endl;
	        		PlaySound(TEXT("H:\\Projects\\C++\\stm\\one-note.wav"), NULL, SND_SYNC);
	        	    system("start onenote");
	        	    cout<<"Here is your OneNote, Enjoy! :)"<<endl;

	        	    goto c;

	        	    break;
	        	case 6:
	        		system("CLS");
	        		goto A;

	       }

	   }




    case 4:


				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
cout<<"\n\n\t\t\t\t\t\t\t   Please, Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t                                            	                   \n";
cout<<"\t\t\t\t\t\t                                                                   \n";
cout<<"\t\t\t\t\t\t              1  >> Shutdown                                       \n";
cout<<"\t\t\t\t\t\t              2  >> Restart                                        \n";
cout<<"\t\t\t\t\t\t              3  >> Sleep mode                                     \n";
cout<<"\t\t\t\t\t\t                                                                   \n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n\n";
b:
PlaySound(TEXT("H:\\Projects\\C++\\stm\\Enter your choice.wav"), NULL, SND_SYNC);
cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>j;
if(j>3||j<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again :( ...........\n\n";goto b;}
				switch(j)


	        {
	        	case 1:
	        		cout<<"Good Bye :)"<<endl;
	        		cout<<"Windows is shutting down."<<endl;
PlaySound(TEXT("H:\\Projects\\C++\\stm\\good-bye.wav"), NULL, SND_SYNC);
	        	    system("shutdown -s -t 05");
					break;
				case 2:
	        		cout<<"Restarting windows....see you soon"<<endl;
	        		PlaySound(TEXT("H:\\Projects\\C++\\stm\\restarting-windows.wav"), NULL, SND_SYNC);
	        	    system("shutdown -r -t 05");
					break;
				case 3:
					cout<<"Sleeping mode on :)"<<endl;
					PlaySound(TEXT("H:\\Projects\\C++\\stm\\sleep-mode.wav"), NULL, SND_SYNC);
					system("rundll32.exe powrprof.dll ,SetSuspendState 0,1,0");
					break;


			}

}
return 0;
}














