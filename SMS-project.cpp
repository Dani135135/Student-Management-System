/* 
   DATE: JULY 30, 2024
   NAME : DANISH MANZOOR
   PROGRAM : C++ PROGRAMMING LANGUAGE 
   COMPANY: HISKYTECH
   EMAIL: danish.cys22.aumc@gmail.com
   TASK NO. 1 
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Student{
	int ID;                                               // Structure contain student information
	string name;
	int age;
	char grade;
};
void addStudent(){
	Student s;
	ofstream outfile("student.txt");
	ofstream outFile2("id.txt");
	cout<<"\n********** Add Student **********\n"<<endl;   // Add the student information in the file
	cout<<"Enter Student ID: ";
	cin>>s.ID;
	cout<<"Enter Student Name: ";
	cin>>s.name;
	cout<<"Enter Age of Student: ";
	cin>>s.age;
	cout<<"Enter Grade of Student: ";
	cin>>s.grade;
	outfile<<"ROLL ID: "<< s.ID <<" NAME: " << s.name << " AGE: "<< s.age << " GRADE: "<< s.grade<<endl;
	outFile2<< s.ID <<endl;
		outfile.close();
		outFile2.close();
}
void editStudent()                                       //Edit the student information in the file
{
	Student stu;
	string id;
	string num;
	fstream inFile("student.txt");
	fstream outFile2("id.txt");
	cout<<"\n********** Update Record Of Student **********\n"<<endl;
	cout<<"Enter Student ID for update: ";
	cin>>id;
	while(getline(outFile2, num))
	{
		if(num==id)
		{
			cout<<"Student ID exist in record!!"<<endl;
			cout<<"Enter new Student Name: ";
			cin>>stu.name;
			cout<<"Enter new Student Age: ";
			cin>>stu.age;
			cout<<"Enter new Student Grade: ";
			cin>>stu.grade;
			inFile<<"Roll ID: "<< id << " Name: " << stu.name << " Age: " << stu.age << " GRADE: "<< stu.grade <<endl;
			cout<<"Student record update successfully!!"<<endl;
		}
		else{
			cout<<"Cant Update! Student doesn't exist in record..."<<endl;
		}
	}
	inFile.close();
	outFile2.close();
	
}
void deleteStudent()                                       //Delete Student Record in the file
{
   string id;
    string num;
    ifstream inFile("student.txt");
    ifstream idFile("id.txt");
    ofstream tempFile("temp.txt");
    ofstream tempIdFile("temp_id.txt");
    bool found = false;

    cout << "\n********** Delete Student Record **********\n" << endl;
    cout << "Enter Student ID to delete: ";
    cin >> id;

    while (getline(idFile, num)) {
        if (num == id) {
            found = true;
            while (getline(inFile, num)) {
                if (num.find("ROLL ID: " + id) == string::npos) {
                    tempFile << num << endl;
                }
            }
        } else {
            tempIdFile << num << endl;
        }
    }

    inFile.close();
    idFile.close();
    tempFile.close();
    tempIdFile.close();

    remove("student.txt");
    rename("temp.txt", "student.txt");

    remove("id.txt");
    rename("temp_id.txt", "id.txt");

    if (found) {
        cout << "Student record deleted successfully!!" << endl;
    } else {
        cout << "Can't Delete! Student doesn't exist in record..." << endl;
    }
	
}
void viewStudent()                                      //Displaying information of the student
{
	ifstream inFile("student.txt");
	string record;
	cout<<"\n********** Displaying Record Of Student **********\n"<<endl;
	while (getline(inFile, record))
	{
		cout<< record<< endl;
	}
	inFile.close();
}
void searchStudent()                                   // Searching the student information by ID
{
	string id;
	string record;
	string data;
	fstream inFile("student.txt");
	fstream outFile2("id.txt");
	cout<<"\n**********  SEARCHING STUDENT  **********\n"<<endl;
	cout<<"Enter Student ID : ";
	cin>>id;
	while(getline(outFile2, record))
	{
		if(record==id)
		{
		cout<<"Student Record Founded!"<<endl;
		cout<<"\n********** Here's The Record Of Student **********\n"<<endl;
	
	while (getline(inFile, data))
	{
		cout<< data << endl;
	}	
		}
		else
		{
			cout<<"Can't Search! Student Record doesn't Exist..."<<endl;
		}
	}
	outFile2.close();
	inFile.close();
}
int main()
{
	int choice;
	char again;
	cout<<"\n***********WELCOME TO STUDENT MANAGEMENT SYSTEM***********\n"<<endl;
	do
	{
		cout<<"\n1. ADD STUDENT"<<endl;
		cout<<"2. EDIT STUDENT"<<endl;
		cout<<"3. DELETE STUDENT"<<endl;
		cout<<"4. VIEW STUDENT RECORD"<<endl;
		cout<<"5. SEARCH STUDENT"<<endl;
		cout<<"6. EXIT"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch (choice)
		{
			case 1:
				addStudent();
				break;
			case 2:
				editStudent();
				break;
			case 3:
				deleteStudent();
				break;
			case 4:
				viewStudent();
				break;
			case 5:
				searchStudent();
				break;
			case 6:
				cout<<"Are you really want to Exit?: ";
				cin>>again;
				cout<<"Thank you :)"<<endl;
				return 1;
			default:
				cout<<"Invalid Choice!!"<<endl;
				break;
		}
		cout<<"Do you want to perform again?('Y'or'y'):  ";
		cin>>again;
	}while(again=='y' || again=='Y' );
	
	return 0;
}
