#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

struct user_info
{
    string id, pass;
};
struct student
{
    string id, lname, fname, dob, cls, gender;
};
void reloadStudentInSemester()
{
    ifstream f1;
    string s1;
    f1.open("general\\class_list.txt");
    getline(f1, s1, '\n');
    while (f1.good())
    {
        getline(f1, s1, '\n');
        ifstream f3("general\\semester.txt");
        string s2, s3;
        getline(f3, s3, '\n');
        while (f3.good())
        {
            getline(f3, s3, '\n');
            ifstream f2("general\\class\\" + s1 + ".txt");
            if (f2.is_open())
            {
                ofstream f4("general\\semester\\student\\" + s3 + "-hk1-" + s1 + ".txt");
                getline(f2, s2, '\n');
                while (f2.good())
                {
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                }
                f2.close();
                f4.open("general\\semester\\student\\" + s3 + "-hk2-" + s1 + ".txt");
                f2.open("general\\class\\" + s1 + ".txt");
                getline(f2, s2, '\n');
                while (f2.good())
                {
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                }
                f2.close();
                f4.open("general\\semester\\student\\" + s3 + "-hk3-" + s1 + ".txt");
                f2.open("general\\class\\" + s1 + ".txt");
                getline(f2, s2, '\n');
                while (f2.good())
                {
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                    getline(f2, s2, '\n');
                    f4 << endl
                       << s2;
                }
                f2.close();
            }
        }
        f3.close();
        getline(f1, s1, '\n');
    }
    f1.close();
}
main()
{
    ifstream f1("general\\user_login.txt");
    string s1;
    user_info *u = new user_info[10000];
    getline(f1, s1, '\n');
    int i = 0;
    while (f1.good())
    {
        getline(f1, s1, '\n');
        getline(f1, s1, '\n');
        getline(f1, s1, '\n');
        getline(f1, s1, '\n');
        u[i].id = s1;
        getline(f1, s1, '\n');
        u[i++].pass = s1;
        getline(f1, s1, '\n');
    }
    int user_size = i;
    sort(u, u + i, [](user_info &u1, user_info &u2) { return u1.id < u2.id; });
    f1.close();
    f1.open("general\\class_list.txt");
    i = 0;
    getline(f1, s1, '\n');
    student *si = new student[10000];
    while (f1.good())
    {
        getline(f1, s1, '\n');
        ifstream f2("general\\class\\" + s1 + ".txt");
        string s2, s6;
        getline(f2, s2, '\n');
        while (f2.good())
        {
            getline(f2, s2, '\n');
            getline(f2, s2, '\n');
            si[i].id = s2;
            getline(f2, s2, '\n');
            si[i].lname = s2;
            getline(f2, s2, '\n');
            si[i].fname = s2;
            getline(f2, s2, '\n');
            si[i].gender = s2;
            getline(f2, s2, '\n');
            si[i].dob = s2;
            getline(f2, s2, '\n');
            si[i++].cls = s2;
        }
        f2.close();
        getline(f1, s1, '\n');
    }
    f1.close();
    f1.open("general\\Lecturer.txt");
    getline(f1, s1, '\n');
    while (f1.good())
    {
        getline(f1, s1, '\n');
        si[i].lname = s1;
        si[i].fname = "";
        getline(f1, s1, '\n');
        si[i].id = s1;
        getline(f1, s1, '\n');
        si[i].dob = si[i].gender = "NONE";
        si[i++].cls = "Lecturer";
    }
    f1.close();
    f1.open("general\\Staff.txt");
    getline(f1, s1, '\n');
    while (f1.good())
    {
        getline(f1, s1, '\n');
        si[i].lname = s1;
        si[i].fname = "";
        getline(f1, s1, '\n');
        si[i].id = s1;
        getline(f1, s1, '\n');
        si[i].dob = si[i].gender = "NONE";
        si[i++].cls = "Staff";
    }
    f1.close();
    int student_size = i;
    sort(si, si + i, [](student &si1, student &si2) { return si1.id < si2.id; });
    int j = i = 0;
    ofstream f2("general\\user_login.txt");
    while (j < student_size)
    {
        if (u[i].id == si[j].id)
        {
            f2 << endl
               << si[j].lname + " " + si[j].fname << endl
               << si[j].dob << endl
               << "NONE\n"
               << si[j].id << endl
               << u[j].pass << endl
               << si[j].cls;
            i++;
            j++;
        }
        else if (u[i].id < si[j].id)
            i++;
        else if (u[i].id > si[j].id)
        {
            f2 << endl
               << si[j].lname + " " + si[j].fname << endl
               << si[j].dob << endl
               << "NONE\n"
               << si[j].id << endl;
            if (si[j].dob.length() > 7)
                f2 << si[j].dob.erase(4, 1).erase(6, 1) << endl
                   << si[j].cls;
            else
                f2 << si[j].dob << endl
                   << si[j].cls;
            i++, j++;
        }
    }
    f2.close();
    delete[] u;
    delete[] si;
    reloadStudentInSemester();
}