#include "file_handler.h"

void FileHandler::saveToFile(const ExpenseManager& manager, const std::string& filename) {
    std::ofstream file(filename, std::ios::out); // Open file for writing
    if (!file) {
        std::cerr << "Error: Unable to open file for writing!\n";
        return;
    }

    for (const auto& expense : manager.getAllExpenses()) {  // Using getter for encapsulation
        file << expense.getCategory() << " "
             << expense.getAmount() << " "
             << expense.getDate() << "\n";
    }

    file.close();
}

void FileHandler::loadFromFile(ExpenseManager& manager, const std::string& filename) {
    std::ifstream file(filename, std::ios::in);
    if (!file) {
        std::cerr << "Error: Unable to open file for reading!\n";
        return;
    }

    std::string category, date;
    double amount;
    while (file >> category >> amount >> date) {
        manager.addExpense(Expense(category, amount, date)); // Assuming Expense has a constructor with date
    }

    file.close();
}
