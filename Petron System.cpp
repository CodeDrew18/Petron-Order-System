#include <iostream>  
#include <windows.h>
using namespace std;

int main()
{
     //INNER SWITCH LOOP// //SEMI-OUTER LOOPS//
     int choice, pay, quantity, total, all, price1;
     double price, PLiter;
     
       
     //OUTER SWITCH LOOP//
     int choices, Ichoices;
     
     //IF STATEMENT FOR BACK OR PROCEED TO THE SELECTION//
     char Y_Nchoice;
     
     //BACK SYSTEM //
     char ChoiceX;
     char ChoiceY;
    
     
     //GOTO SET-UP//
     //PROCEED GOTO 1
     begin:
     selection:
     selection1:
     Ybegin:
     
     //COLOR SCHEME OF FONTS//
     system("Color 0B");
     
     cout << "========================================================================================================================\n";
     
     cout << "\t\t\t\t\t\tWelcome To Petron Gas\n";
     
     cout << "========================================================================================================================\n\n";  
     
                                   
     cout << "1. Automotive Fuels\n";
     
     cout << "2. Automotive Lubricants\n";
     
     cout << "3. Gear and Transmission Oils\n";
     
     cout << "4. High Temperature Protection\n";
     
     cout << "5. Industrial Petroleum Products\n";
     
     cout << "6. Marine Lubricants\n";
     
     cout << "7. Motorccycle Lubricants\n";
     
     cout << "8. Petron Gasul\n";
     
     cout << "9. Polypropylene\n";
     
     cout << "10. Specialty Products\n\n";
     
     cout << "\nEnter Your Choice Here: ";
     cin >> choice;
     
     cout <<endl;
     
     system("cls");
     
     
     		
     switch (choice){
          
          case 1:
          
          cout << "\t\t\t\t\t\t AUTOMOTIVE FUELS \n\n";
          cout << "\t\t\t\t\t\t\t\t\tPRICE PER-LITER OF FUELS\n";
          
          
          
          cout << " 1: Petron Blaze 100 Euro 6\t\t\t\t\t\t\t73.6\n";
          
          cout << " 2: Petron XCS Euro 4\t\t\t\t\t\t\t\t75.8\n";
          
          cout << " 3: Petron Diesel Max Euro 4\t\t\t\t\t\t\t83.4\n";
          
          cout << " 4: Petron XTRA Advance Euro 4\t\t\t\t\t\t\t80.8\n";
          
          cout << " 5: Petron Turbo Diesel\t\t\t\t\t\t\t\t95.98\n";
          
          
		  cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto Ybegin;
          	break;
          	
          	case 'N':
          	
          		
          		
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
        	goto proceed;
        	
        	default:
        		cout << "\n\nType X || x To (BACK): ";
          cin >> ChoiceX;
        system("cls");
        goto begin;
        break;
		  }
		  
		
          
        
          proceed:
          
           //NESTED SWITCH LOOP 1   
                                            
    switch (choices)
          
        {
               
          case 1:
          cout << "Petron Blaze 100 Euro 6\n";
          price=73.6;
          cout << "How Much: ";
          cin>>pay;
          PLiter = pay / price;
          cout << "Total Liters Inserted "<<PLiter;
          
          cout << "\n\nType X || x To (BACK): ";
          cin >> ChoiceX;
        system("cls");
        goto begin;
          
          break;
          
          case 2:
          cout << "Petron XCS Euro 4\n";
          price=75.8;
          cout << "How Much: ";
          cin>>pay;
          PLiter = pay / price;
          cout << "Total Liters Inserted "<<PLiter;
          
          cout << "\n\nType X || x To (BACK): ";
          cin >> ChoiceX;
        system("cls");
        goto begin;
          
          break;
          
          case 3:
          cout << "Petron Diesel Max Euro 4\n";
          price=83.4;
          cout << "How Much: ";
          cin>>pay;
          PLiter = pay / price;
          cout << "Total Liters Inserted "<<PLiter;
          
          cout << "\n\nType X || x To (BACK): ";
          cin >> ChoiceX;
        system("cls");
        goto begin;
          
          break;
          
          case 4:
          cout << "Petron XTRA Advance Euro 4\n";
          price=80.8;
          cout << "How Much: ";
          cin>>pay;
          PLiter = pay / price;
          cout << "Total Liters Inserted "<<PLiter;
          
          cout << "\n\nType X || x To (BACK): ";
          cin >> ChoiceX;
        system("cls");
        goto begin;
          
          break;
          
          case 5:
          cout << "Petron Turbo Diesel\n";
          price=95.98;
          cout << "How Much: ";
          cin>>pay;
          PLiter = pay / price;
          cout << "Total Liters Inserted "<<PLiter;
          
          cout << "\n\nType X || x To (BACK): ";
          cin >> ChoiceX;
        system("cls");
        goto begin;
           
          break;
          
          default:
          cout << "Enter Right Choice Please ";
          
		  cout << "\n\nType X || x To (BACK): ";
          cin >> ChoiceX;
        system("cls");
        goto begin;
        
        break;
          }

/*OUTER SWITCH CASE BREAK TO INNER
NESTED SWITCH CASE*/
          
          break;
         
//END OF CASE 1 WITH NESTED LOOP 1//


//SEMI OUTER CASE OF THE CASE 2 ALONG WITH THE INNER CASE SWITCH//         
          case 2:
          
          back3:
          
          cout << "\t\t\t\t\t\t AUTOMOTIVE LUBRICANTS \n\n";
          
          cout << "1. DIESEL ENGINE OILS\n";
          cout << "2. GASOLINE ENGINE OILS\n";
          cout << "3. OHTER AUTOMOTIVE OILS\n";
          
          cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto Ybegin;
          	break;
          	
          	case 'N':
          		goto proceed1;
          	break;
		  }
		  
		proceed1:
          cout << "\nEnter Your Choice: ";
          cin>>Ichoices;
          system("cls");
          cout <<endl;
          
         //SEMI-OUTER NESTED SWITCH CASE//
         
          switch(Ichoices){
          	case 1:
          		
				cout << "\t\t\t\t\t\t DIESEL ENGINE OILS\n\n";
          		cout << "\t\t\t\t\t\t\t\tPRICE OF DIESEL ENGINE OILS\n";
          		
          cout << "1: Petron Rev-X Rx830 SAE 5W-30\t\t\t\t\t\t\t400\n";
          
          cout << "2: Petron Rev-X HD SAE 30\t\t\t\t\t\t\t540\n";
          
          cout << "3: Petron Rev-X RX400 SAE 15w-40\t\t\t\t\t\t600\n";    
      
          cout << "4: Petron Rev-X RX800 SAE 5W-40\t\t\t\t\t\t\t590\n";
        
          cout << "5: Petron Rev-X HD 4X SAE 15W-40\t\t\t\t\t\t750\n";
          
          cout << "6: Petron Rev-X RX6000 SAE 10W-40\t\t\t\t\t\t800\n";     
           
          cout << "7: Petron Rev-X HD SAE 40\t\t\t\t\t\t\t770\n\n";  
			  
		cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto back3;
          	break;
          	
          	case 'N':
          		goto proceed5;
          	break;
		  }
		  
		proceed5:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			
			switch (choices)
			{
				case 1:
					cout << "Petron Rev-X Rx830 SAE 5W-30\n";
					price1 = 400;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "Petron Rev-X HD SAE 30\n";
					price1 = 540;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 3:
					cout << "Petron Rev-X RX400 SAE 15w-40\n";
					price1 = 540;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 4:
					cout << "Petron Rev-X RX800 SAE 5W-40\n";
					price1 = 590;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";	
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 5:
					cout << "Petron Rev-X HD 4X SAE 15W-40\n";
					price1 = 750;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 6:
					cout << "Petron Rev-X RX600 SAE 10W-40\n";
					price1 = 800;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 7:
					cout << "Petron Rev-X HD SAE 40\n";
					price1 = 770;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
								
			}
          	
			  break;
  
  			//END OF THE INNER AND SEMI OUTER NESTED SWITCH ON THE CASE 2//
          	
          	//START OF THE CASE 2----CHOICE 2//
          	
          	case 2:
          		
          	cout << "\t\t\t\t\t\t GASOLINE ENGINE OILS\n\n";
          	cout << "\t\t\t\t\t\t\t\tPRICE OF GASOLINE ENGINE OILS\n";
          		
          cout << "1: Petron Blaze Racing BR450 20W-50\t\t\t\t\t\t850\n";
          
          cout << "2: Petron Blaze Racing BR600 10W-40\t\t\t\t\t\t900\n";
          
          cout << "3: Petron Blaze Racing BR800 SAE 5W-40\t\t\t\t\t\t950\n";
          
          cout << "4: Petron Blaze Racing BR200 SAE 20W-40\t\t\t\t\t\t700\n";
          
          cout << "5: Petron Blaze Racing BR400 SAE 15W-40\t\t\t\t\t\t750\n";
          
          cout << "6: Petron Blaze Racing BR630 SAE 5W-30\t\t\t\t\t\t650\n\n";

			cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto back3;
          	break;
          	
          	case 'N':
          		goto proceed6;
          	break;
		  }
		  
		proceed6:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
		switch (choices)
			{
				case 1:
					cout << "Petron Blaze Racing BR450 20W-50\n";
					price1 = 950;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "Petron Blaze Racing BR600 10W-40\n";
					price1 = 850;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 3:
					cout << "Petron Blaze Racing BR800 SAE 5W-40\n";
					price1 = 900;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
			
				break;	
				
					case 4:
					cout << "Petron Blaze Racing BR200 SAE 20W-40\n";
					price1 = 750;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";	
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 5:
					cout << "Petron Blaze Racing BR400 SAE 15W-40\n";
					price1 = 700;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 6:
					cout << "Petron Blaze Racing BR630 SAE 5W-30\n";
					price1 = 800;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
																					
			}

		//END OF CHOICE 2 CASE 2 WITH NESTED LOOP SAME WITH CHOICE 1//

          	break;
          	
          	//START OF CASE 3----CHOICE 3//
          	case 3:
          		cout << "\t\t\t\t\t\t OTHER AUTOMOTIVE OILS\n\n";
          		cout << "\t\t\t\t\t\t\tPRICE OF OTHER AUTOMOTIVE OILS\n";
          		
          cout << "1. Petron Motor Oil 40\t\t\t\t\t\t\t500\n";
          cout << "2. Petron Motor Oil 30\t\t\t\t\t\t\t450\n";
          cout << "3. Petron STM 40\t\t\t\t\t\t\t600\t\n";
          cout << "4. Petron STM 30\t\t\t\t\t\t\t550\t\n";
        	
          	cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto back3;
          	break;
          	
          	case 'N':
          		goto proceed7;
          	break;
		  }
		  
		proceed7:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			switch (choices)
			{
				case 1:
					cout << "Petron Motor Oil 40\n";
					price1 = 500;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "Petron Motor Oil 30\n";
					price1 = 450;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 3:
					cout << "Petron STM 40\n";
					price1 = 600;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 4:
					cout << "Petron STM 30\n";
					price1 = 550;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";	
					cin >> ChoiceY;					
	         	system("cls");
	          	goto selection1; 
				
				break;
			 	
		 }
		//SEMI-OUTER CASE OF CASE 2// 
		
		 
         break;
		//INNER CASE 2// 
				 
	 } 
          
          
     break;
