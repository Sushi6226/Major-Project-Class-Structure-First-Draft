# Major-Project-Class-Structure-First-Draft
STUDENT STUDY PLANNER 

Student study planner is a C++ application designed to help students oorganize their courses, assignment and study session.

The program will allow student to keep track of homework deadline, mark assignments as completed, record study session and view upcomming work.

MAIN CLASSES

Asignment: it stores assignment information, including title, due date and completion status
Course: it stores course details and manages assignments for each courses.
StudySession: it tracks a study topic, its duration and session status.
Planner: it manages the student's courses and study sessions, displays upcoming work and provides file-saving functionality.

CLASS RELATIONSHIPS

The planner owns multiple Course and StudySession objects. Each Course owns multiple Assignment object and it uses composition.

CLASS DIAGRAM

Place the Mermaid class diagram here. 
