#include <iostream>
#include <string>
using namespace std;
struct info{
	int num, physics, chemistry, maths, english, computer_science;
	string name;
	double per;
	string grade;
};
info student[50];
int counter = 0;
bool Deleted[50];
void Class_result();
void Student_Report();
int ResultMenu();
void RESULT_MENU(int option2);
void Modify();
void search();
void Creat_Record();
void Display();
void Delete();
int EntryMenu();
void ENTRY_MENU(int option3);
int Exit();
void check(int option);
int Main_Menu();
void Back();
void Student_Report_Card();
void Back_Result();
void Back_Result()
{
	system("cls");
	check(Main_Menu());
}
void Student_Report_Card()
{
	string str;
	int n;
	cout << "\n\tEnter the roll number of student : ";
	cin >> n;
	for (int i = 0; i < 50; i++)
	{
		if (n == student[i].num)
		{
			cout << "\n\tRoll number of student : ";
			cout << student[i].num;
			cout << "\n\tName of student :";
			cout << student[i].name;
			cout << "\n\tMarks in Physics : ";
			cout << student[i].physics;
			cout << "\n\tMarks in Chemistry : ";
			cout << student[i].chemistry;
			cout << "\n\tMarks in Maths : ";
			cout << student[i].maths;
			cout << "\n\tMarks in english : ";
			cout << student[i].english;
			cout << "\n\tMarks in computer science : ";
			cout << student[i].computer_science;
			cout << "\n\tPercentage of student is  :";
			cout << student[i].per;
			cout << "\n\tGrade of student is :";
			cout << student[i].grade;
			cin.ignore();
			getline(cin, str);
			system("cls");
			check(Main_Menu());
		}
	}
	cout << "This Record Cant't Found !!";
	cin.ignore();
	getline(cin, str);
	system("cls");
	check(Main_Menu());
}
void Class_result()
{
	string str;
	cout << "\n\n\t\tALL STUDENTS RESULT \n\n";
	cout << "===================================================================\n";
	cout << "R.No       Name        P    C    M    E    CS    %age    Grade      \n";
	cout << "===================================================================\n";
	for (int i = 0; i < 50; i++)
	{
		if (student[i].num != 0)
		{
			cout << student[i].num << "\t\t" << student[i].name << "\t\t" << student[i].physics << "\t" << student[i].chemistry << "\t" << student[i].maths << "\t" << student[i].english << "\t" << student[i].computer_science << "\t" << student[i].per << "\t" << student[i].grade;

		}
	}
	cin.ignore();
	getline(cin, str);
	system("cls");
	check(Main_Menu());
}
int ResultMenu()
{
	int option2;
	cout << "\n\n\t MAIN MENU";
	cout << "\n\t1. Class Result";
	cout << "\n\t2. Student Report Card";
	cout << "\n\t3. Back To Main Menu";
	cout << "\n\t Enter choice (1/2/3) ?";
	cin >> option2;
	system("cls");
	return option2;
}
void RESULT_MENU(int option2)
{

	switch (option2)
	{
	case 1:Class_result(); break;
	case 2:Student_Report_Card(); break;
	case 3:Back_Result(); break;
	default:break;
	}
}
void Creat_Record()
{
	string str;
	int n;
	cout << "\n\tEnter the roll number of student : ";
	cin >> n;
	for (int i = 0; i <= counter; i++)
	{
		if (n != student[i].num)
		{
			continue;
		}
		else
		{
			while (n == student[i].num)
			{
				cout << "\n\tPlease,Enter the roll number of student : ";//علشان لو دخل نفس الرقم التاني
				cin >> n;
			}

		}
	}
	student[counter].num = n;
	cout << "\n\tEnter the name of student :";
	cin.ignore();
	getline(cin, student[counter].name);
	cout << "\n\tEnter The marks in physics out of 100 : ";
	cin >> student[counter].physics;
	while (student[counter].physics > 100)
	{
		cout << "\n\tplease, enter number <=100";
		cin >> student[counter].physics;
	}
	cout << "\n\tEnter The marks in chemistry out of 100 : ";
	cin >> student[counter].chemistry;
	while (student[counter].chemistry> 100)
	{
		cout << "\n\tplease, enter number <=100";
		cin >> student[counter].chemistry;
	}
	cout << "\n\tEnter The marks in maths out of 100 : ";
	cin >> student[counter].maths;
	while (student[counter].maths> 100)
	{
		cout << "\n\tplease, enter number <=100";
		cin >> student[counter].maths;
	}
	cout << "\n\tEnter The marks in english out of 100 : ";
	cin >> student[counter].english;
	while (student[counter].english> 100)
	{
		cout << "\n\tplease, enter number <=100";
		cin >> student[counter].english;
	}
	cout << "\n\tEnter The marks in computer science out of 100 : ";
	cin >> student[counter].computer_science;
	while (student[counter].computer_science> 100)
	{
		cout << "\n\tplease, enter number <=100";
		cin >> student[counter].computer_science;
	}
	cout << "\n\n\tStudent record has been create";
	student[counter].per = (student[counter].physics + student[counter].chemistry + student[counter].maths + student[counter].english + student[counter].computer_science) / 5.0;
	if (student[counter].per >= 90 && student[counter].per <= 100)
	{
		student[counter].grade = "A";
	}
	else if (student[counter].per >= 85)
	{
		student[counter].grade = "-A";
	}
	else if (student[counter].per >= 80)
	{
		student[counter].grade = "+B";
	}
	else if (student[counter].per >= 75)
	{
		student[counter].grade = "B";
	}
	else if (student[counter].per >= 70)
	{
		student[counter].grade = "-B";
	}
	else if (student[counter].per >= 65)
	{
		student[counter].grade = "+C";
	}
	else if (student[counter].per >= 60)
	{
		student[counter].grade = "C";
	}
	else if (student[counter].per >= 55)
	{
		student[counter].grade = "-C";
	}
	else if (student[counter].per >= 50)
	{
		student[counter].grade = "+D";
	}
	else if (student[counter].per >= 45)
	{
		student[counter].grade = "D";
	}
	else
	{
		student[counter].grade = "F";
	}
	if (counter < 100)
	{
		counter++;
	}
	else
	{
		for (int i = 0; i < 50; i++)
		{

			if (Deleted[i] == true)
			{
				counter = i++;
				system("cls");
				check(Main_Menu());
			}
		}
		cout << "students reports cards is full !!" << endl;
	}
	cin.ignore();
	getline(cin, str);
	system("cls");
	check(Main_Menu());
}
void Display()
{
	string str;
	cout << "\n\n\tDISPLAY ALL RECORDS";
	for (int i = 0; i < 50; i++)
	{
		if (student[i].num != 0)
		{
			cout << "\n\tRoll number of student : ";
			cout << student[i].num;
			cout << "\n\tName of student :";
			cout << student[i].name;
			cout << "\n\tMarks in Physics : ";
			cout << student[i].physics;
			cout << "\n\tMarks in Chemistry : ";
			cout << student[i].chemistry;
			cout << "\n\tMarks in Maths : ";
			cout << student[i].maths;
			cout << "\n\tMarks in english : ";
			cout << student[i].english;
			cout << "\n\tMarks in computer science : ";
			cout << student[i].computer_science;
			cout << "\n\tPercentage of student is  :";
			cout << student[i].per;
			cout << "\n\tGrade of student is :";
			cout << student[i].grade;
			cout << "\n==================================";
		}
	}
	cin.ignore();
	getline(cin, str);
	system("cls");
	check(Main_Menu());
}
void search(){
	int n;
	string str;
	string str1;
	int op;
	cout << "If you want to search about name enter 1\n" << endl;
	cout << "If you want to search about student number enter 2" << endl;
	cin >> op;
	while (op != 1 && op != 2)
	{
		cout << "Please Enter 1 or 2" << endl;
		cin >> op;
	}
	if (op == 1)
	{
		cout << "\n\tEnter  the name of student : ";
		getline(cin, str1);
		getline(cin, str1);
		for (int i = 0; i < 50; i++)
		{
			if (str1 == student[i].name)
			{
				cout << "\n\tRoll number of student : ";
				cout << student[i].num;
				cout << "\n\tName of student :";
				cout << student[i].name;
				cout << "\n\tMarks in Physics : ";
				cout << student[i].physics;
				cout << "\n\tMarks in Chemistry : ";
				cout << student[i].chemistry;
				cout << "\n\tMarks in Maths : ";
				cout << student[i].maths;
				cout << "\n\tMarks in english : ";
				cout << student[i].english;
				cout << "\n\tMarks in computer science : ";
				cout << student[i].computer_science;
				cout << "\n\tPercentage of student is  :";
				cout << student[i].per;
				cout << "\n\tGrade of student is :";
				cout << student[i].grade;
				cin.ignore();
				getline(cin, str);
				system("cls");
				check(Main_Menu());
			}
		}
		// في هنا سؤال 
		cout << "\nThis Record Can't Found !" << endl;
		cin.ignore();
		getline(cin, str);
		system("cls");
		check(Main_Menu());

	}

	else if (op == 2)
	{
		cout << "\n\tEnter the roll number of student : ";
		cin >> n;
		for (int i = 0; i < 50; i++)
		{
			if (n == student[i].num)
			{
				cout << "\n\tRoll number of student : ";
				cout << student[i].num;
				cout << "\n\tName of student :";
				cout << student[i].name;
				cout << "\n\tMarks in Physics : ";
				cout << student[i].physics;
				cout << "\n\tMarks in Chemistry : ";
				cout << student[i].chemistry;
				cout << "\n\tMarks in Maths : ";
				cout << student[i].maths;
				cout << "\n\tMarks in english : ";
				cout << student[i].english;
				cout << "\n\tMarks in computer science : ";
				cout << student[i].computer_science;
				cout << "\n\tPercentage of student is  :";
				cout << student[i].per;
				cout << "\n\tGrade of student is :";
				cout << student[i].grade;
				cin.ignore();
				getline(cin, str);
				system("cls");
				check(Main_Menu());

			}
		}
		cout << "\nThis Record Can't Found !" << endl;
		cin.ignore();
		getline(cin, str);
		system("cls");
		check(Main_Menu());
	}

}

