	// ofstream MyFile("students.txt");
	// MyFile<<roll<<","<<Name<<","<<Gender<<","<<Age;
	// MyFile.close();

	// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Node Class
class Node {
public:
	int roll;
	string Name;
	string Gender;
	int Age;
	Node* next;
};

// Stores the head of the Linked List
Node* head = new Node();

// Check Function to check that if
// Record Already Exist or Not
bool check(int x)
{
	// Base Case
	if (head == NULL)
		return false;

	Node* t = new Node;
	t = head;

	// Traverse the Linked List
	while (t != NULL) {
		if (t->roll == x)
			return true;
		t = t->next;
	}

	return false;
}

ofstream MyFile("students.txt");

// Function to insert the record
void Insert_Record(int roll, string Name,
				string Gender, int Age)
{
	// if Record Already Exist
	if (check(roll)) {
		cout << "Student with this "
			<< "record Already Exists\n";
		return;
	}

	// Create new Node to Insert Record
	Node* t = new Node();
	t->roll = roll;
	t->Name = Name;
	t->Gender = Gender;
	t->Age = Age;
	t->next = NULL;

	
	MyFile<<roll<<","<<Name<<","<<Gender<<","<<Age;


	// Insert at Begin
	if (head == NULL
		|| (head->roll >= t->roll)) {
		t->next = head;
		head = t;
	}

	// Insert at middle or End
	else {
		Node* c = head;
		while (c->next != NULL
			&& c->next->roll < t->roll) {
			c = c->next;
		}
		t->next = c->next;
		c->next = t;
	}

	cout << "Record Inserted "
		<< "Successfully\n";
	MyFile.close();
}

// Function to search record for any
// students Record with roll number
void Search_Record(int roll)
{
	// if head is NULL
	if (!head) {
		cout << "No such Record "
			<< "Available\n";
		return;
	}

	// Otherwise
	else {
		Node* p = head;
		while (p) {
			if (p->roll == roll) {
				cout << "Roll Number\t"
					<< p->roll << endl;
				cout << "Name\t\t"
					<< p->Name << endl;
				cout << "Gender\t"
					<< p->Gender << endl;
				cout << "Age\t\t"
					<< p->Age << endl;
				return;
			}
			p = p->next;
		}

		if (p == NULL)
			cout << "No such Record "
				<< "Available\n";
	}
}

// Function to delete record students
// record with given roll number
// if it exist
int Delete_Record(int roll)
{
	Node* t = head;
	Node* p = NULL;

	// Deletion at Begin
	if (t != NULL
		&& t->roll == roll) {
		head = t->next;
		delete t;

		cout << "Record Deleted "
			<< "Successfully\n";
		return 0;
	}

	// Deletion Other than Begin
	while (t != NULL && t->roll != roll) {
		p = t;
		t = t->next;
	}
	if (t == NULL) {
		cout << "Record does not Exist\n";
		return -1;
		p->next = t->next;

		delete t;
		cout << "Record Deleted "
			<< "Successfully\n";

		return 0;
	}
}

// Function to display the Student's
// Record
void Show_Record()
{
	Node* p = head;
	if (p == NULL) {
		cout << "No Record "
			<< "Available\n";
	}
	else {
		cout << "Index\tName\tGender"
			<< "\tMarks\n";

		// Until p is not NULL
		while (p != NULL) {
			cout << p->roll << " \t"
				<< p->Name << "\t"
				<< p->Gender << "\t"
				<< p->Age << endl;
			p = p->next;
		}
	}
}

// Driver code
int main()
{
	head = NULL;
	string Name, Gender;
	int Roll, Age;

	// Menu-driven program
	while (true) {
		cout << "\n\t\tWelcome to Student Record "
				"Management System\n\n\tPress\n\t1 to "
				"create a new Record\n\t2 to Search a Student "
				"Record\n\t3 to view all students "
				"record\n\t4 to Exit\n";
		cout << "\nEnter your Choice\n";
		int Choice;

		// Enter Choice
		cin >> Choice;
		if (Choice == 1) {
			cout << "Enter Name of Student\n";
			cin >> Name;
			cout << "Enter Roll Number of Student\n";
			cin >> Roll;
			cout << "Enter Gender of Student \n";
			cin >> Gender;
			cout << "Enter Age of Student\n";
			cin >> Age;
			Insert_Record(Roll, Name, Gender, Age);
		}
		else if (Choice == 2) {
			cout << "Enter Roll Number of Student whose "
					"record you want to Search\n";
			cin >> Roll;
			Search_Record(Roll);
		}
		else if (Choice == 3) {
			Show_Record();
		}
		else if (Choice == 4) {
			exit(0);
		}
		else {
			cout << "Invalid Choice "
				<< "Try Again\n";
		}
	}
	return 0;
}
