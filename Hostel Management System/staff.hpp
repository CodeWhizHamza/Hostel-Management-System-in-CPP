#include <iostream>

class Staff
{
private:
    int staffID;
    std::string staffName;
    std::string staffCNIC;
    std::string phoneNumber;
    std::string role;

public:
    Staff(int staffID, std::string staffName, std::string staffCNIC, std::string phoneNumber, std::string role)
    {
        this->staffID = staffID;
        this->staffName = staffName;
        this->staffCNIC = staffCNIC;
        this->phoneNumber = phoneNumber;
        this->role = role;
    }

    void setStaffID(int staffID)
    {
        this->staffID = staffID;
    }

    void setStaffName(std::string staffName)
    {
        this->staffName = staffName;
    }

    void setStaffCNIC(std::string staffCNIC)
    {
        this->staffCNIC = staffCNIC;
    }

    void setPhoneNumber(std::string phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }

    void setRole(std::string role)
    {
        this->role = role;
    }

    int getStaffID()
    {
        return staffID;
    }

    std::string getStaffName()
    {
        return staffName;
    }

    std::string getStaffCNIC()
    {
        return staffCNIC;
    }

    std::string getPhoneNumber()
    {
        return phoneNumber;
    }

    std::string getRole()
    {
        return role;
    }
};