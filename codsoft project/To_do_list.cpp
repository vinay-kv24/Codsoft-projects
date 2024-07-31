// Task is develop a TO-DO LIST

// Build a simple console-based to-do listmanager that allows users to add, view, anddelete tasks.

// Task Input: Allow users to input tasks they want to add to the list.
// Add Task: Implement a function to add tasks to the list.
// View Tasks: Display the list of tasks with their status (completed or pending).
// Mark Task as Completed: Allow users to mark tasks as completed.
// Remove Task: Provide an option to remove tasks from the list.



// Code -

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;

    Task(string desc) : description(desc), completed(false) {}
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& taskDesc) {
        tasks.emplace_back(taskDesc);
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks in the list.\n";
            return;
        }

        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].description 
                 << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
        }
    }

    void markTaskAsCompleted(size_t taskNumber) {
        if (taskNumber > 0 && taskNumber <= tasks.size()) {
            tasks[taskNumber - 1].completed = true;
        } else {
            cout << "Invalid task number.\n";
        }
    }

    void removeTask(size_t taskNumber) {
        if (taskNumber > 0 && taskNumber <= tasks.size()) {
            tasks.erase(tasks.begin() + taskNumber - 1);
        } else {
            cout << "Invalid task number.\n";
        }
    }
};

int main() {
    ToDoList toDoList;
    int choice;
    string taskDesc;
    size_t taskNumber;

    while (true) {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task description: ";
                cin.ignore(); // To ignore the newline character left in the input buffer
                getline(cin, taskDesc);
                toDoList.addTask(taskDesc);
                break;
            case 2:
                toDoList.viewTasks();
                break;
            case 3:
                cout << "Enter task number to mark as completed: ";
                cin >> taskNumber;
                toDoList.markTaskAsCompleted(taskNumber);
                break;
            case 4:
                cout << "Enter task number to remove: ";
                cin >> taskNumber;
                toDoList.removeTask(taskNumber);
                break;
            case 5:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

