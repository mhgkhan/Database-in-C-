/*

	WELCOME TO GHAZNA DB PROJECT
	FREE SOURCE CODE ON GITHUB
	
		THIS IS A SIMPLE LIKE DATABASE  PROJECT WRITTEN N C++ WITH CLASSES (OOPS)
		this project is for to add update and display record of employee (name,id and salry)
		
		JUST FOR PARACTICE 
		THANKS FOR USING 
		
		
	
	FOLLOW US 

*/


#include <iostream>
#include <conio.h>
using namespace std;

class Data {

	public:
		int val;
		int count; //counter
		string name[10],id[10],salry[10];

			//1) 
		// this function is used when user want to add record into the databse ..
		void getData(void) {

//			clear screen
			system("cls");
			cout<<"How much user you want to add >3 & <10 ? \t";
			cin>>val;

			// user inputs
			for(int i=0; i<val; i++) {
				cout<<":=>   "<<i+1<<endl;
				cout<<"Enter Name :\t";
				cin>>name[i];
				cout<<"Enter Id :\t";
				cin>>id[i];
				cout<<"Enter Salry :\t";
				cin>>salry[i];
				cout<<"==========================================\n"<<endl;
				count = count+1;
			}

			cout<<"Sucessfully added .. ";
			getch();
			system("cls");
			cout<<"-----------------------------------------\n";
			cout<<"STARTED: .. "<<endl;
			header();

		}


		// 2) 
		// function for update the record using the user id ;
		void updateData(string ix) {
			if(val<1) {
				// clear screen
				cout<<"Database is Clear please enter the records first "<<endl;
				getch();
				system("cls");
				header();
			} else {

				//loop for our all load the database data
				for (int i = 0; i<val; i++) {

					// condition if user id is equal to the avaliable data id  if exist
					if(ix == id[i]) {
						// print the finded data
						cout<<"Name\t\t Id \t\t Salry"<<endl;
						for (int j=0; j<1; j++) {
							cout<<name[i]<<"\t\t"<<id[i]<<"\t\t"<<salry[i]<<endl;
						}

						// updaing the new data
						for(int j=0; j<1; j++) {
							cout<<"Enter the new Name : \t ";
							cin>>name[i];
							cout<<"Enter the new id : \t ";
							cin>>id[i];
							cout<<"Enter the new Salry : \t ";
							cin>>salry[i];
						}
						cout<<"Sucessfully updated .. ";
						getch();
						system("cls");
						cout<<"-----------------------------------------\n";
						cout<<"STARTED: .. "<<endl;
						header();

					} else {
						// clear the screeen
						system("cls");
						cout<<"No record found try again to another id "<<endl;
						cout<<"-----------------------------------------\n";
						cout<<"STARTED: .. "<<endl;
						header();
					}
				}
			}
		}



		// 3) 
		// function to print all the data in db
		void printData(void) {
			// clear screen
			system("cls");

			// checking if is not avaliable ? clear the screen else print all the data in the form of table
			if(count<1) {
				cout<<"tNo data to show "<<endl;
				getch();
				system("cls");
				header();
			} else {
				// printing the data in the form of table
				cout<<"\tS.No \t\tName\t\t ID \t\t Salry\t\t. "<<endl;
				for(int i=0; i<val; i++) {
					cout<<"\t"<<i<<"\t\t"<< name[i]<<"\t\t"<<id[i]<<"\t\t"<<salry[i]<<"."<<endl<<endl;
				}

				//clear the screen
				cout<<"Displayed.. ";
				getch();
				system("cls");
				cout<<"-----------------------------------------\n";
				cout<<"STARTED: .. "<<endl;
				header();
			}
		}
		
		
		
		// 4) 
//		header function
		void header() {
			
//			display for user
			cout<<"Press A to add the data "<<endl;
			cout<<"Press P to Print the data"<<endl;
			cout<<"Press U to update the data"<<endl;
			cout<<"Press X to Exit the Program"<<endl;

//input for user to run which one function of Base Class
			cout<<":=>\t ";
			cin>>choice;

			// processing the user input

//		if a new input data
			if(choice=='A'||choice== 'a') {
				getData();
			}

//		print the data
			else if(choice== 'P'|| choice== 'p') {
				printData();
			}

//		updating data
			else if(choice=='u' || choice=='U') {
				string i;
				cout<<"Enter the id to upate the record: \t";
				cin>>i;
				updateData(i);
			}

//		exit the program
			else if(choice=='x' || choice=='X') {
				exit(0);
			}

//		resolve error
			else {
				cout<<"Invalid Char "<<endl;
				getch();
				system("cls");
				header();
			}
		}

};

int main() {

//	STARTING THE PROGRAM 
	Base bs;
	bs.header();
	
	
	return 0;
}