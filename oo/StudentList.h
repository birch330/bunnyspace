#include <vector>
using namespace std;

#include "Student.h"

class StudentList{
public:
    virtual ~StudentList();
    void list();
        void addStudent();
        void delStudent();
private:
    vector<Student *> students;
    
        Student* find(Student* student);
};
