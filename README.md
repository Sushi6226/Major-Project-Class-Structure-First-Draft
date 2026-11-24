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

CLASS DIAGRAM:


classDiagram
    class Assignment 
        {
            -string title
            -string dueDate
            -bool completed
            +markComplete() void
            +displayDetails() void
            +getDueDate() string
            +isCompleted() bool
        }

    class Course 
        {
            -string name
            -string instructor
            -vector~Assignment~ assignments
            +addAssignment(task: Assignment) void
            +markAssignmentComplete(title: string) void
            +showAssignments() void
            +getName() string
            +getAssignments() vector~Assignment~
        }

    class StudySession 
        {
            -string topic
            -int durationMinutes
            -bool started
            -bool finished
            +start() void
            +finish() void
            +displayDetails() void
        }

    class Planner 
        {
            -string studentName
            -vector~Course~ courses
            -vector~StudySession~ studySessions
            +addCourse(course: Course) void
            +addStudySession(session: StudySession) void
            +showUpcomingWork() void
            +saveToFile(filename: string) void
        }
 
    Planner "1" *-- "0..*" Course : owns
    Course "1" *-- "0..*" Assignment : contains
    Planner "1" *-- "0..*" StudySession : tracks
