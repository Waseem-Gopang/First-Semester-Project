#include<iostream>
using namespace std;
string name[20],fname[20],address[20],clas[20],course[20],bloodgroup[20],
                                rollno[20],contact[20],fathercontact[20]; //string array with default value
void enter();  //function declaration for enter data
void show();     //function declaration for show data
void search();     //function declaration for search data
void update();      //function declaration for update data
void deleterecord();  //function declaration for delete data
void exit();            //function declaration for exit from program
int total=0;
int main(){
	int value;
	system("color 1");
	cout<<"\n\n*******************************************STUDENT MANAGEMENT SYSTEM****************************************************"<<endl<<endl;
	cout<<"******************************BY:WASEEM ALI GOPANG************ROLL NO:20SW022***********SECTION:III*********************"<<endl;
    while(true){
    cout<<endl<<endl;
	cout<<"Press 1 to enter data:"<<endl;
	cout<<"Press 2 to show data:"<<endl;
	cout<<"Press 3 to search data:"<<endl;
	cout<<"Press 4 to update data:"<<endl;
	cout<<"Press 5 to delete data:"<<endl;
	cout<<"Press 6 to exit from program:"<<endl;
	cin>>value;
	cout<<endl;
	switch(value){
		case 1:{
			enter();   //function calling of enter function
			break;}
		case 2:{
				show();  //function calling of show function
				break;}
		case 3:{
			search();  //function calling of search function
			break;}
		case 4:{
			update();   //function calling of update function
			break;}
		case 5:{
			deleterecord();   //function calling of delete function
			break;}
		case 6:{
			exit(0);    //exit function with default value
			break;
		}
		default:{
			cout<<"Invalid input!";
			break;}
		}// end of switch statement
	}//end of while loop
	}//end of main
	
void enter(){               //function definition of enter function
	int choice=0;
	   cout<<"How many students do you want to enter:";
	   cin>>choice;
 if(total==0){
        total=total+choice;
           for(int i=0;i<choice;i++){
     	
	         cout<<"\nEnter the Data of Student:"<<i+1<<endl;
	         cout<<"Enter Name:";
	         cin>>name[i];
	         cout<<"Enter Father's name:";
	         cin>>fname[i];
	         cout<<"Enter Roll no:";
	         cin>>rollno[i];
	         cout<<"Enter course:";
	         cin>>course[i];
	         cout<<"Enter class:";
	         cin>>clas[i];
	         cout<<"Enter Student's contact no:";
	         cin>>contact[i];
	         cout<<"Enter Father's contact number:";
	         cin>>fathercontact[i];
	         cout<<"Enter Student's blood group:";
	         cin>>bloodgroup[i];
	         cout<<"Enter address:";
	         cin>>address[i];
	         
}// end of for loop
    }//end of if condition
else{
      for(int i=total;i<choice+total;i++){
      	
     	     cout<<"\nEnter the Data of Student:"<<i+1<<endl;
	         cout<<"Enter Name:";
	         cin>>name[i];
	         cout<<"Enter Father's name:";
	         cin>>fname[i];
	         cout<<"Enter Roll no:";
	         cin>>rollno[i];
	         cout<<"Enter course:";
	         cin>>course[i];
	         cout<<"Enter class:";
	         cin>>clas[i];
	         cout<<"Enter Student's contact no:";
	         cin>>contact[i];
	         cout<<"Enter Father's contact number:";
	         cin>>fathercontact[i];
	         cout<<"Enter Student's blood group:";
	         cin>>bloodgroup[i];
	         cout<<"Enter address:";
	         cin>>address[i];
 }//end of for loop
	total=total+choice;
	 }//end of else condition    
       }//end of function enter

void show(){         //function definition of show function
	if(total==0){
		 cout<<"Dear User you do not have entered any data till yet so please firstly enter data!";
	 }
	else{
	      for(int i=0;i<total;i++){
	      	
	     	 cout<<"\nData of Student: "<<i+1<<endl;
             cout<<"Name: "<<name[i]<<endl;
	         cout<<"Father's name: "<<fname[i]<<endl;
	         cout<<"Roll no: "<<rollno[i]<<endl;
	         cout<<"course: "<<course[i]<<endl;
	         cout<<"class: "<<clas[i]<<endl;
	         cout<<"Student's contact no: "<<contact[i]<<endl;
	         cout<<"Father's contact number: "<<fathercontact[i]<<endl;
	         cout<<"Student's blood group: "<<bloodgroup[i]<<endl;
	         cout<<"address: "<<address[i]<<endl;
   }//end of for loop
     }//end of else condition 
     }//end of  function show
       
