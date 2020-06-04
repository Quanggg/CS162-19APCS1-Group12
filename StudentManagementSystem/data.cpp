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
   getline(f1, s1, '\n');
   while (f1.good())
   {
      getline(f1, s1, '\n');
      string s2, s5;
      ifstream f2("import\\" + s1 + "-Student.csv");
      ofstream f3("general\\class\\" + s1 + ".txt");
      ifstream f5("general\\semester.txt");
      getline(f2, s2, '\n');
      getline(f5, s5, '\n');
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
         f4 << endl
            << s2;
      }
      f2.close();
      f3.close();
      while (f5.good())
      {
         getline(f5, s5, '\n');
         f2.open("import\\" + s5 + "-hk1-schedule-" + s1 + ".csv");
         f3.open("general\\semester\\schedule\\" + s5 + "-hk1-schedule-" + s1 + ".txt");
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
         f2.open("import\\" + s5 + "-hk2-schedule-" + s1 + ".csv");
         f3.open("general\\semester\\schedule\\" + s5 + "-hk2-schedule-" + s1 + ".txt");
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
         f2.open("import\\" + s5 + "-hk3-schedule-" + s1 + ".csv");
         f3.open("general\\semester\\shcedule\\" + s5 + "-hk3-schedule-" + s1 + ".txt");
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