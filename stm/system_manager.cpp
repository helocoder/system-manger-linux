// #include<iostream>
// #include<stdio.h>
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
   
   cout<<"\n\n\n\nt\t\t\t\t\t\t\t     SYSTEM MANAGER LOGIN \n\n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\t\t\t\tEnter Password: ";
    
   system("sleep 2 ; play -q pass.wav &");
//    ch = getch();
//    while(ch != 13){//character 13 is enter
//       pass.push_back(ch);
//       cout << '*';
//     //   ch = _getch();
//    }
cin>>pass;
   if(pass == "hello_coder"){
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Granted! \n";
    
         system("sleep 1 ; play -q Access.wav &");
	  system ("clear");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("clear");
      login();
   }
   return 0;
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
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n";

system("sleep 1 ; play -q qwe.wav &");
system("sleep 3");
system("clear");

login();


 int i,j,k;                                                                                                                                   //ASSIGINING VARIABLE//

 //option for choice
 
A:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
cout<<"\n\n\t\t\t\t\t\t\tPlease, Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> Check PING                              |\n";
cout<<"\t\t\t\t\t\t|             2  >> Check IP                           |\n";
cout<<"\t\t\t\t\t\t|             3  >> Microsoft office                              |\n";
cout<<"\t\t\t\t\t\t|             4  >> Power off windows                             |\n";
cout<<"\t\t\t\t\t\t|             5  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
a:
system("sleep 1 ; play -q choice.wav &");
cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>i;
if(i>5||i<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto a;} //if inputed choice is other than given choice
system("clear");
        
if(i==5)
{

system("cls");
cout<<"\n\n\n\n\n\n\n\n"<<endl;
cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
cout<<"\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t@@|                                 SYSTEM MANAGER                                        |@@\n";
cout<<"\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t@@|                                                 -Brought To You by Abhishek           |@@\n";
cout<<"\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
	// PlaySound(TEXT("H:\\Projects\\C++\\stm\\Thanks.wav"), NULL, SND_SYNC);
	         system("sleep 1 ; play -q Thanks.wav &");
			 system("sleep 3");

	cout<<"\n";
	// PlaySound(TEXT("H:\\Projects\\C++\\stm\\this-project.wav"), NULL, SND_SYNC);
         system("sleep 1 ; play -q this-project.wav &");


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
cout<<"\t\t\t\t\t\t              1  >> Nano Editor                                        \n";
cout<<"\t\t\t\t\t\t              2  >> Vim Editor                                       \n";
cout<<"\t\t\t\t\t\t              3  >> Ms PowerPoint                                  \n";
cout<<"\t\t\t\t\t\t              4  >> Ms Access                                      \n";
cout<<"\t\t\t\t\t\t              5  >> OneNote                                        \n";
cout<<"\t\t\t\t\t\t              6  >> Back                                           \n";
cout<<"\t\t\t\t\t\t                                                                   \n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n\n";
system("sleep 1 ; play -q choice.wav &");
c:cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>k;
if(k>6||k<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again :( ...........\n\n";goto c;}

        switch(k)
        {
		
	        {
	        	case 1:
	        	    cout<<"Opening Word....."<<endl;
                    system("sleep 1 ; play -q MS-word.wav &");

	        	    system("start winword");
	        	    cout<<"Here is your Ms word, Enjoy! :)"<<endl;
	        	    
	        	    goto c;
					break;

				case 2:
	        		cout<<"Opening Excel....."<<endl;
	        		system("sleep 1 ; play -q MS-Excel.wav &");
					system("start excel");
	        	    cout<<"Here is your Ms Excel, Enjoy! :)"<<endl;
	        	    
	        	    goto c;
	        	    break;
                case 3:
	        		cout<<"Opening PowerPoint....."<<endl;
	        		system("sleep 1 ; play -q power.wav &");

					system("start powerpnt");
	        	    cout<<"Here is your PowerPoint, Enjoy! :)"<<endl;
	        	    
	        	    goto c;
	        	    break;
                case 4:
	        		cout<<"Opening Ms Access....."<<endl;
	        		system("sleep 1 ; play -q MS-access.wav &");
				    system("start msaccess");
	        	    cout<<"Here is your Ms Access, Enjoy! :)"<<endl;
	        	    
	        	    goto c;
	        	    break;
                case 5:
	        		cout<<"Opening OneNote....."<<endl;
	        	    system("sleep 1 ; play -q one-note.wav &");

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
system("sleep 1 ; play -q choice.wav &");
cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>j;
if(j>3||j<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again :( ...........\n\n";goto b;}
				switch(j)
		
		
	        {
	        	case 1:
	        		cout<<"Good Bye :)"<<endl;
	        		cout<<"Windows is shutting down."<<endl;
system("sleep 1 ; play -q good-bye.wav &");
	        	    system("shutdown now");
					break;
				case 2:
	        		cout<<"Restarting windows....see you soon"<<endl;
system("sleep 1 ; play -q restarting-windows.wav &");
	        	    system("shutdown -r -t 05");
					break;
				case 3:
					cout<<"Sleeping mode on :)"<<endl;
system("sleep 1 ; play -q sleep-mode.wav &");
					system("rundll32.exe powrprof.dll ,SetSuspendState 0,1,0");
					break;


			}
			
}
return 0;
}






	
	






