#include <iostream>
#include <string>

class Student
{
    public:
        Student(int StudentAge, std::string FirstName, std::string LastName,
                int Standard) : StudentAge(StudentAge), FirstName(FirstName),
                LastName(LastName), Standard(Standard){}
        int get_age()
        {
            return StudentAge;
        }
        void set_age(int StduentAge)
        {
            StudentAge = StduentAge;
        }
        std::string get_first_name()
        {
            return FirstName;
        }
        void set_first_name(std::string FirstName)
        {
            FirstName = FirstName;
        }
        std::string get_last_name()
        {
            return LastName;
        }
        void set_last_name(std::string LastName)
        {
            LastName = LastName;
        }
        int get_standard()
        {
            return Standard;
        }
        void set_stanard(int Standard)
        {
            Standard = Standard;
        }
        std::string to_string()
        {
            return std::to_string(StudentAge) + ',' + FirstName + ',' + LastName
                + ',' + std::to_string(Standard);
        }

    private:
        int StudentAge;
        std::string FirstName;
        std::string LastName;
        int Standard;
};


int main()
{
    int age, standard;
    std::string first_name, last_name;

    std::cin >> age >> first_name >> last_name >> standard;

    Student st(age, first_name, last_name, standard);


    std::cout << st.get_age() << "\n";
    std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    std::cout << st.get_standard() << "\n";
    std::cout << "\n";
    std::cout << st.to_string();

    return 0;
}
