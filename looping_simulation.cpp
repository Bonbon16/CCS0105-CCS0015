#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	string varName, conditionalOp, update;
	int initialVal, terminalVal;
    
	
	cout<<"** LOOP SIMULATION MENU **\n";
	cout<<"[1] for loop\n";
	cout<<"[2] while loop\n";
	cout<<"[3] do-while\n";
	
	
	int option;
	cout<<"Option: ";
	cin>>option;
	
	if(option == 1){
		
		cin.ignore();
		cout<<"Variable Name: ";
		getline(cin, varName);
		
		cout<<"Initial Value: ";
		cin>>initialVal;
		
		cin.ignore();
		
		cout<<"Conditional Operator: ";
		getline(cin, conditionalOp);
		
		cout<<"Terminal Value: ";
		cin>>terminalVal;
		
		cin.ignore();
		
		cout<<"Update: ";
		getline(cin, update);
		
		cout<<endl;
		
		if(conditionalOp == "<=" && update == "++"){
			
			
			for(initialVal; initialVal<=terminalVal; initialVal++){
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"for("<<varName<<" = "<<initialVal<<"; "<< varName<<conditionalOp<<terminalVal<<"; "<< varName<<update<<"){\n";
				cout<<"}"<<endl<<endl;	
			}
			
		}
		else if(conditionalOp == ">=" && update == "++"){
			
			for(initialVal; initialVal>=terminalVal; initialVal++){
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"for("<<varName<<" = "<<initialVal<<"; "<< varName<<conditionalOp<<terminalVal<<"; "<< varName<<update<<"){\n";
				cout<<"}"<<endl<<endl;	
			}
			
		}
		else if(conditionalOp == "==" && update == "++"){
		
			for(initialVal; initialVal==terminalVal; initialVal++){
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"for("<<varName<<" = "<<initialVal<<"; "<< varName<<conditionalOp<<terminalVal<<"; "<< varName<<update<<"){\n";
				cout<<"}"<<endl<<endl;	
			}
			
		}
		else if(conditionalOp == "!=" && update == "++"){
			
			for(initialVal; initialVal!=terminalVal; initialVal++){
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"for("<<varName<<" = "<<initialVal<<"; "<< varName<<conditionalOp<<terminalVal<<"; "<< varName<<update<<"){\n";
				cout<<"}"<<endl<<endl;	
			}
			
		}
		else if(conditionalOp == ">" && update == "++"){
			
			for(initialVal; initialVal>terminalVal; initialVal++){
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"for("<<varName<<" = "<<initialVal<<"; "<< varName<<conditionalOp<<terminalVal<<"; "<< varName<<update<<"){\n";
				cout<<"}"<<endl<<endl;	
			}
			
		}
		else if(conditionalOp == "<" && update == "++"){
			
			for(initialVal; initialVal<terminalVal; initialVal++){
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"for("<<varName<<" = "<<initialVal<<"; "<< varName<<conditionalOp<<terminalVal<<"; "<< varName<<update<<"){\n";
				cout<<"}"<<endl<<endl;	
			}
			
		}
		else if(conditionalOp == "<=" && update == "--"){
			
			for(initialVal; initialVal<=terminalVal; initialVal--){
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"for("<<varName<<" = "<<initialVal<<"; "<< varName<<conditionalOp<<terminalVal<<"; "<< varName<<update<<"){\n";
				cout<<"}"<<endl<<endl;	
			}
		}
		else if(conditionalOp == ">=" && update == "--"){
			
			for(initialVal; initialVal>=terminalVal; initialVal--){
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"for("<<varName<<" = "<<initialVal<<"; "<< varName<<conditionalOp<<terminalVal<<"; "<< varName<<update<<"){\n";
				cout<<"}"<<endl<<endl;	
			}
			
		}
		else if(conditionalOp == "==" && update == "--"){
		
			for(initialVal; initialVal==terminalVal; initialVal--){
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"for("<<varName<<" = "<<initialVal<<"; "<< varName<<conditionalOp<<terminalVal<<"; "<< varName<<update<<"){\n";
				cout<<"}"<<endl<<endl;	
			}
			
		}
		else if(conditionalOp == "!=" && update == "--"){
			
			for(initialVal; initialVal!=terminalVal; initialVal--){
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"for("<<varName<<" = "<<initialVal<<"; "<< varName<<conditionalOp<<terminalVal<<"; "<< varName<<update<<"){\n";
				cout<<"}"<<endl<<endl;	
			}
			
		}else if(conditionalOp == ">" && update == "--"){
			
			for(initialVal; initialVal!=terminalVal; initialVal--){
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"for("<<varName<<" = "<<initialVal<<"; "<< varName<<conditionalOp<<terminalVal<<"; "<< varName<<update<<"){\n";
				cout<<"}"<<endl<<endl;	
			}
			
		}
		else if(conditionalOp == "<" && update == "--"){
			
			for(initialVal; initialVal<terminalVal; initialVal--){
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"for("<<varName<<" = "<<initialVal<<"; "<< varName<<conditionalOp<<terminalVal<<"; "<< varName<<update<<"){\n";
				cout<<"}"<<endl<<endl;	
			}
			
		}
		
	} 
	else if(option == 2 ){
		
		
		cin.ignore();
		
		cout<<"Variable Name: ";
		getline(cin, varName);
		
		cout<<"Initial Value: ";
		cin>>initialVal;
		
		cin.ignore();
		
		cout<<"Conditional Operator: ";
		getline(cin, conditionalOp);
		
		cout<<"Terminal Value: ";
		cin>>terminalVal;
		
		cin.ignore();
		
		cout<<"Update: ";
		getline(cin, update);
		
		cout<<endl;
		
		if(conditionalOp == "<=" && update == "++"){
			
			while(initialVal<=terminalVal){
				
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"while("<<varName<<conditionalOp<<terminalVal<<"){\n";
				cout<<varName<<update<<";\n"<<"}";
				cout<<endl<<endl;
				
				initialVal++;
			}
			
	
		}
		else if(conditionalOp == ">=" && update == "++"){
			
			while(initialVal>=terminalVal){
				
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"while("<<varName<<conditionalOp<<terminalVal<<"){\n";
				cout<<varName<<update<<";\n"<<"}";
				cout<<endl<<endl;
				
				initialVal++;
			}
	
		}
		else if(conditionalOp == "==" && update == "++"){
			
			
			while(initialVal==terminalVal){
				
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"while("<<varName<<conditionalOp<<terminalVal<<"){\n";
				cout<<varName<<update<<";\n"<<"}";
				cout<<endl<<endl;
				
				initialVal++;
			}
	
		}
		else if(conditionalOp == "!=" && update == "++"){
			
			while(initialVal!=terminalVal){
				
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"while("<<varName<<conditionalOp<<terminalVal<<"){\n";
				cout<<varName<<update<<";\n"<<"}";
				cout<<endl<<endl;
				
				initialVal++;
			}
			
	
		}
		else if(conditionalOp == ">" && update == "++"){
			
			while(initialVal>terminalVal){
				
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"while("<<varName<<conditionalOp<<terminalVal<<"){\n";
				cout<<varName<<update<<";\n"<<"}";
				cout<<endl<<endl;
				
				initialVal++;
			}
			
	
		}
		else if(conditionalOp == "<" && update == "++"){
			
			while(initialVal<terminalVal){
				
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"while("<<varName<<conditionalOp<<terminalVal<<"){\n";
				cout<<varName<<update<<";\n"<<"}";
				cout<<endl<<endl;
				
				initialVal++;
			}
			
	
		}
		else if(conditionalOp == "<=" && update == "--"){
			
			while(initialVal<=terminalVal){
				
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"while("<<varName<<conditionalOp<<terminalVal<<"){\n";
				cout<<varName<<update<<";\n"<<"}";
				cout<<endl<<endl;
				
				initialVal--;
			}
	
		}
		else if(conditionalOp == ">=" && update == "--"){
			
			while(initialVal>=terminalVal){
				
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"while("<<varName<<conditionalOp<<terminalVal<<"){\n";
				cout<<varName<<update<<";\n"<<"}";
				cout<<endl<<endl;
				
				initialVal--;
			}
	
		}
		else if(conditionalOp == "==" && update == "--"){
			
			while(initialVal==terminalVal){
				
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"while("<<varName<<conditionalOp<<terminalVal<<"){\n";
				cout<<varName<<update<<";\n"<<"}";
				cout<<endl<<endl;
				
				initialVal--;
			}
	
		}
		else if(conditionalOp == "!=" && update == "--"){
			
			while(initialVal!=terminalVal){
				
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"while("<<varName<<conditionalOp<<terminalVal<<"){\n";
				cout<<varName<<update<<";\n"<<"}";
				cout<<endl<<endl;
				
				initialVal--;
			}
	
		}
		else if(conditionalOp == ">" && update == "--"){
			
			while(initialVal>terminalVal){
				
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"while("<<varName<<conditionalOp<<terminalVal<<"){\n";
				cout<<varName<<update<<";\n"<<"}";
				cout<<endl<<endl;
				
				initialVal--;
			}
	
		}
		else if(conditionalOp == "<" && update == "--"){
			
			while(initialVal<terminalVal){
				
				cout<<"int "<<varName<<" = "<<initialVal<<";\n";
				cout<<"while("<<varName<<conditionalOp<<terminalVal<<"){\n";
				cout<<varName<<update<<";\n"<<"}";
				cout<<endl<<endl;
				
				initialVal--;
			}
	
		}
	
		
	}
	else if (option == 3){
		
		cin.ignore();
		
		cout<<"Variable Name: ";
		getline(cin, varName);
		
		cout<<"Initial Value: ";
		cin>>initialVal;
		
		cin.ignore();
		
		cout<<"Conditional Operator: ";
		getline(cin, conditionalOp);
		
		cout<<"Terminal Value: ";
		cin>>terminalVal;
		
		cin.ignore();
		
		cout<<"Update: ";
		getline(cin, update);
		
		cout<<endl;
		
		if(conditionalOp == "<=" && update == "++"){
			
			initialVal;
			
			do{	
				
				cout<<"int "<<varName<<" = "<<initialVal<<";"<<endl;
				cout<<"do{ \n";
				cout<<varName<<update<<";"<<endl;
				cout<<"}while("<<varName<<conditionalOp<<terminalVal<<");\n\n";
				
				initialVal++;
				
			}while(initialVal<=terminalVal);
		
			
	    }
	    else if(conditionalOp == ">=" && update == "++"){
	    	
	    	initialVal;
			
			do{	
				
				cout<<"int "<<varName<<" = "<<initialVal<<";"<<endl;
				cout<<"do{ \n";
				cout<<varName<<update<<";"<<endl;
				cout<<"}while("<<varName<<conditionalOp<<terminalVal<<");\n\n";
				
				initialVal++;
				
			}while(initialVal>=terminalVal);
	
	
     	}
     	else if(conditionalOp == "==" && update == "++"){
     		
     		initialVal;
			
			do{	
				
				cout<<"int "<<varName<<" = "<<initialVal<<";"<<endl;
				cout<<"do{ \n";
				cout<<varName<<update<<";"<<endl;
				cout<<"}while("<<varName<<conditionalOp<<terminalVal<<");\n\n";
				
				initialVal++;
				
			}while(initialVal==terminalVal);
	
	
     	}
     	else if(conditionalOp == "!=" && update == "++"){
     		
     		initialVal;
			
			do{	
				
				cout<<"int "<<varName<<" = "<<initialVal<<";"<<endl;
				cout<<"do{ \n";
				cout<<varName<<update<<";"<<endl;
				cout<<"}while("<<varName<<conditionalOp<<terminalVal<<");\n\n";
				
				initialVal++;
				
			}while(initialVal!=terminalVal);
	
	
     	}
     	else if(conditionalOp == ">" && update == "++"){
     		
     		initialVal;
			
			do{	
				
				cout<<"int "<<varName<<" = "<<initialVal<<";"<<endl;
				cout<<"do{ \n";
				cout<<varName<<update<<";"<<endl;
				cout<<"}while("<<varName<<conditionalOp<<terminalVal<<");\n\n";
				
				initialVal++;
				
			}while(initialVal>terminalVal);
	
	
     	}
     	else if(conditionalOp == "<" && update == "++"){
     		
     		initialVal;
			
			do{	
				
				cout<<"int "<<varName<<" = "<<initialVal<<";"<<endl;
				cout<<"do{ \n";
				cout<<varName<<update<<";"<<endl;
				cout<<"}while("<<varName<<conditionalOp<<terminalVal<<");\n\n";
				
				initialVal++;
				
			}while(initialVal<terminalVal);
	
	
     	}
     	else if(conditionalOp == "<=" && update == "--"){
     		
     		initialVal;
			
			do{	
				
				cout<<"int "<<varName<<" = "<<initialVal<<";"<<endl;
				cout<<"do{ \n";
				cout<<varName<<update<<";"<<endl;
				cout<<"}while("<<varName<<conditionalOp<<terminalVal<<");\n\n";
				
				initialVal--;
				
			}while(initialVal<=terminalVal);
	
	
     	}
     	else if(conditionalOp == ">=" && update == "--"){
     		
     		initialVal;
			
			do{	
				
				cout<<"int "<<varName<<" = "<<initialVal<<";"<<endl;
				cout<<"do{ \n";
				cout<<varName<<update<<";"<<endl;
				cout<<"}while("<<varName<<conditionalOp<<terminalVal<<");\n\n";
				
				initialVal--;
				
			}while(initialVal>=terminalVal);
	
	
     	}
     	else if(conditionalOp == "==" && update == "--"){
     		
     		initialVal;
			
			do{	
				
				cout<<"int "<<varName<<" = "<<initialVal<<";"<<endl;
				cout<<"do{ \n";
				cout<<varName<<update<<";"<<endl;
				cout<<"}while("<<varName<<conditionalOp<<terminalVal<<");\n\n";
				
				initialVal--;
				
			}while(initialVal==terminalVal);
	
	
     	}
     	else if(conditionalOp == "!=" && update == "--"){
     		
     		initialVal;
			
			do{	
				
				cout<<"int "<<varName<<" = "<<initialVal<<";"<<endl;
				cout<<"do{ \n";
				cout<<varName<<update<<";"<<endl;
				cout<<"}while("<<varName<<conditionalOp<<terminalVal<<");\n\n";
				
				initialVal--;
				
			}while(initialVal!=terminalVal);
	
	
     	}
     	else if(conditionalOp == ">" && update == "--"){
     		
     		initialVal;
			
			do{	
				
				cout<<"int "<<varName<<" = "<<initialVal<<";"<<endl;
				cout<<"do{ \n";
				cout<<varName<<update<<";"<<endl;
				cout<<"}while("<<varName<<conditionalOp<<terminalVal<<");\n\n";
				
				initialVal--;
				
			}while(initialVal>terminalVal);
	
	
     	}
     	else if(conditionalOp == "<" && update == "--"){
     		
     		initialVal;
			
			do{	
				
				cout<<"int "<<varName<<" = "<<initialVal<<";"<<endl;
				cout<<"do{ \n";
				cout<<varName<<update<<";"<<endl;
				cout<<"}while("<<varName<<conditionalOp<<terminalVal<<");\n\n";
				
				initialVal--;
				
			}while(initialVal<terminalVal);
	
     	}
		
	}
	return 0;
}

        
    