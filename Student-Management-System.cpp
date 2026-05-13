#include<iostream>
using namespace std;

struct Student {
    string name;
    string rollNo;
    string course;
    string studentClass;
    string contact;
};

Student s[20];

int total = 0;

void enter() {

    int choice;

    cout << "How many students do you want to enter : ";
    cin >> choice;

    if(total + choice > 20) {
        cout << "Storage is full" << endl;
        return;
    }

    for(int i = total; i < total + choice; i++) {

        cout << "\nEnter data of student " << i + 1 << endl;

        cout << "Enter name : ";
        cin >> s[i].name;

        cout << "Enter roll no : ";
        cin >> s[i].rollNo;

        cout << "Enter course : ";
        cin >> s[i].course;

        cout << "Enter class : ";
        cin >> s[i].studentClass;

        cout << "Enter contact : ";
        cin >> s[i].contact;
    }

    total = total + choice;
}

void show() {

    if(total == 0) {

        cout << "No data is entered" << endl;
    }
    else {

        for(int i = 0; i < total; i++) {

            cout << "\nData of Student " << i + 1 << endl;

            cout << "Name : " << s[i].name << endl;

            cout << "Roll No : " << s[i].rollNo << endl;

            cout << "Course : " << s[i].course << endl;

            cout << "Class : " << s[i].studentClass << endl;

            cout << "Contact : " << s[i].contact << endl;
        }
    }
}

void search() {

    if(total == 0) {

        cout << "No data is entered" << endl;
    }
    else {

        string rollno;

        cout << "Enter roll no of student : ";
        cin >> rollno;

        bool found = false;

        for(int i = 0; i < total; i++) {

            if(rollno == s[i].rollNo) {

                cout << "\nStudent Found" << endl;

                cout << "Name : " << s[i].name << endl;

                cout << "Roll No : " << s[i].rollNo << endl;

                cout << "Course : " << s[i].course << endl;

                cout << "Class : " << s[i].studentClass << endl;

                cout << "Contact : " << s[i].contact << endl;

                found = true;
            }
        }

        if(found == false) {

            cout << "Student not found" << endl;
        }
    }
}

void update() {

    if(total == 0) {

        cout << "No data is entered" << endl;
    }
    else {

        string rollno;

        cout << "Enter roll no of student which you want to update : ";
        cin >> rollno;

        bool found = false;

        for(int i = 0; i < total; i++) {

            if(rollno == s[i].rollNo) {

                cout << "\nEnter new data" << endl;

                cout << "Enter name : ";
                cin >> s[i].name;

                cout << "Enter roll no : ";
                cin >> s[i].rollNo;

                cout << "Enter course : ";
                cin >> s[i].course;

                cout << "Enter class : ";
                cin >> s[i].studentClass;

                cout << "Enter contact : ";
                cin >> s[i].contact;

                found = true;

                cout << "Record updated successfully" << endl;
            }
        }

        if(found == false) {

            cout << "Student not found" << endl;
        }
    }
}

void deleteRecord() {

    if(total == 0) {

        cout << "No data is entered" << endl;
    }
    else {

        string rollno;

        cout << "Enter roll no of student which you want to delete : ";
        cin >> rollno;

        bool found = false;

        for(int i = 0; i < total; i++) {

            if(rollno == s[i].rollNo) {

                for(int j = i; j < total - 1; j++) {

                    s[j] = s[j + 1];
                }

                total--;

                found = true;

                cout << "Record deleted successfully" << endl;

                break;
            }
        }

        if(found == false) {

            cout << "Student not found" << endl;
        }
    }
}

int main() {

    int value;

    while(true) {

        cout << "\n========= Student Management System =========" << endl;

        cout << "Press 1 to enter data" << endl;

        cout << "Press 2 to show data" << endl;

        cout << "Press 3 to search data" << endl;

        cout << "Press 4 to update data" << endl;

        cout << "Press 5 to delete data" << endl;

        cout << "Press 6 to exit" << endl;

        cout << "Enter your choice : ";

        cin >> value;

        switch(value) {

            case 1:
                enter();
                break;

            case 2:
                show();
                break;

            case 3:
                search();
                break;

            case 4:
                update();
                break;

            case 5:
                deleteRecord();
                break;

            case 6:
                exit(0);

            default:
                cout << "Invalid input" << endl;
        }
    }

    return 0;
}