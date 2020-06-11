#include <iostream>
#include <fstream>
#include <string>
using namespace std;

main()
{
   ifstream f1("general\\class_list.txt");
   //read student
   ofstream f4("general\\user_login.txt");
   string s1;
   int i1, i2, i3;
   i1 = i2 = i3 = 1;
   getline(f1, s1, '\n');
   while (f1.good())
   {
      getline(f1, s1, '\n');
      string s2, s5;
      ifstream f2("import\\" + s1 + "-Student.csv");
      if (f2.is_open())
      {
         ofstream f3("general\\class\\" + s1 + ".txt");
         getline(f2, s2, '\n');
         while (f2.good())
         {
            string tmp;
            getline(f2, s2, ',');
            f3 << endl
               << s2;
            getline(f2, s2, ',');
            f3 << endl
               << s2;
            tmp = s2;
            getline(f2, s2, ',');
            f3 << endl
               << s2;
            f4 << endl
               << s2 << " ";
            getline(f2, s2, ',');
            f3 << endl
               << s2;
            f4 << s2;
            getline(f2, s2, ',');
            f3 << endl
               << s2;
            getline(f2, s2, ',');
            f3 << endl
               << s2;
            f4 << endl
               << s2;
            f4 << endl
               << "NONE";
            f4 << endl
               << tmp;
            f4 << endl
               << s2.erase(4, 1).erase(6, 1);
            getline(f2, s2, '\n');
            f3 << endl
               << s2;
            f4 << endl
               << s2;
         }
         f2.close();
         f3.close();
      }
      ifstream f5("general\\semester.txt");
      ofstream f3;
      getline(f5, s5, '\n');
      while (f5.good())
      {
         getline(f5, s5, '\n');
         f2.open("import\\" + s5 + "-hk1-schedule-" + s1 + ".csv");
         if (f2.is_open())
         {
            if (i1)
            {
               f3.open("general\\semester\\schedule\\" + s5 + "-hk1-schedule.txt");
               i1 = 0;
            }
            else
               f3.open("general\\semester\\schedule\\" + s5 + "-hk1-schedule.txt", ios::app);
            getline(f2, s2, '\n');
            while (f2.good())
            {
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, '\n');
               f3 << endl
                  << s2;
            }
            f3.close();
            f2.close();
         }
         f2.open("import\\" + s5 + "-hk2-schedule-" + s1 + ".csv");
         if (f2.is_open())
         {
            if (i2)
            {
               f3.open("general\\semester\\schedule\\" + s5 + "-hk2-schedule.txt");
               i2 = 0;
            }
            else
               f3.open("general\\semester\\schedule\\" + s5 + "-hk2-schedule.txt", ios::app);
            getline(f2, s2, '\n');
            while (f2.good())
            {
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, '\n');
               f3 << endl
                  << s2;
            }
            f3.close();
            f2.close();
         }
         f2.open("import\\" + s5 + "-hk3-schedule-" + s1 + ".csv");
         if (f2.is_open())
         {
            if (i3)
            {
               f3.open("general\\semester\\schedule\\" + s5 + "-hk3-schedule.txt");
               i3 = 0;
            }
            else
               f3.open("general\\semester\\schedule\\" + s5 + "-hk3-schedule.txt", ios::app);
            getline(f2, s2, '\n');
            while (f2.good())
            {
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, ',');
               f3 << endl
                  << s2;
               getline(f2, s2, '\n');
               f3 << endl
                  << s2;
            }
            f3.close();
            f2.close();
         }
      }
      f5.close();
      getline(f1, s1, '\n');
   }
   f1.close();
   f1.open("general\\staff.txt");
   //read staff
   getline(f1, s1, '\n');
   while (f1.good())
   {
      getline(f1, s1, '\n');
      f4 << endl
         << s1;
      f4 << "\nNONE\nNONE";
      getline(f1, s1, '\n');
      f4 << endl
         << s1;
      getline(f1, s1, '\n');
      f4 << endl
         << s1;
      f4 << "\nStaff";
   }
   f1.close();
   f1.open("general\\lecturer.txt");
   //read staff
   getline(f1, s1, '\n');
   while (f1.good())
   {
      getline(f1, s1, '\n');
      f4 << endl
         << s1;
      f4 << "\nNONE\nNONE";
      getline(f1, s1, '\n');
      f4 << endl
         << s1;
      getline(f1, s1, '\n');
      f4 << endl
         << s1;
      f4 << "\nLecturer";
   }
   f1.close();
   f4.close();
}