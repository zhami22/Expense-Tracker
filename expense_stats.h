#ifndef EXPENSE_STATS_H
#define EXPENSE_STATS_H

#include "expense_manager.h"
#include <map>

class ExpenseStats {
public:
    static void calculateTotalExpenses(const ExpenseManager& manager);
    static void expensesByCategory(const ExpenseManager& manager);
};

#endif // EXPENSE_STATS_H
