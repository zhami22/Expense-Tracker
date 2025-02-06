#ifndef EXPENSE_H
#define EXPENSE_H

#include <iostream>
#include <string>
#include <ctime>

class Expense{
private:
    std::string category;
    double amount;
    std::time_t date;

public:
    Expense(std::string cat, double amt);
    std::string getCategory() const;
    double getAmount() const;
    std::string getDate() const;
    void display() const;
};

#endif // EXPENSE_H