void Modify()
{
	string str;
	int n;
	cout << "\n\tEnter the roll number of student : ";
	cin >> n;
	for (int i = 0; i < 50; i++)
	{
		if (n == student[i].num)
		{
			cout << "\n\tRoll number of student : ";
			cout << student[i].num;
			cout << "\n\tName of student :";
			cout << student[i].name;
			cout << "\n\tMarks in Physics : ";
			cout << student[i].physics;
			cout << "\n\tMarks in Chemistry : ";
			cout << student[i].chemistry;
			cout << "\n\tMarks in Maths : ";
			cout << student[i].maths;
			cout << "\n\tMarks in english : ";
			cout << student[i].english;
			cout << "\n\tMarks in computer science : ";
			cout << student[i].computer_science;
			cout << "\n\tPercentage of student is  :";
			cout << student[i].per;
			cout << "\n\tGrade of student is :";
			cout << student[i].grade;
			cout << "\n\nplease enter the new details of student ";

			cout << "\nEnter the roll number of student : ";
			cin >> n;
			for (int i = 0; i <= counter; i++)
			{
				if (n != student[i].num)
				{
					continue;
				}
				else
				{
					while (n == student[i].num)
					{
						cout << "\n\tPlease,Enter the roll number of student : ";//علشان لو دخل نفس الرقم التاني
						cin >> n;
					}

				}
			}

			student[i].num = n;
			cout << "\nEnter the name of student :";
			getline(cin, student[i].name);
			getline(cin, student[i].name);
			cout << "\n\tEnter The marks in physics out of 100 : ";
			cin >> student[counter].physics;
			while (student[counter].physics > 100)
			{
				cout << "\n\tplease, enter number <=100";
				cin >> student[counter].physics;
			}
			cout << "\n\tEnter The marks in chemistry out of 100 : ";
			cin >> student[counter].chemistry;
			while (student[counter].chemistry> 100)
			{
				cout << "\n\tplease, enter number <=100";
				cin >> student[counter].chemistry;
			}
			cout << "\n\tEnter The marks in maths out of 100 : ";
			cin >> student[counter].maths;
			while (student[counter].maths> 100)
			{
				cout << "\n\tplease, enter number <=100";
				cin >> student[counter].maths;
			}
			cout << "\n\tEnter The marks in english out of 100 : ";
			cin >> student[counter].english;
			while (student[counter].english> 100)
			{
				cout << "\n\tplease, enter number <=100";
				cin >> student[counter].english;
			}
			cout << "\n\tEnter The marks in computer science out of 100 : ";
			cin >> student[counter].computer_science;
			while (student[counter].computer_science> 100)
			{
				cout << "\n\tplease, enter number <=100";
				cin >> student[counter].computer_science;
			}
			cout << "\n\n\t Record Update";
			student[i].per = (student[i].physics + student[i].chemistry + student[i].maths + student[i].english + student[i].computer_science) / 5.0;
			if (student[i].per >= 90 && student[i].per <= 100)
			{
				student[i].grade = "A";
			}
			else if (student[i].per >= 85)
			{
				student[i].grade = "-A";
			}
			else if (student[i].per >= 80)
			{
				student[i].grade = "+B";
			}
			else if (student[i].per >= 75)
			{
				student[i].grade = "B";
			}
			else if (student[i].per >= 70)
			{
				student[i].grade = "-B";
			}
			else if (student[i].per >= 65)
			{
				student[i].grade = "+C";
			}
			else if (student[i].per >= 60)
			{
				student[i].grade = "C";
			}
			else if (student[i].per >= 55)
			{
				student[i].grade = "-C";

			}
			else if (student[i].per >= 50)
			{
				student[i].grade = "+D";
			}
			else if (student[i].per >= 45)
			{
				student[i].grade = "D";
			}
			else
			{
				student[i].grade = "F";
			}
		}
	}

	cin.ignore();
	getline(cin, str);
	system("cls");
	check(Main_Menu());
}
void Delete()
{
	string str;
	int n;
	cout << "\n\tEnter the roll number of student : ";
	cin >> n;
	for (int i = 0; i < 50; i++)
	{
		if (n == student[i].num)
		{
			student[i].num = 0;
			student[i].name = " ";
			student[i].physics = 0;
			student[i].chemistry = 0;
			student[i].maths = 0;
			student[i].english = 0;
			student[i].computer_science = 0;
			student[i].per = 0.0;
			student[i].grade = ' ';
			Deleted[i] = true;
			cout << "\nstudent report card is deleted ";
		}
	}
	cin.ignore();
	getline(cin, str);
	system("cls");
	check(Main_Menu());
}
void Back()
{
	system("cls");
	check(Main_Menu());
}
int EntryMenu(){
	int option3;
	cout << "\n\n\n\tENTRY MENU";
	cout << "\n\n\t1.CREATE STUDENT RECORD";
	cout << "\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
	cout << "\n\n\t3.SEARCH STUDENT RECORD ";
	cout << "\n\n\t4.MODIFY STUDENT RECORD";
	cout << "\n\n\t5.DELETE STUDENT RECORD";
	cout << "\n\n\t6.BACK TO MAIN MENU";
	cout << "\n\n\tPlease Enter Your Choice (1-6) ";
	cin >> option3;
	system("cls");
	return option3;
}
void ENTRY_MENU(int option3)
{
	switch (option3)
	{
	case 1: Creat_Record(); break;
	case 2: Display(); break;
	case 3: search(); break;
	case 4: Modify(); break;
	case 5: Delete(); break;
	case 6: Back();   break;
	default:break;
	}
}
int Exit()
{
	return 0;
}
void check(int option)
{
	switch (option)
	{
	case 1: RESULT_MENU(ResultMenu()); break;
	case 2: ENTRY_MENU(EntryMenu()); break;
	case 3: Exit(); break;
	default:break;
	}
}
int Main_Menu()
{
	int option;
	cout << "\n\n\tMAIN MENU";
	cout << "\n\t01. RESULT MENU";
	cout << "\n\t02. ENTRY/EDIT MENU";
	cout << "\n\t03. EXIT";
	cout << "\n\tPlease Select Your Option (1-3) ";
	cin >> option;
	system("cls");
	return option;
}
int main(){
	for (int i = 0; i < 50; i++)
	{
		student[i].num = 0;
		student[i].name = " ";
		student[i].physics = 0;
		student[i].chemistry = 0;
		student[i].maths = 0;
		student[i].english = 0;
		student[i].computer_science = 0;
		student[i].per = 0.0;
		student[i].grade = " ";

	}
	check(Main_Menu());
	system("pause");
	return 0;
}