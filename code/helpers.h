//
// Created by strinejc on 10/6/2026.
//


#ifndef CODE_HELPERS_H
#define CODE_HELPERS_H

//Helper structs that will be used across the problem to solve complex data manipulations
struct Process {
    int pid;
    int arrival_time;
    int run_time;

    int response_time;
    int turnaround_time;
    int remaining_time;

    int isQueued;
};

struct Node {
    struct Process *process;
    struct Node *next;
};

struct QueueNode {
    struct Process process;
    int duration;
    struct QueueNode *next;
};

struct Queue {
    int size;
    struct QueueNode *front;
    struct QueueNode *rear;
};

struct Algorithm {
    struct Queue *queue;
    int timeElapsed;
    int totalTurnaroundTime;
    int totalResponseTime;
    char name[25];
};
void freeQueue(struct Queue *queue);
void printGanttChart(struct Algorithm* algo);
void printPreemptiveGanttChart(struct Algorithm* algo, struct Node *head, int count);
#endif //CODE_HELPERS_H
