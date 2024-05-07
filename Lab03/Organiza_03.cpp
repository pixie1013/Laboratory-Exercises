/*  
    This program is written by TRIXIE NICOLE A. ORGANIZA
            Programming Exercises 03 CMSC 28
                QUEUE IMPLEMENTATION 
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

struct node {                                                       
    float amount;
    char customerName[50];
    struct node *next;
};
 
struct queue{                                                          
    struct node *front, *rear;
};

struct queue* INIT();                                               // Creates and returns an empty queue
struct node* newNode(char* customerName, float amount);             // Creates a new node for queue
struct node* FRONT(struct node* Q);                                 // Returns a copy of the front item of queue Q
void ENQUEUE(struct queue* Q, char* customerName, float amount);    // Inserts item x in queue Q
void DEQUEUE(struct queue **Q);                                     // Removes and returns the front item of queue Q
void fallinLine(struct queue* Q);                                   // Adds the customer's name and amount to the queue Q
int serveCustomer(struct queue** Q, int serveChecker);              // Serves the customers and removes the node from the queue
void nextCustomer(struct queue** Q, int serveChecker);              // Informs the user who is the next customer beside front
void closingTime(struct queue** Q);                                 // Serves all the customers and informs the user once done
void saveFile(struct queue *Q);                                     // Saves the input to the file
void loadFile(struct queue** Q);                                    // Loads the file whenever the program is reopened to initialize data to the queue
int MENU();                                                         // Displays the menu
bool EMPTY(struct node* Q);                                         // Returns true if queue Q is empty, otherwise, returns false

// MAIN FUNCTION
int main(){
    struct queue* Q = INIT();
    int choice;
    int serveChecker = 0;   // This variable checks if the serving of customer has started
    loadFile(&Q);

    while(1){
        choice = MENU();

        switch (choice)
        {
            case 1:
                fallinLine(Q);
                saveFile(Q);
                break;
            case 2:
                serveChecker = serveCustomer(&Q, serveChecker);
                break;
            case 3:
                nextCustomer(&Q, serveChecker);          
                break;
            case 4:
                closingTime(&Q);
                break;
            case 0:
                exit(1);
            default:
                printf("\nERROR: Invalid input. Please try again.\n");
                break;
        }
    }
}

// DISPLAY MENU
int MENU(){
    int choice;

    printf("\n\nWelcome to Komsay!\n");
    printf("\nKOMSAY COUNTER 1:");
    printf("\n[1] Fall in line");
    printf("\n[2] Serve Customer");
    printf("\n[3] Next customer");
    printf("\n[4] Closing time");
    printf("\n[0] Exit");

    printf("\nCHOICE: ");
    do {
        //If input is a valid number
        if (scanf("%d", &choice) == 1) {
            break; 
        } else {
            printf("\nERROR: Invalid input.");
            printf("\nCHOICE: ");

            // Clear the input buffer to prevent an infinite loop
            while (getchar() != '\n');
        }
    } while(choice != 0);

    return choice;
}

// Checks if Q is empty or not
bool EMPTY(struct node* Q){
    return Q ==  NULL;
}

// Initializes an empty queue
struct queue* INIT(){
    struct queue *Q = (struct queue*)malloc(sizeof(struct queue));
    if(Q == NULL){
        printf("\nMemory allocation failed");
        return NULL;
    }

    Q->front = Q->rear = NULL;
    return Q;
}

// Creates a new node
struct node* newNode(char* customerName, float amount){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("\nMemory allocation failed.");
        return NULL;    
    }

    strcpy(temp->customerName, customerName);
    temp->amount = amount;
    temp->next = NULL;

    return temp;
}

// Adds the node to rear
void ENQUEUE(struct queue* Q, char* customerName, float amount){
    struct node* temp = newNode(customerName, amount);

    if(Q->rear == NULL){
        Q->rear = Q->front = temp;
        return;
    }

    Q->rear->next = temp;
    Q->rear = temp;
}

// Removes the node 
void DEQUEUE(struct queue **Q){
    if((*Q)->front == NULL){
        (*Q)->rear = NULL;
    }

    struct node* temp = (*Q)->front;
    (*Q)->front = (*Q)->front->next;

    free(temp);
    saveFile(*Q);
}

// FUNCTION: Asks the customer's name and amount
void fallinLine(struct queue* Q){
    if (EMPTY(Q->front)) {
        printf("\nThe QUEUE is EMPTY. Adding the first customer...\n");
    }
    
    char customerName[100];
    float amount;

    printf("\nCUSTOMER'S NAME: ");
    // This loop enables the program to accept input with spaces, given that there are surnames with more than 2 words
    while (1) {
        fgets(customerName, sizeof(customerName), stdin);
        customerName[strcspn(customerName, "\n")] = '\0'; // Removes newline character

        // Check if input is not empty (i.e., only a newline character)
        if (strlen(customerName) > 0) {
            break;
        }
    }

    while (1) {
        printf("TOTAL AMOUNT:");        
        //If input is a valid number
        if (scanf("%f", &amount)) {
            break; 
        } else {
            printf("\nInvalid input for amount. Please enter a valid numeric value:\n");

            // Clear the input buffer to prevent an infinite loop
            while (getchar() != '\n');
        }
    }
    
    ENQUEUE(Q, customerName, amount);
    printf("\nThe order from [%s] amounting [%.4f] has been added to queue.", customerName, amount);
}

// FUNCTION: Processes checking out of order who is first in line
int serveCustomer(struct queue** Q, int serveChecker){
    if (EMPTY((*Q)->front)){
        printf("\nThe QUEUE is EMPTY. No orders to serve.");
    }
    else{
        struct node* frontCustomer = FRONT((*Q)->front);
        printf("\nNow serving [%s] with total amount payable of [%.4f].", frontCustomer->customerName, frontCustomer->amount);
        DEQUEUE(Q);
        // If the queue is empty after dequeueing the last node, reset both front and rear pointers
        if (EMPTY((*Q)->front)){
            (*Q)->front = (*Q)->rear = NULL;
        } else{
            serveChecker = 1; // It has started serving the customer
        }
    }
    // Return the updated serveChecker
    return serveChecker;
}


// FUNCTION: Returns a copy of the front node
struct node* FRONT(struct node* Q){
    if (EMPTY(Q)){
        return NULL;
    }

    return Q;
}

// FUNCTIONS: Displays the customer to be served next.
void nextCustomer(struct queue** Q, int serveChecker){
    if (EMPTY((*Q)->front)){ // If queue is empty
        printf("\nThe QUEUE is EMPTY. No order to serve.");
        return;
    } else if ((*Q)->front == (*Q)->rear) { // If there is one order left
        printf("\nThere is only one order left!");
    } else if (serveChecker == 1){ // If the user has already began to serve
        struct node* next = (*Q)->front->next;
        printf("Next order: For [%s] with total amount payable of [%.4f].", next->customerName, next->amount);
    } else {  // If first order to serve
        printf("\nFirst order: [%s] with total amount payable of [%.4f].", (*Q)->front->customerName, (*Q)->front->amount);
    }  
}

// FUNCTION: Serving all the customers left in the queue
void closingTime(struct queue** Q){
    if (EMPTY((*Q)->front)){
        printf("\nThe QUEUE is EMPTY. No order to serve.");
        return;
    }

    // Loop until the queue Q is empty
    while(!EMPTY((*Q)->front)){
        struct node* frontCustomer = FRONT((*Q)->front);
        printf("\nNow serving [%s] with total amount payable of [%.4f].", frontCustomer->customerName, frontCustomer->amount);
        DEQUEUE(Q);
    }
    
    // Reset both front and rear pointers to NULL to indicate an empty queue
    (*Q)->front = (*Q)->rear = NULL;

    printf("\n\nAll customers have been served.");
    saveFile(*Q);
}

// FUNCTION: Load the file when the program is reopened
void loadFile(struct queue** Q){
    FILE *list = fopen("customer_orders.txt", "r");
    char customerName[50];
    float amount;

    if(list == NULL){
        return;
    }

    while (fscanf(list, "%s %f", customerName, &amount) == 2) {
        ENQUEUE(*Q, customerName, amount);
    }

    fclose(list);
}

// Saves the items to a file
void saveFile(struct queue* Q) {
    FILE *file = fopen("customer_orders.txt", "w");
    if (file == NULL) {
        printf("\nError opening file.\n");
        return;
    }

    struct node *current = Q->front;
    while (current != NULL) {
        fprintf(file, "%s %.4f\n", current->customerName, current->amount);
        current = current->next;
    }

    fclose(file);
}
