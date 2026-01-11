#include <iostream>
using std::string;
using namespace std;

class AbstractEmployee
{                                       // contract
    virtual void AskForPromotion() = 0; // make this a pure virtual function
};
class Employee : AbstractEmployee // successfully signed the contract
{
private:
    string Name;
    string Company;
    int Age;

public:
    // Example of setters and getters:-
    void setName(string name)
    {                // recieves parameter 'name' and it sets the value of our property which is encapsulated to that value that we have recieved in
        Name = name; // this setter.
    }
    string getName()
    { // this method is going to return the value of our name property
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age) // returntype should be as per the return value you want
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }

    void IntroduceYourself()
    {
        cout << "My name is " << Name << endl;
        cout << "My company is " << Company << endl;
        cout << "My age is " << Age << endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    { // provide logic for AFP method
        if (Age > 30)
        {
            cout << Name << "got promoted!" << endl;
        }
        else
        {
            cout << Name << "sorry NO promotion for you!" << endl;
        }
    }
};
class Developer : public Employee
{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage) // constructor
        : Employee(name, company, age), FavProgrammingLanguage(favProgrammingLanguage)
    {
    }
    void FixBug()
    {
        cout << getName() << " fixed bug using" << FavProgrammingLanguage << endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;

    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age), Subject(subject){}
        void PrepareLesson()
    {
        cout << getName() << " prepared lesson on " << Subject << endl;
    }
};
int main()
{

    Developer d = Developer("Ananya", "Google", 21, "C++");
    Teacher t = Teacher("Vidhu", "VBSPU", 29, "C++");


    d.IntroduceYourself();
    t.PrepareLesson(); //Call method to see the output

    return 0;
}