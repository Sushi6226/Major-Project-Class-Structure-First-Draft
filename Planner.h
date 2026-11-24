
#pragma once
#include <string>
#include <vector>
#include "Course.h"
#include "StudySession.h"

// Responsibility of Planner.h:
// Manages the student's overall study planner.
// Stores the student name, courses, and study sessions.
// Can display upcoming work and save planner data.

class Planner 
{
    private:
        std::string studentName;
        std::vector<Course> courses; // makes relationships with course
        std::vector<StudySession> studySessions; //makes relationships with studysession

    public:
        Planner(const std::string& studentName);

        void addCourse(const Course& course);
        void addStudySession(const StudySession& session);

        void showUpcomingWork() const;
        void saveToFile(const std::string& filename) const;
};
