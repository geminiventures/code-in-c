#include <stdio.h>

// TODO: Define the TaskStatus enum here
enum TaskStatus {
    PENDING,
    IN_PROGRESS,
    COMPLETED, 
    CANCELLED
};
int main() {
    // Read input for three task statuses
    int status1, status2, status3;
    scanf("%d", &status1);
    scanf("%d", &status2);
    scanf("%d", &status3);
    
    // TODO: Declare three enum TaskStatus variables (task1, task2, task3)
    enum TaskStatus task1, task2, task3;

    // TODO: Assign enum values based on input
    void assignTaskStatus(int status, enum TaskStatus *task){
        switch (status) {
            case 0:
                *task = PENDING;
                break;
            case 1:
                *task = IN_PROGRESS;
                break;
            case 2:
                *task = COMPLETED;
                break;
            case 3:
                *task = CANCELLED;
                break;
            default:
                // Handle invalid input if necessary
                break;
        }
    }
    assignTaskStatus(status1, &task1);
    assignTaskStatus(status2, &task2);  
    assignTaskStatus(status3, &task3);
    // TODO: Print task statuses
    printf("Task 1 status: %d\n", task1);
    printf("Task 2 status: %d\n", task2);
    printf("Task 3 status: %d\n", task3);

    // TODO: Count tasks in each category
    int pendingCount = 0, inProgressCount = 0, completedCount = 0, cancelledCount = 0;
    
    void countTaskStatuses(enum TaskStatus task) {
        switch (task) {
            case PENDING:
                pendingCount++;
                break;
            case IN_PROGRESS:
                inProgressCount++;
                break;
            case COMPLETED:
                completedCount++;
                break;
            case CANCELLED:
                cancelledCount++;
                break;
            default:
                // Handle invalid task status if necessary
                break;
        }
    }
    countTaskStatuses(task1);
    countTaskStatuses(task2);
    countTaskStatuses(task3);
    int activeCount = pendingCount + inProgressCount;
    // TODO: Calculate and print active tasks count
    printf("Pending tasks: %d\n", pendingCount);
    printf("In progress tasks: %d\n", inProgressCount);
    printf("Completed tasks: %d\n", completedCount);
    printf("Cancelled tasks: %d\n", cancelledCount);
    printf("Active tasks: %d\n", activeCount);

    return 0;
}