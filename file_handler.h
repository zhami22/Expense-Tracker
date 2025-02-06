#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include "expense_manager.h"
#include <fstream>

class FileHandler {
    public:
    static void saveToFile(const ExpenseManager& manager, const std::string& filename);
    static void loadFromFile(ExpenseManager& manager, const std::string& filename);

};

#endif