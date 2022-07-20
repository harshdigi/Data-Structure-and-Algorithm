
// company maintains emplyoee information as emplyoee ID,name,salary, allow user to add,delete information of emplyoee that display information using sequential file

#include <iostream>  // simple input and output
#include <fstream>   // open,closing,read,write from file
#include <iomanip>   // setw function, endl
#define SIZE 100
using namespace std;

class Employee   // class for emplyoee database
{
private:
    int empno;                // 3 datamembers
    int salary;
    char name[SIZE];

public:
    void accept();       // To accept the emplyee id,name,and salary
    void display();      // To diplay the emplyee id,name,and salary
    void modify();       // To modify the emplyee id,name,and salary
    int geteno();        // Returning the emplyee number
};                    //  End of the class

void Employee::accept()
{
    cout << "Enter the Employee Number : ";
    cin >> empno;
    cin.ignore();
    cout << "Enter the Name of the Employee : ";
    cin.getline(name, SIZE);
    cout << "Enter the Salary : ";
    cin >> salary;
}

void Employee::display()
{
    cout << "\t" << empno << "\t   " << name << "   \t" << salary << "\n";
}

void Employee::modify()
{
    cin.ignore();
    cout << "Enter new Name of Employee:- ";
    cin.getline(name, SIZE);
    cout << "Enter the New Salary:- ";
    cin >> salary;
}

int Employee::geteno()
{
    return empno;
}

int create(int);
void display(int);
int add(int);
void deleterec(int);
void modifyrec(int);

int main()
{
    int choice, i, flag, cntr = 0;

    while (1)
    {
        cout << "\nEmployees Database" << endl;
        cout << "1. Create" << endl;
        cout << "2. Display" << endl;
        cout << "3. Add" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Modify" << endl;
        cout << "6. Exit Program" << endl;
        cout << "\nEnter your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cntr = create(cntr);
            break;
        }

        case 2:
        {
            display(cntr);
            break;
        }
        case 3:
        {
            if (cntr == 0)
                cout << "\nPlease Build a Master Table first" << endl;
            else
                cntr = add(cntr);
            break;
        }

        case 4:
        {
            if (cntr == 0)
                cout << "\nPlease Build a Master Table first" << endl;
            else
                deleterec(cntr);
            break;
        }
        case 5:
        {
            if (cntr == 0)
                cout << "\nPlease Build a Master Table first" << endl;
            else
                modifyrec(cntr);
            break;
        }
        case 6:
            return 0;
        default:
            cout << "Wrong Choice, Try Again" << endl;
        }
    }
    return 0;
}

int create(int cntr)
{
    int eno;
    Employee m;
    ofstream fout("recs.dat", ios::binary | ios::out);
    cntr = 0;
    char ask = 'y';
    while (ask == 'y' || ask == 'Y')
    {
        m.accept();
        fout.write((char *)&m, sizeof(m));
        cntr++;
        cout << "\nDo you want to add another Record? (y/n) : ";
        cin >> ask;
    }
    fout.close();
    return cntr;
}

void display(int cntr)
{
    int i;
    Employee m;
    if (cntr == 0)
        cout << "\nPlease Build a Master Table first" << endl;
    else
    {
        ifstream fin("recs.dat", ios::binary | ios::in);
        cout << "\n-----------------------------------------------------------------" << endl;
        cout << "Sr No. " << setw(5) << "Employee No.  ";
        cout << "  Name  ";
        cout << "     Salary" << endl;
        cout << "\n-----------------------------------------------------------------" << endl;
        i = 1;
        while (fin.read((char *)&m, sizeof(m)))
        {
            cout << "  " << i << "  ";
            m.display();
            i++;
        }
        fin.close();
    }
}

int add(int cntr)
{
    Employee m;
    ofstream fout("recs.dat", ios::binary | ios::app);
    cout << "Enter the details of the Records you want to Insert : " << endl;
    m.accept();
    fout.write((char *)&m, sizeof(m));
    fout.close();
    cntr++;
    cout << "Record Inserted Successfully" << endl;
    return cntr;
}

void deleterec(int cntr)
{
    Employee m;
    int flag;
    int eno;
    ifstream fin("recs.dat", ios::binary | ios::in);
    cout << "Enter the Employee number of the Record you want to delete:- ";
    cin >> eno;
    flag = 0;
    while (fin.read((char *)&m, sizeof(m)))
    {
        if (eno == m.geteno())
        {
            flag = 1;
            cntr--;
            break;
        }
    }
    fin.close();
    if (!flag)
        cout << "\nRecord with Employee Number " << eno << " not found" << endl;
    else
    {
        ofstream fout("temp.dat", ios::binary | ios::out);
        ifstream fin("recs.dat", ios::binary | ios::out);
        fin.seekg(0, ios::beg);
        fin.read((char *)&m, sizeof(m));
        while (!fin.eof())
        {
            if (m.geteno() != eno)
                fout.write((char *)&m, sizeof(m));
            fin.read((char *)&m, sizeof(m));
        }
        fout.close();
        fin.close();
        cout << "Record with Employee Number " << eno << " deleted successfully" << endl;
        remove("recs.dat");
        rename("temp.dat", "recs.dat");
    }
}

void modifyrec(int cntr)
{
    Employee m;
    int eno;
    int flag;
    ifstream fin("recs.dat", ios::binary | ios::in);
    cout << "Enter the Employee Number of the record you want to edit : ";
    cin >> eno;
    flag = 0;
    while (fin.read((char *)&m, sizeof(m)))
    {
        if (eno == m.geteno())
        {
            flag = 1;
            cntr--;
            break;
        }
    }
    fin.close();
    if (!flag)
        cout << "\nRecord with Employee Number " << eno << " not found" << endl;
    else
    {
        ofstream fout("temp.dat", ios::binary | ios::out);
        ifstream fin("recs.dat", ios::binary | ios::out);
        fin.read((char *)&m, sizeof(m));
        while (!fin.eof())
        {
            if (m.geteno() == eno)
            {
                m.modify();
                fout.write((char *)&m, sizeof(m));
            }
            else
                fout.write((char *)&m, sizeof(m));
            fin.read((char *)&m, sizeof(m));
        }
        fout.close();
        fin.close();
        cout << "Record with Employee Number " << eno << " edited successfully" << endl;
        remove("recs.dat");
        rename("temp.dat", "recs.dat");
    }
}