//NESTED SWTICH START HERE//
//END OF THE CASE 2 HERE WITH THE LOOPS GOING TO INSERTED// 

 		//START OF THE CASE 3 WITH THE ONE NESTED LOOPS OF SWITCH//
		         
          case 3:
          
          cout << "\t\t\t\t\t GEAR AND TRANSMISSION OILS \n\n";
          cout << "\t\t\t\t\tPRICE OF GREAR & TRANSMISSION OILS \n\n"; 
          
          cout << "1: Petron Scooter Gear Oil\t\t\t\t\t550\n";
          
          cout << "2: Petron ATF Premium\t\t\t\t\t\t600\n";
          
          cout << "3: Petron GEP 140\t\t\t\t\t\t650\n";
          
          cout << "4: Petron GEP 90\t\t\t\t\t\t500\n";
         
				cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto Ybegin;
          	break;
          	
          	case 'N':
          		goto proceed8;
          	break;
		  }
		  
		proceed8:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			switch (choices)
			{
				case 1:
					cout << "Petron Scooter Gear Oil\n";
					price1 = 550;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "Petron ATF Premium\n";
					price1 = 600;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 3:
					cout << "Petron GEP 140\n";
					price1 = 650;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 4:
					cout << "Petron GEP 90\n";
					price1 = 500;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";	
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1; 
				
				break;	
			}		  
    break;
          
          //END OF THE CASE 3 WITH THE 1 NESTED LOOP OF SWITCH//
          			//========================//
          //START OF CASE 4 WITH THE 1 NESTED LOOP OF SWITCH//
          
          case 4:
          
          cout << "\t\t\t\t\t HIGH TEMPERATURE PROTECTION \n\n";
          cout << "\t\t\t\t\t\t\tPRICE OF TEMPERATURE PROTECTION\n";
          
          cout << "1: Petron GHTP Gear Oil SAE 75W-90\t\t\t\t\t950\n";
          
          cout << "2: Petron REV-X Turbo HTP SAE 5W-40\t\t\t\t\t900\n";
          
          cout << "3: Petron Blaze Racing HTP SAE 0W-40\t\t\t\t\t850\n";
          
          cout << "4: Petron ATF Premium HTP\t\t\t\t\t\t750\n";
          
          cout << "5: Petron Grease HTP\t\t\t\t\t\t\t700\n";
          
          cout << "6: Brake Fluid HTP DOT-4\t\t\t\t\t\t600\n";
          
          cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto Ybegin;
          	break;
          	
          	case 'N':
          		goto proceed9;
          	break;
		  }
		  
		proceed9:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
          
        switch (choices)
			{
				case 1:
					cout << "Petron GHTP Gear Oil SAE 75W-90\n";
					price1 = 950;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "Petron REV-X Turbo HTP SAE 5W-40\n";
					price1 = 900;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 3:
					cout << "Petron Blaze Racing HTP SAE 0W-40\n";
					price1 = 850;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 4:
					cout << "Petron ATF Premium HTP\n";
					price1 = 750;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";	
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 5:
					cout << "Petron Grease HTP\n";
					price1 = 700;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 6:
					cout << "Brake Fluid HTP DOT-4\n";
					price1 = 600;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
																					
			}
          
          break;
          
    	//END OF THE CASE 4 WITH THE 1 NESTED LOOP OF SWITCH//
          			//========================//
    	//START OF CASE 5 WITH THE 1 NESTED LOOP OF SWITCH//
        
          case 5:
          
          cout << "\t\t\t\t\t INDUSTRIAL PETROLEUM PRODUCTS \n\n";
          cout << "\t\t\t\t\t\tPRICE OF INDUSTRIAL PETROLEUM\n";

          
          cout << "1: PETRON ASPHALT\t\t\t\t\t\t600\n";
          
          cout << "2: PETRON AVIATION LUBRICANTS\t\t\t\t\t700\n";
          
          cout << "3: PETRON FUELS\t\t\t\t\t\t\t750\n";
          
          cout << "4: PETRON INDUSTRIAL LUBRICANTS\t\t\t\t\t850\n";
     
     	cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto Ybegin;
          	break;
          	
          	case 'N':
          		goto proceed10;
          	break;
		  }
		  
		proceed10:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			switch (choices)
			{
				case 1:
					cout << "PETRON ASPHALT\n";
					price1 = 600;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "PETRON AVIATION LUBRICANTS\n";
					price1 = 700;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 3:
					cout << "PETRON FUELS\n";
					price1 = 750;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 4:
					cout << "PETRON INDUSTRIAL LUBRICANTS\n";
					price1 = 850;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";	
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1; 
				
				break;
				
			}
     	 
    	break;
     //END OF THE CASE 5 WITH THE 1 NESTED LOOP OF SWITCH//
          			//========================//
    	//START OF CASE 6 WITH THE 1 NESTED LOOP OF SWITCH//
     case 6:
     
     cout << "\t\t\t\t\t MARINE LUBRICANTS \n\n";
     cout << "\t\t\t\t\t\t\tPRICE OF MARINE LUBRICANTS\n";

     cout << "1: PETRON MARINE HD OIL\t\t\t\t\t\t950\n";
     
     cout << "2: PETROMAR XC 5540\t\t\t\t\t\t900\n";
     
     cout << "3: PETROMAR XC 5040\t\t\t\t\t\t850\n";
     
     cout << "4: PETROMAR XC 4040\t\t\t\t\t\t800\n";
     
     cout << "5: PETROMAR XC 3000 SERIES\t\t\t\t\t\t750\n";
     
     cout << "6: PETROMAR XC 1000 SERIES\t\t\t\t\t\t500\n";
     
     cout << "7: PETROMAR 65\t\t\t\t\t\t450\n";
     
     cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto Ybegin;
          	break;
          	
          	case 'N':
          		goto proceed11;
          	break;
		  }
		  
		proceed11:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			
			switch (choices)
			{
				case 1:
					cout << "PETRON MARINE HD OIL\n";
					price1 = 950;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "PETROMAR XC 5540\n";
					price1 = 900;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 3:
					cout << "PETROMAR XC 5040\n";
					price1 = 850;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 4:
					cout << "PETROMAR XC 4040\n";
					price1 = 800;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";	
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 5:
					cout << "PETROMAR XC 3000 SERIES\n";
					price1 = 750;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 6:
					cout << "PETROMAR XC 1000 SERIES\n";
					price1 = 500;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 7:
					cout << "PETROMAR 65\n";
					price1 = 450;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
								
			}
     
     	break;
      //END OF THE CASE 6 WITH THE 1 NESTED LOOP OF SWITCH//
          			//========================//
    	//START OF CASE 7 WITH THE 2 SEMI- INNER NESTED LOOP OF SWITCH && AND 2 INNER NESTED LOOP OF SWITCH//
    	
    
     case 7:
     
     back:
     
     cout << "\t\t\t\t\tMOTORCYCLE LUBRICANTS\n\n";
   
       
     cout << "1. PETRON SPRINT 4T MOTORCYCLE OILS\n";
     
     cout << "2. PETRON SPRINT 4T SCOOTER OILS\n\n";
     
    cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto Ybegin;
          	break;
          	
          	case 'N':
          		goto proceed12;
          	break;
		  }
		  
		proceed12:
          cout << "\nEnter Your Choice: ";
          cin>>Ichoices;
          cout <<endl;
        
        switch(Ichoices){
          	case 1:
          		
		cout << "\t\t\t\t\tPETRON SPRINT 4T MOTORCYCLE OILS\n\n";
        cout << "\t\t\t\t\t\t\t\t\tPRICE OF PETRON SPRINT 4T MOTORCYCLE OILS\n";
          		
          cout << "1: Petron Sprint Monograde 4T SR100 SAE 40\t\t\t\t\t\t\t500\n";
          
          cout << "2: Petron Sprint 4T SR400 Multi-Grade SAE 20W-40\t\t\t\t\t\t550\n";
          
          cout << "3: Petron Sprint 4T SR 450 (ENDURO) SAE 20W-50\t\t\t\t\t\t\t700\n";    
      
          cout << "4: Petron Sprint 4T SR600 Synthetic Blend SAE 10W-40\t\t\t\t\t\t600\n";
        
          cout << "5: Petron Sprint 4T SR400 Premium (ENDURO) SAE 15W-40\t\t\t\t\t\t750\n";
          
          cout << "6: Petron Sprint 4T SR800 Synthetic (RACER) SAE 10W-40\t\t\t\t\t\t850\n";     
           
			cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto back;
          	break;
          	
          	case 'N':
          		goto proceed13;
          	break;
		  }
		  
		proceed13:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			switch (choices)
			{
				case 1:
					cout << "Petron Sprint Monograde 4T SR100 SAE 40\n";
					price1 = 500;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "Petron Sprint 4T SR400 Multi-Grade SAE 20W-40\n";
					price1 = 550;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 3:
					cout << "Petron Sprint 4T SR 450 (ENDURO) SAE 20W-50\n";
					price1 = 700;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 4:
					cout << "Petron Sprint 4T SR600 Synthetic Blend SAE 10W-40\n";
					price1 = 600;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";	
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 5:
					cout << "Petron Sprint 4T SR400 Premium (ENDURO) SAE 15W-40\n";
					price1 = 750;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 6:
					cout << "Petron Sprint 4T SR800 Synthetic (RACER) SAE 10W-40\n";
					price1 = 850;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
											
			}
        case 2:
          		
		 cout << "\t\t\t\t\t\tPETRON SPRINT 4T SCOOTER OILS\n\n";
         cout << "\t\t\t\t\t\t\t\tPRICE OF PETRON SPRINT 4T SCOOTER OILS\n";
          		
          cout << "1: Petron Sprint 4T SC600 Scooter Oil SAE 10W-40\t\t\t\t450\n";
          cout << "2: Petron Sprint 4T SC800 Scooter Oil SAE 5W-40\t\t\t\t\t400\n";
         
         cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto back;
          	break;
          	
          	case 'N':
          		goto proceed14;
          	break;
		  }
		  
		proceed14:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
		
		 switch (choices)
			{
				case 1:
					cout << "Petron Sprint 4T SC600 Scooter Oil SAE 10W-40\n";
					price1 = 450;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "Petron Sprint 4T SC800 Scooter Oil SAE 5W-40\n";
					price1 = 400;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
												
			}
     break;
		}
	//END OF CASE 7 WITH THE 2 SEMI- INNER NESTED LOOP OF SWITCH && AND 2 INNER NESTED LOOP OF SWITCH//
          			//========================//
    		//START OF CASE 8 WITH THE 1 NESTED LOOP OF SWITCH//

     case 8:
     
     cout << "\t\t\t\t\tPETRON GASUL\n\n";
     cout << "\t\t\t\t\t\t\tPRICE PETRON GASUL\n";
     
     cout << "1: Petron Gasul 2 Kilos\t\t\t\t\t\t400\n";
     
     cout << "2: Petron Gasul 7 Kilos\t\t\t\t\t\t500\n";    
     
     cout << "3: Petron Gasul 11 Kilos\t\t\t\t\t700\n";
       
     cout << "4: Petron Gasul 22 Kilos\t\t\t\t\t850\n";
     
     cout <<"5: Petron Gasul 50 Kilos\t\t\t\t\t950\n";
     
     cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto Ybegin;
          	break;
          	
          	case 'N':
          		goto proceed15;
          	break;
		  }
		  
		  proceed15:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
          
     	switch (choices)
			{
				case 1:
					cout << "Petron Gasul 2 Kilos\n";
					price1 = 400;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "Petron Gasul 7 Kilos\n";
					price1 = 500;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 3:
					cout << "Petron Gasul 11 Kilos\n";
					price1 = 700;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 4:
					cout << "Petron Gasul 22 Kilos\n";
					price1 = 850;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";	
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 5:
					cout << "Petron Gasul 50 Kilos\n";
					price1 = 950;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
								
			}
     
     break;
      		//END OF THE CASE 8 WITH THE 1 NESTED LOOP OF SWITCH//
          			//========================//
    		//START OF CASE 9 WITH THE 7 SEMI- OUTER NESTED LOOP OF SWITCH AND MULTIPLE PRODUCT SELECTION//
    		
     case 9:
     	back1:
     	
     	
		cout << "\t\t\t\t\tPOLYPROPYLENE\n\n";
		     
		     cout << "1. BIAXIALLY ORIENTED POLYPROPYLENE (BOPP)\n";
		    
		     cout << "2. CAST POLYPROPYLENE(CPP)";
		     
		     cout << "3. INFLATED POLYPROPYLENE(IPP)\n";
		    
		     cout << "4. INJECTION\n";
		    
		     cout << "5. PP POWDER\n";
		    
		     cout << "6. RAFFIA\n";
		     
		     cout << "7. THERMOFORM\n";
     
     cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto Ybegin;
          	break;
          	
          	case 'N':
          		goto proceed16;
          	break;
		  }
		  
		proceed16:
          cout << "\nEnter Your Choice: ";
          cin>>Ichoices;
          cout <<endl;
        
        switch(Ichoices){
          	case 1:
          		
		cout << "\t\t\t\t\tBIAXIALLY ORIENTED POLYPROPYLENE (BOPP)\n\n";
        cout << "\t\t\t\t\t\t\t\tPRICE OF THE BOPP\n";
          		
          cout << "1: PETROLENE 1184JK\t\t\t\t\t\t\t500\n";
          
          cout << "2: PETROLENE 1104JK\t\t\t\t\t\t\t550\n";
                     
     		cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto back1;
          	break;
          	
          	case 'N':
          		goto proceed17;
          	break;
		  }
		  
		proceed17:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			switch (choices)
			{
				case 1:
					cout << "PETROLENE 1184JK\n";
					price1 = 500;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "PETROLENE 1104JK\n";
					price1 = 550;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
									
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
				default:
	          		cout << "Enter The Right Number! ";
	          	cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
												
			}
    		
    		case 2:
    			cout << "\t\t\t\t\tCAST POLYPROPYLENE(CPP)\n\n";
        		cout << "\t\t\t\t\t\t\t\tPRICE OF THE CPP\n";
    			
    			cout << "1: PETROLENE 1104M\t\t\t\t\t\t\t600\n";
    			
    		cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto back1;
          	break;
          	
          	case 'N':
          		goto proceed18;
          	break;
		  }
		  
		proceed18:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			switch (choices)
			{
				case 1:
					cout << "PETROLENE 1184JK\n";
					price1 = 600;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				default:
	          		cout << "Enter The Right Number! ";
	          	cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
	 		}
	 		
	 		case 3:
    			cout << "\t\t\t\t\tINFLATED POLYPROPYLENE(IPP)\n\n";
        		cout << "\t\t\t\t\t\t\t\tPRICE OF THE IPP\n";
    			
    			cout << "1: PETROLENE 1129N\t\t\t\t\t\t\t600\n";
    			cout << "2: PETROLENE 1128N\t\t\t\t\t\t\t500\n";
    			cout << "3: PETROLENE 1126N\t\t\t\t\t\t\t400\n";
    			
    		cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto back1;
          	break;
          	
          	case 'N':
          		goto proceed19;
          	break;
		  }
		  
		proceed19:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			switch (choices)
			{
				case 1:
					cout << "PETROLENE 1129N\n";
					price1 = 600;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "PETROLENE 1128N\n";
					price1 = 500;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 3:
					cout << "PETROLENE 1126N\n";
					price1 = 400;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				default:
	          		cout << "Enter The Right Number! ";
	          	cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
	 		}
	 		case 4:
    			cout << "\t\t\t\t\tINJECTION\n\n";
        		cout << "\t\t\t\t\t\t\tPRICE OF INJECTION\n";
    			
    			cout << "1: PETROLENE 1100N\t\t\t\t\t\t250\n";
    			
    		cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto back1;
          	break;
          	
          	case 'N':
          		goto proceed20;
          	break;
		  }
		  
		proceed20:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			switch (choices)
			{
				case 1:
					cout << "PETROLENE 1100N\n";
					price1 = 250;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				default:
	          		cout << "Enter The Right Number! ";
	          	cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
			}
			case 5:
    			cout << "\t\t\t\t\t\tPP POWDER\n\n";
        		cout << "\t\t\t\t\t\t\t\tPRICE OF PP POWDER\n";
    			
    			cout << "1: PETROLENE 11XXNW\t\t\t\t\t\t\t300\n";
    			
    		cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto back1;
          	break;
          	
          	case 'N':
          		goto proceed21;
          	break;
		  }
		  
		proceed21:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			switch (choices)
			{
				case 1:
					cout << "PETROLENE 11XXNW\n";
					price1 = 300;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				default:
	          		cout << "Enter The Right Number! ";
	          	cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
			}
			case 6:
    			cout << "\t\t\t\t\tRAFFIA\n\n";
        		cout << "\t\t\t\t\t\t\t\tPRICE OF THE RAFFIA\n";
    			
    			cout << "1: PETROLENE 1102KL\t\t\t\t\t\t\t400\n";
    			cout << "2: PETROLENE 1102K\t\t\t\t\t\t\t350\n";   			
    			
    		cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto back1;
          	break;
          	
          	case 'N':
          		goto proceed22;
          	break;
		  }
		  
		proceed22:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			switch (choices)
			{
				case 1:
					cout << "PETROLENE 1102KL\n";
					price1 = 400;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "PETROLENE 1102K\n";
					price1 = 350;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				default:
	          		cout << "Enter The Right Number! ";
	          	cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
								
	 		}
	 		case 7:
    			cout << "\t\t\t\t\tTHERMOFORM\n\n";
        		cout << "\t\t\t\t\t\t\t\tPRICE OF THERMOFORM\n";
    			
    			cout << "1: PETORLENE 1132H\t\t\t\t\t\t\t650\n";
    			cout << "2: PETROLENE 1102H\t\t\t\t\t\t\t400\n";
    			cout << "3: PETROLENE 1102V\t\t\t\t\t\t\t450\n";
    			
    	cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto back1;
          	break;
          	
          	case 'N':
          		goto proceed23;
          	break;
		  }
		  
		proceed23:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			switch (choices)
			{
				case 1:
					cout << "PETORLENE 1132H\n";
					price1 = 650;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "PETROLENE 1102H\n";
					price1 = 400;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 3:
					cout << "PETROLENE 1102V\n";
					price1 = 450;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
	          	
	          	default:
	          		cout << "Enter The Right Number! ";
	          	cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
	          				
				break;	
				
	 		}
      break;
	 }
		//END OF CASE 9 WITH THE 7 SEMI- OUTER NESTED LOOP OF SWITCH AND MULTIPLE PRODUCT SELECTION//
          			//========================//
        //START OF THE CASE 10 WITH THE 1 NESTED LOOP OF SWITCH//
     case 10:
     
      	 cout << "\t\t\t\t\tSPECIALTY PRODUCTS\n\n";
     	 cout << "\nBRAKE FLUID\n";
         cout << "\t\t\t\t\t\t\t\tPRICE OF BRAKE FLUID\n";
     
     
     
     cout << "1: PETROMATE BRAKE AND CLUTH FLUID\t\t\t\t\t500\n";
     
     cout << "2: PETRON BRAKE FLUID HTP\t\t\t\t\t\t400\n";
     
     cout << "3. PETROMATE SUPER COOLANT\t\t\t\t\t\t600\n";
     
     	cout << "\n\nWrong choices?(Y-N): ";
          cin >>Y_Nchoice;
          
          switch(Y_Nchoice){
          	case 'Y':
          		system("cls");
          		goto Ybegin;
          	break;
          	
          	case 'N':
          		goto proceed24;
          	break;
		  }
		  
		proceed24:
          cout << "\nEnter Your Choice: ";
          cin>>choices;
          cout <<endl;
			
			switch (choices)
			{
				case 1:
					cout << "PETROMATE BRAKE AND CLUTH FLUID\n";
					price1 = 500;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 2:
					cout << "PETRON BRAKE FLUID HTP\n";
					price1 = 400;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
				
				break;	
				
					case 3:
					cout << "PETROMATE SUPER COOLANT\n";
					price1 = 600;
					cout << "Quantity: ";
					cin >> quantity;					
					total = price1 * quantity;					
					cout << "\nPut the Money Here: ";
					cin >> pay;
					all = pay - total;					
					cout << "Total Exchange: "<<all;
				
					cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
	          	
	          	default:
	          		cout << "Enter The Right Number! ";
	          	cout << "\n\nType Y || y to (Back on Start Selection): ";
					cin >> ChoiceY;					
	          	system("cls");
	          	goto selection1;
	          				
				break;	
				
	 		}
     
     break;
     
    	default:
	        cout << "Enter The Right Number! ";
	        cout << "\n\nType Y || y to (Back on Start Selection): ";
			cin >> ChoiceY;					
	     system("cls");
	     goto selection1;
	     
     break; 
    } 
   
   //RECEIPT PROCESS OF ALL THE SELECTION SELECTED OF THE COSTUMER//
   
   	
       
   
     
return 0;     
}
