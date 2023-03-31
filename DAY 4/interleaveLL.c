#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct queue {
   struct node *front, *rear;
};

void enqueue(struct queue *q, int data) {
   struct node *newNode = (struct node*)malloc(sizeof(struct node));
   newNode->data = data;
   newNode->next = NULL;

   if(q->rear == NULL) {
      q->front = q->rear = newNode;
      return;
   }

   q->rear->next = newNode;
   q->rear = newNode;
}

int dequeue(struct queue *q) {
   if(q->front == NULL) {
      return -1;
   }

   struct node *temp = q->front;
   int data = temp->data;

   q->front = q->front->next;

   if(q->front == NULL) {
      q->rear = NULL;
   }

   free(temp);

   return data;
}

void interleaveQueues(struct queue *q1, struct queue *q2) {
   struct queue *tempQueue = (struct queue*)malloc(sizeof(struct queue));
   tempQueue->front = tempQueue->rear = NULL;

   while(q1->front != NULL && q2->front != NULL) {
      int data = dequeue(q1);
      enqueue(tempQueue, data);

      data = dequeue(q2);
      enqueue(tempQueue, data);
   }

   while(q1->front != NULL) {
      int data = dequeue(q1);
      enqueue(tempQueue, data);
   }

   while(q2->front != NULL) {
      int data = dequeue(q2);
      enqueue(tempQueue, data);
   }

   q1->front = tempQueue->front;
   q1->rear = tempQueue->rear;

   free(tempQueue);
}

void printQueue(struct queue *q) {
   struct node *temp = q->front;

   while(temp != NULL) {
      printf("%d ", temp->data);
      temp = temp->next;
   }

   printf("\n");
}

int main() {
   struct queue *q1 = (struct queue*)malloc(sizeof(struct queue));
   struct queue *q2 = (struct queue*)malloc(sizeof(struct queue));

   q1->front = q1->rear = NULL;
   q2->front = q2->rear = NULL;

   int n1, n2;
   printf("Enter the number of elements in Queue 1: ");
   scanf("%d", &n1);

   printf("Enter the elements of Queue 1:\n");
   for(int i=0; i<n1; i++) {
      int data;
      scanf("%d", &data);
      enqueue(q1, data);
   }

   printf("Enter the number of elements in Queue 2: ");
   scanf("%d", &n2);

   printf("Enter the elements of Queue 2:\n");
   for(int i=0; i<n2; i++) {
      int data;
      scanf("%d", &data);
      enqueue(q2, data);
   }

   printf("Queue 1: ");
   printQueue(q1);
   printf("Queue 2: ");
   printQueue(q2);

   interleaveQueues(q1, q2);

   printf("Interleaved Queue: ");
   printQueue(q1);

   return 0;
}
