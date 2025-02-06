#ifndef EXPENSE_MANAGER_H
#define EXPENSE_MANAGER_H

#include "expense.h"
#include <vector>

class ExpenseManager{
    private:
    std::vector<Expense> expenses;

    public:
    const std::vector<Expense>& getExpenses() const { return expenses; }
    void addExpense(const Expense& expense);
    void displayExpenses() const;
    double totalExpenses() const;
    void filterByCategory(const std::string& category) const;
};

#endif