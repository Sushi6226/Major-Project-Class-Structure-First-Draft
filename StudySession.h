
#pragma once
#include <string>

// Responsibility of StudySession.h:
// Represents a student's study session.
// Stores the topic, duration and session status.
// Can start and finish a study session.

class StudySession 
{
    private:
        std::string topic;
        int durationMinutes;
        bool started;
        bool finished;

    public:
        StudySession(const std::string& topic, int durationMinutes);

        void start(); //start of study session
        void finish(); // end of study session
        void displayDetails() const;
};
