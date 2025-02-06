#include "file_handler.h"

void FileHandler::saveToFile(const ExpenseManager& manager, const std::string& filename) {
    std::ofstream file(filename);
    for (const auto& expense : manager.getExpenses()) {
        file << expense.getCategory() << "," << expense.getAmount() << "," << expense.getDate() << std::endl;
    }
}

void FileHandler::loadFromFile(ExpenseManager& manager, const std::string& filename) {
    std::ifstream file(filename);
    std::string category, date;
    double amount;
    while (file >> category >> amount >> date) {
        manager.addExpense(Expense(category, amount));
    }
}