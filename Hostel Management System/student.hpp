#include <iostream>
#include <sstream>

class Student
{

private:
	int studentID;
	std::string studentName;
	std::string studentCNIC;
	std::string phoneNumber;
	std::string school;
	std::string gender;
	short int sem;

public:
	Student(int studentID, std::string studentName, std::string studentCNIC, std::string phoneNumber, std::string school, std::string gender, short int sem)
	{
		this->studentID = studentID;
		this->studentName = studentName;
		this->studentCNIC = studentCNIC;
		this->phoneNumber = phoneNumber;
		this->school = school;
		this->gender = gender;
		this->sem = sem;
	}

	void setStudentID(int studentID)
	{
		this->studentID = studentID;
	}

	void setStudentName(std::string studentName)
	{
		this->studentName = studentName;
	}

	void setStudentCNIC(std::string studentCNIC)
	{
		this->studentCNIC = studentCNIC;
	}

	void setPhoneNumber(std::string phoneNumber)
	{
		this->phoneNumber = phoneNumber;
	}

	void setSchool(std::string school)
	{
		this->school = school;
	}

	void setGender(std::string gender)
	{
		this->gender = gender;
	}

	void setSem(short int sem)
	{
		this->sem = sem;
	}

	int getStudentID()
	{
		return studentID;
	}

	std::string getStudentName()
	{
		return studentName;
	}

	std::string getStudentCNIC()
	{
		return studentCNIC;
	}

	std::string getPhoneNumber()
	{
		return phoneNumber;
	}

	std::string getSchool()
	{
		return school;
	}

	std::string getGender()
	{
		return gender;
	}

	short int getSem()
	{
		return sem;
	}

	std::string toCSV()
	{
		std::string csv = "";
		csv += std::to_string(studentID) + ",";
		csv += studentName + ",";
		csv += studentCNIC + ",";
		csv += phoneNumber + ",";
		csv += school + ",";
		csv += gender + ",";
		csv += std::to_string(sem);
		return csv;
	}
};