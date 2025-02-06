#include "expense_stats.h"
#include <iostream>

void ExpenseStats::calculateTotalExpenses(const ExpenseManager& manager) {
    double total = 0;
    for (const auto& expense : manager.getAllExpenses()) {
        total += expense.getAmount();
    }
    std::cout << "💰 Total Expenses: $" << total << std::endl;
}

void ExpenseStats::expensesByCategory(const ExpenseManager& manager) {
    std::map<std::string, double> categoryTotals;
    
    for (const auto& expense : manager.getAllExpenses()) {
        categoryTotals[expense.getCategory()] += expense.getAmount();
    }

    std::cout << "📊 Expense Breakdown by Category:\n";
    for (const auto& pair : categoryTotals) {
        std::cout << " - " << pair.first << ": $" << pair.second << std::endl;
    }
}
