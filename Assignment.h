
#pragma once // its works as backup plan ig
#include <string>

// Responsibility of Assignment.h:
// Represents one assignment for a course.
// Stores its title, due date and completion status.
// Can mark an assignment complete and display its details.

class Assignment 
{
    private:
        std::string title;  
        std::string dueDate;
        bool completed;

    public:
        Assignment(const std::string& title, const std::string& dueDate);

        void markComplete();
        void displayDetails() const;

        std::string getDueDate() const;
        bool isCompleted() const;
};
