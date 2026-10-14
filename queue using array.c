    #include <stdio.h>
    #define N 5
    int queue[N];
    int front = -1;
    int rear = -1;
    void enqueue(int x){
        if(rear == N-1){
            printf("overflow\n");
        }
        else if(front == -1 && rear == -1){
            front = rear = 0;
            queue[rear] = x;
        }
        else{
            rear++;
            queue[rear]=x;
        }
    }
     void dequeue() {
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
    void display(){
        if(front==-1 && rear == -1){
            printf("Queue is empty\n");
        }
        else{
            for(int i = front;i<=rear;i++){
                printf("%d\t",queue[i]);
            }
        }
    }
    int main() {
        enqueue(10);
        enqueue(20);
        enqueue(30);

        printf("Queue elements: ");
        display();

        dequeue();

        printf("Queue after deletion: ");
        display();

        return 0;
    }



