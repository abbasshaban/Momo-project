#include <iostream>
#include <string>
using namespace std;
int main(){
	int count,option,allow,trans,others;
	float amount,balance;
	string number,pin,code,pincode,num;
	char confirm;
	pincode="0000";
	balance=1000.00;
	
		cout<<"REF:UA2203454"<<"CLASS:IT.A_"<<"0241633925"<<endl;
		
jump:
    cout<<"ENTER YOUR MOBILE MONEY service code*...#"<<endl;
    cin>>code;
    if(code=="*170#")
	{
   cout<<"..................WELCOME TO MTN MOBILE MONEY SERVICE....................."<<endl;
  cout<< "********MENU*********"<<endl;
  cout<< "1.Transfer Money"<<endl;
  cout<<"2.Check balance"<<endl;
   cout<<"3.Reset Pin"<<endl;
 cout<<"4.Allow Cash Out"<<endl;
 cout<<"5.Financial Services"<<endl;
 cout<<"Press # to exit"<<endl;
   cin>>option;
   }
   
else {
   	 cout<<"CONNECTION PROBLEM OR INVALID MMI CODE... "<<endl;
   	 goto jump;
   }
   
   switch(option){
   	
   	case 1:
   		cout<<"Enter Reciepient number:";cin>>number;
   		cout<<"+233";
   		cout<<"Confirm number:";cin>>number;
   		cout<<"Enter  Amount:";cin>>amount;
   		cout<<"GHC";
   		cout<<"Enter your reference: ";cin>>num;
   		cout<<"verify pin to send $"<<amount<<"to"<<number<<":::";
   		cin>>pin;
   		if(pin!=pincode){
   			cout<<"Wrong pin,try again";
   			
   			if(count==3){
   				cout<<"TOO MANY ATTEMPS";
   	        
		   }

	}else{
	 	cout<<"Amout of "<<amount<<"have been send to"<<number<<"With reference "<<num<<endl;
	 	cout<<"Current Balance is "<<balance-amount;
	}
   		break;
   		case 2:
   			cout<<"verify your pin ";
   			cin>>pin;
   			if(pin!=pincode){
   				cout<<"Wrong pin,try again";
   				
   				if(count==4){
   					cout<<"TOO MANY ATTEMPS";
	
			    }
   			
			}else{
			   	cout<<"Account Balance in your account is\\ "<<balance;	
			   	
		   }
        break;
         case 3:
  	         cout<<"RESET YOUR PIN "<<"Enter [Y||Z]to confirm:";
  	        cin>>confirm;
  	        if(confirm=='Y'||confirm=='y'){
  		       cout<<"Enter your new pin";cin>>pin;
  		       
  		
  		        cout<<"Pin reset succesful to"<<pin;
  		    
		    }else if(confirm=='Z'||confirm=='z'){
		    	cout<<"canceled!!";
	        }else{
	  	      cout<<"WRONG input";
	  	      
	  	 case 4:
	  	 	cout<<"...Allow cash Out..."<<endl;
	  	 	cout<<"1.Yes"<<endl;
	  	 	cout<<"2.No"<<endl;
	  	 	cout<<"0.back"<<endl;
	  	 	cin>>allow;
	  	 	if(allow==1){
	  	 		cout<<"Cash Out is Allow!"<<endl;
			}else if(allow==2){
				cout<<"Cash out is not Allow!"<<endl;
			}else{
				cout<<"back to home:"<<endl;
			}
	  	 	break;
	  	 	case 5:
	  	 		cout<<"1.Banking services"<<endl;
	  	 		cin>>others;
	  	 		if(others==1){
	  	 		cout<<"1.Transfer to Bank"<<endl;
	  	 		cout<<"2.Transfer from bank"<<endl;
	  	 		cin>>trans;
	  	 		if(trans==1||trans==2){
	  	 			cout<<"BANkS"<<endl;
	  	 			  cout<< "Zenith Bank"<<endl;
					  cout<< "ADB "<<endl;
					  cout<< "ABSA"<<endl;
					  cout<< "GTB"<<endl;
					  cout<< "Fidelitybank"<<endl;
					  cout<< "Accessbank "<<endl;
					  cout<< "ECObank"<<endl;
					 }else{
					 	cout<<"Wrong input"<<endl;
				}
			     }else{
			     	cout<<"WRONG INPUT ";
			     	break;
				 } 
	  	 		
	  	 	case '#':
	  	    cout<<"program exited...."<<endl;
	  	    break; 
	  	    
	  	    }
		  
		  
        default:
        	cout<<"invalid option...";
        break;
    }
cout<<"KONONGO HERO>>>"	;		
	return 0;
}


	
	  

