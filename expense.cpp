#include "expense.h"
#include <iomanip>

Expense::Expense(std::string cat, double amt) : category(cat), amount(amt){
    date = std::time(nullptr);
}

std::string Expense::getCategory() const {return category; }
double Expense::getAmount() const { return amount; }
std::string Expense::getDate() const {
    char buffer[20];
    std::strftime(buffer, 20, "%Y-%m-%d", std::localtime(&date)); 
    return std::string(buffer);
}

void Expense::display() const{
    std::cout << "Category" << category << ", Amount: $" << std::fixed << std::setprecision(2) << amount << ",Date: " << getDate() << std::endl;
}

