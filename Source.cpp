#include <iostream>
#include <vector>

using namespace std;

class Person{
	private:
		int id;
		string name;
		int age;
		char gender;
		public:

        Person() {}
		void set_pid(int i){
		id=i;
		}
		void set_pname(string n){
		name=n;
		}
        void set_Page(int a){
        age=a;
		}
		void set_Pgender(char g){
        gender=g;
        }
		int get_pid(){
		return id;
		}
		string get_pname(){
		return name;
		}
        int get_Page(){
        return age;
		}
		char get_Pgender(){
        return gender;
        }
};
class Professor : public Person {
private:
    std::string department;
    double salary;
    std::string degree;

public:
    // Parameterized constructor for Professor class
    /*Professor(int id, const string& name, int age, char gender,
        const string& dep, double sal, const string& deg): Person ( id ,name, age, gender), department(dep), salary(sal), degree(deg) {}*/

    // Getters and setters for Professor attributes
    std::string getDepartment() const { return department; }
    void setDepartment(const std::string& dep) { department = dep; }

    double getSalary() const { return salary; }
    void setSalary(double sal) { salary = sal; }

    std::string getDegree() const { return degree; }
    void setDegree(const std::string& deg) { degree = deg; }
};


class Student {

private:
    int level;
    double gpa;

public:
    // default constructor
    Student() {
        //  cout<< "default constructor in class student " ;
        //level = 0;
         // gpa = 0;
    }

    // parametarize constructor
    /*Student(int id, string name, int age, char gender, int lev, double gp) : Person(int id, string name, int age, char gender) {
        level = lev;
        gpa = gp;
    }*/


    void set_level(int lev) {
        level = lev;

    }

    int get_level() {
        return level;
    }


    void set_gpa(double gp) {
        gpa = gp;

    }
    int get_gpa() {
        return gpa;
    }


};

//course
class Course {
private:
	string courseName;
	int courseCode;
	int courseHours;
	Professor *prof;
	vector < Course> course;      //why pointer
	vector 	< Student > student;
public:
    Course() {/*default constructor */ }

     void set_course(const vector<Course> & x) {
         course = x;

     }
     vector<Course> get_course() {

         return course;
     }
     void set_student(const vector<Student>& y) {
         student = y;

     }
     vector<Student> get_student() {

         return student;
     }
     int get_courseCode()
     {
         return courseCode;
     }
     void set_courseCode(int ccode)
     {
         ccode = courseCode;
     }
     string get_courseName()
     {
         return courseName;
     }
     void set_courseName(string cname)
     {
         courseName = cname;
     }
     int get_courseHours()
     {
         return courseHours;
     }
     void set_courseHours(int hours)
     {

         courseHours = hours;
     }



};