void search(){     //function definition of search function
	if(total==0){
		cout<<"Dear user no data is available to search!";}
		else{
	string rollnumber;
	 cout<<"Enter roll no of student do you want to search:";
	  cin>>rollnumber;
	for(int i=0;i<total;i++){
	     if(rollnumber==rollno[i]){
		     cout<<"Name is :"<<name[i]<<endl;
	         cout<<"Father name is :"<<fname[i]<<endl;
	         cout<<"Roll no is :"<<rollno[i]<<endl;
	         cout<<"course is :"<<course[i]<<endl;
	         cout<<"class is :"<<clas[i]<<endl;
	         cout<<"Student's contact no is :"<<contact[i]<<endl;
	         cout<<"Father's contact number is:"<<fathercontact[i]<<endl;
	         cout<<"Student's blood group is:"<<bloodgroup[i]<<endl;
	         cout<<"address is  :"<<address[i]<<endl;
	}//end of inner  condition
      }//end of for loop
        }//end of else condition
          }//end of function search

void update(){    //function defintion of update function
	if(total==0){
		cout<<"Dear user no data is available to update!";
	}
	else{
    	string rollnumber;
    	cout<<"Enter the roll no of student do you want to update:";
    	cin>>rollnumber;
	  for(int i=0;i<total;i++){
	    	if(rollnumber==rollno[i]){
			    cout<<"\nPrevious Data of Student is:"<<endl;
			    
			    cout<<"Name is :"<<name[i]<<endl;
	            cout<<"Father name is :"<<fname[i]<<endl;
	            cout<<"Roll no is :"<<rollno[i]<<endl;
	            cout<<"course is :"<<course[i]<<endl;
	            cout<<"class is :"<<clas[i]<<endl;
	            cout<<"Student's contact no is :"<<contact[i]<<endl;
	            cout<<"Father's contact number is:"<<fathercontact[i]<<endl;
	            cout<<"Student's blood group is:"<<bloodgroup[i]<<endl;
	            cout<<"address is  :"<<address[i]<<endl;
	            
			    cout<<"\nEnter New Data of Student:"<<endl;
			    
			    cout<<"Enter Name:";
	            cin>>name[i];
	            cout<<"Enter Father name:";
	            cin>>fname[i];
	            cout<<"Enter Roll no:";
	            cin>>rollno[i];
	            cout<<"Enter course:";
	            cin>>course[i];
	            cout<<"Enter class:";
	            cin>>clas[i];
	            cout<<"Enter Student's contact no:";
	            cin>>contact[i];
	            cout<<"Enter Father's contact number:";
	            cin>>fathercontact[i];
	            cout<<"Enter Student's bloodgroup:";
	            cin>>bloodgroup[i];
	            cout<<"Enter address:";
	            cin>>address[i];
		}//end of if condition
	}//end of for loop
 }//end of else condition
}//end of function update

void deleterecord(){   //function definition of delete function
	if(total==0)
	{
		cout<<"Dear user no data is saved!"<<endl;
	}
	else{
		int a;
	        	cout<<"Press 1 to delete all record"<<endl;
				cout<<"Press 2 to delete specific record"<<endl;
				cin>>a;
				if(a==1)
				{
					total=0;
					cout<<"All record is deleted..!!"<<endl;
				}
				else if(a==2)
				{
				string rollnumber;
				cout<<"Enter the roll no of student do you want to delete"<<endl;
				cin>>rollnumber;
				for(int i=0;i<total;i++)
				{
					if(rollnumber==rollno[i])
					{
						for(int j=i;j<total;j++)
						{
						name[j]=name[j+1];
	                    fname[j]=fname[j+1];
	                    rollno[j]=rollno[j+1];
	                    course[j]=course[j+1];
	                    clas[j]=clas[j+1];
	                    contact[j]=contact[j+1];
	                    fathercontact[j]=fathercontact[j+1];
	                    bloodgroup[j]=bloodgroup[j+1];
	                    address[j]=address[j+1];
				     	}//end of for loop
					total--;
					cout<<"Your required record is deleted"<<endl;
				}//end of if condition
	     	}//end of for loop
		}//end of elseif condition
	}//end of else condition
}//end of function delete
