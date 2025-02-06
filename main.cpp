#include "expense_manager.h"
#include "file_handler.h"
#include <iostream>

int main() {
    ExpenseManager manager;
    int choice;
    std::string category;
    double amount;

    do {
        std::cout << "1. Add Expense\n2. Display Expenses\n3. Total Expenses\n4. Filter by Category\n5. Save & Exit\nEnter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter category: ";
                std::cin >> category;
                std::cout << "Enter amount: ";
                std::cin >> amount;
                manager.addExpense(Expense(category, amount));
                break;
            case 2:
                manager.displayExpenses();
                break;
            case 3:
                std::cout << "Total Expenses: $" << manager.totalExpenses() << std::endl;
                break;
            case 4:
                std::cout << "Enter category to filter: ";
                std::cin >> category;
                manager.filterByCategory(category);
                break;
            case 5:
                FileHandler::saveToFile(manager, "expenses.txt");
                std::cout << "Expenses saved. Exiting...\n";
                break;
        }
    } while (choice != 5);

    return 0;
}