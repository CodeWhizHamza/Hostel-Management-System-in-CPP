#include <iostream>

class Invoice
{
private:
    int invoiceID;
    int studentID;
    std::string invoiceDate;
    std::string dueDate;
    bool status;
    double amountDue;
    double amountAfterDue;

public:
    enum Status
    {
        PAID = true,
        UNPAID = false
    };

    Invoice(int invoiceID, int studentID, std::string invoiceDate, std::string dueDate, double amountDue, double amountAfterDue)
    {
        this->invoiceID = invoiceID;
        this->studentID = studentID;
        this->invoiceDate = invoiceDate;
        this->dueDate = dueDate;
        this->status = UNPAID;
        this->amountDue = amountDue;
        this->amountAfterDue = amountAfterDue;
    }

    void setInvoiceID(int invoiceID)
    {
        this->invoiceID = invoiceID;
    }

    void setStudentID(int studentID)
    {
        this->studentID = studentID;
    }

    void setInvoiceDate(std::string invoiceDate)
    {
        this->invoiceDate = invoiceDate;
    }

    void setDueDate(std::string dueDate)
    {
        this->dueDate = dueDate;
    }

    void setStatus(bool status)
    {
        this->status = status;
    }

    void setAmountDue(double amountDue)
    {
        this->amountDue = amountDue;
    }

    void setAmountAfterDue(double amountAfterDue)
    {
        this->amountAfterDue = amountAfterDue;
    }

    int getInvoiceID()
    {
        return invoiceID;
    }

    int getStudentID()
    {
        return studentID;
    }

    std::string getInvoiceDate()
    {
        return invoiceDate;
    }

    std::string getDueDate()
    {
        return dueDate;
    }

    bool getStatus()
    {
        return status;
    }

    double getAmountDue()
    {
        return amountDue;
    }

    double getAmountAfterDue()
    {
        return amountAfterDue;
    }
};