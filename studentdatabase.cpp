#include <iostream>
#include <string.h>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int main()
{
    FILE *fp, *ft;
    char another, choice;
    struct student
    {
        char fname[50], lname[50];
        char course[100];
        int section;
    };
    student s;
    char xfname[50], xlname[50];
    long int recsize;
    fp = fopen("users.txt", "wb+");
    if (fp == NULL)
    {
        fp = fopen("users.txt", "rb+");
        if (fp == NULL)
        {
            puts("Cannot Open the File");
            return 0;
        }
    }
    recsize = sizeof(s);
    while (1)
    {
        cout << "\n\n\n\n\t\t\t********************STUDENT DATABASE MANAGEMENT SYSTEM****************************\n\n\n\n";
        cout << "\n\t\t\t\t1.Add Records\n\t\t\t\t"
             << "2.List Records\n\t\t\t\t"
             << "3.Modify Records\n\t\t\t\t"
             << "4.Delete Records\n\t\t\t\t"
             << "5.Exit\n\n\t\t\t\t"
             << "Enter the your Choice: ";
        fflush(stdin);
        choice = getche();
        switch (choice)
        {
        case '1':
            fseek(fp, 0, SEEK_END);
            another = 'Y';
            while (another == 'Y' || another == 'y')
            {
                cout << "Enter the First Name: ";
                cin >> s.fname;
                cout << "Enter the Last Name: ";
                cin >> s.lname;
                cout << "Enter the Course in which you Enrolled: ";
                cin >> s.course;
                cout << "Enter the Section: ";
                cin >> s.section;
                fwrite(&s, recsize, 1, fp);
                cout << "Add another Record(Y/N): ";
                fflush(stdin);
                another = getchar();
            }
            break;
        case '2':
            rewind(fp);
            cout << "****View the Records in the Database*****";
            cout << endl;
            while (fread(&s, recsize, 1, fp) == 1)
            {
                cout << "\n\n"
                     << s.fname << " " << s.lname
                     << "\n\n"
                     << s.course << " " << s.section;
            }
            cout << "\n";
            system("pause");
            break;
        case '3':
            system("cls");
            another = 'Y';
            while (another == 'Y' || another == 'y')
            {
                cout << "Enter the Last name of the Student: ";
                cin >> xlname;
                rewind(fp);
                while (fread(&s, recsize, 1, fp) == 1)
                {
                    if (strcmp(s.lname, xlname) == 0)
                    {
                        cout << "Enter the New First Name: ";
                        cin >> s.fname;
                        cout << "Enter the new Last name: ";
                        cin >> s.lname;
                        cout << "Enter the New Course: ";
                        cin >> s.course;
                        cout << "Enter the New Section: ";
                        cin >> s.section;
                        fseek(fp, -recsize, SEEK_CUR);
                        fwrite(&s, recsize, 1, fp);
                        break;
                    }
                    else
                    {
                        cout << "Record Not exist.";
                    }
                }
                cout << "\nModify Another Record(Y/N): ";
                fflush(stdin);
                another = getchar();
            }
            break;
        case '4':
            system("cls");
            another = 'Y';
            while (another == 'Y' || another == 'y')
            {
                cout << "Enter the Last Name of the Student: ";
                cin >> xlname;
                ft = fopen("temp.dat", "wb");
                rewind(fp);
                while (fread(&s, recsize, 1, fp) == 1)
                {
                    if (strcmp(s.lname, xlname) != 0)
                    {
                        fwrite(&s, recsize, 1, ft);
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("users.txt");
                rename("temp.dat", "users.txt");
                fp = fopen("users.txt", "rb");
                cout << "\nDelete the Record(Y/N): ";
                fflush(stdin);
                another = getchar();
            }
            break;
        case '5':
            exit(0);
        default:
            cout << "Invalid Choice";
            break;
        }
    }
    return 0;
}
