#include "student.h"
#include <vector>
#include <algorithm>

using namespace std;


int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
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
        case 0: {

            string name;
            int age;

            cout << "Syota opiskelijan nimi: ";
            cin >> name;

            cout << "Syota opiskelijan ika: ";
            cin >> age;

            studentList.push_back(Student(name, age));

            break;
        }
        case 1: {
            for (auto i = studentList.begin(); i != studentList.end(); i++)
                cout << i->getName() << " ";

            break;

        }

        case 2: {

            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                return a.getName() < b.getName();

            });

            for (auto& student : studentList) {
                student.printStudentinfo();

            }

            break;

        }

        case 3: {

            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                return a.getAge() < b.getAge();
            });

            for (auto& student : studentList) {
                student.printStudentinfo();

            }

            break;

        }

        case 4: {

            string name;
            cout << "Syota opiskelijan nimi: ";
            cin >> name;

            auto it = find_if(studentList.begin(), studentList.end(), [name](Student& student) {

            return student.getName() == name;

         });

            if (it != studentList.end()) {
                it->printStudentinfo();
            }

            else {
                cout << "Nimea ei loytynyt " << endl;

            }

            break;

        }


        default:
        cout << "Wrong selection, stopping..." << endl;
        break;

        }

    } while (selection < 5);

    return 0;
}
