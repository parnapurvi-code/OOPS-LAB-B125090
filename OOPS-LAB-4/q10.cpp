#include <iostream>
using namespace std;

class Classroom
{
private:
    string className;
    int totalStudents;
    int presentStudents;
    bool attendanceStatus;

public:
    Classroom(string name, int total, int present, bool status)
    {
        className = name;
        totalStudents = total;
        presentStudents = present;
        attendanceStatus = status;
    }

    friend class AttendanceManager;
};

class AttendanceManager
{
public:

    void displayClassroomInfo(Classroom &c)
    {
        cout << "\nClass Name: " << c.className << endl;
        cout << "Total Students: " << c.totalStudents << endl;
        cout << "Present Students: " << c.presentStudents << endl;

        if (c.attendanceStatus)
            cout << "Attendance Status: Completed" << endl;
        else
            cout << "Attendance Status: Not Completed" << endl;
    }

    void updatePresentStudents(Classroom &c, int present)
    {
        if (present >= 0 && present <= c.totalStudents)
        {
            c.presentStudents = present;
            cout << "Present student count updated." << endl;
        }
        else
        {
            cout << "Invalid number of present students." << endl;
        }
    }

    void markAttendanceCompleted(Classroom &c)
    {
        c.attendanceStatus = true;
        cout << "Attendance marked as completed." << endl;
    }

    void displayAttendanceStatus(Classroom &c)
    {
        if (c.attendanceStatus)
            cout << "Attendance has been completed." << endl;
        else
            cout << "Attendance has not been completed." << endl;
    }

    void calculateAbsentStudents(Classroom &c)
    {
        int absentStudents;

        absentStudents = c.totalStudents - c.presentStudents;

        cout << "Absent Students: " << absentStudents << endl;
    }
};

int main()
{
    Classroom c("CSE-A", 60, 52, false);

    AttendanceManager manager;

    manager.displayClassroomInfo(c);

    manager.updatePresentStudents(c, 55);

    manager.markAttendanceCompleted(c);

    manager.displayAttendanceStatus(c);

    manager.calculateAbsentStudents(c);

    cout << "\nUpdated Classroom Information:" << endl;
    manager.displayClassroomInfo(c);

    return 0;
}