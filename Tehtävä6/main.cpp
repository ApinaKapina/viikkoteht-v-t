#include <iostream>
#include "Student.h"
#include <vector>
#include <algorithm>
using namespace std;

    int main ()
 {
     int selection =0;
    vector<Student>studentList;

    //alussa luodaan opiskelija

    Student A("Anna", 30);
    Student B("Beepeli", 19);
    Student C("Celsius", 25);
    Student D("Daniel", 24);

    studentList.push_back(A);
    studentList.push_back(B);
    studentList.push_back(C);
    studentList.push_back(D);

     do  {
    cout << "Testing: " << A.getName() << ", " << A.getAge() << endl;

    cout<<endl;
    cout<<"Select"<<endl;
    cout<<"Add students = 0"<<endl;
    cout<<"Print all students = 1"<<endl;
    cout<<"Sort and print students according to Name = 2"<<endl;
    cout<<"Sort and print students according to Age = 3"<<endl;
    cout<<"Find and print student = 4"<<endl;
    cin>>selection;

    switch(selection)
    {
    case 1:
                // Tulosta StudentList vektorin kaikkien opiskelijoiden
                // nimet.

        cout << "Opiskelijoiden nimet: ";
                for (const Student& s: studentList) {
            cout << s.getName() << ", ";
                }
                cout << endl;
    break;

     case 2:
        sort(studentList.begin(), studentList.end(), [](Student &eka, Student &toka) {
            return eka.getName() < toka.getName(); }
              );

         cout << "Opiskelijat jrjestetty nimen mukaan: " << endl;
        for (const Student &s: studentList) {
             s.printStudentInfo();
        }
                // Järjestä StudentList vektorin Student oliot nimen mukaan
                // algoritmikirjaston sort funktion avulla
                // ja tulosta printStudentInfo() funktion avulla järjestetyt
                // opiskelijat
    break;

    case 3:
         sort(studentList.begin(), studentList.end(), [] (Student &eka, Student &toka){
        return eka.getAge() < toka.getAge(); }
         );

         cout << "Opiskelijat järjestetty iän mukaan: " << endl;
         for (Student &s: studentList) {
             s.printStudentInfo();
         }

                // Järjestä StudentList vektorin Student oliot iän mukaan
                // algoritmikirjaston sort funktion avulla
                // ja tulosta printStudentInfo() funktion avulla järjestetyt
                // opiskel
         break;
    case 4:

        vector<Student>::iterator it = studentList.begin();
        cout << "Anna etsittävä nimi" << endl;
        string etsittavanimi;
        cin >> etsittavanimi;
        it = find_if(studentList.begin(), studentList.end(), [&etsittavanimi] ( Student& student) ->
                     bool {return student.getName() == etsittavanimi;});

        if (it != studentList.end() ) {
            cout << "found"; }

        else {
            cout << "not found";}
        break;

   // default:
    cout<< "Wrong selection, stopping..."<<endl;
    break;
    }


    } while(selection < 5);


    // käy vektorin oliot läpi
    // delete

    return 0;

     }
