
#pragma once
#include <string>
#include <vector>
#include "Assignment.h"

// Responsibility of course.h :
// Represents one course in the student's planner.
// Stores the course name, instructor, and assignments.
// Can add, complete and display assignments.

class Course 
{
    private:

        std::string name;
        std::string instructor;
        std::vector <Assignment> assignments; // course should be able contain multiple assignment objects.

    public:

        Course(const std::string& name, const std::string & instructor);

        void addAssignment (const Assignment& task);
        void markAssignmentComplete (const std::string& title);
        void showAssignments() const;

        std::string getName() const;

        const std::vector <Assignment>& getAssignments() const;

};
