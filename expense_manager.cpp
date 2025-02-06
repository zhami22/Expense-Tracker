#include "expense_manager.h"
#include <iostream>

void ExpenseManager::addExpense(const Expense& expense){
    expenses.push_back(expense);
}

void ExpenseManager::displayExpenses() const{
    for(const auto& expense : expenses){
        expense.display();
    }
}

double ExpenseManager::totalExpenses() const{
    double total = 0;
    for(const auto& expense : expenses){
        total += expense.getAmount();
    }
    return total;
}

void ExpenseManager::filterByCategory(const std::string& category) const{
    for(const auto& expense : expenses){
        if(expense.getCategory() == category){
            expense.display();
        }
    }
}
