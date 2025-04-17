#include <stdio.h>
 typedef enum {
    Running = 1,
    Swimming ,
    Cycling
 }ExerciseType;
 int calculateCalories(ExerciseType type, int duration){
    switch (type){
        case Running:
        return duration * 10;
        break;

        case Swimming:
        return duration * 8;
        break;

        case Cycling:
        return duration * 6;
        break;

        default:
        return 0;
    }
 }
 void displayResults(ExerciseType type, int duration, int calories){
    char *exerciseName;
    switch(type){
        case Running:
        exerciseName = "Running";
        break;
        
        case Swimming:
        exerciseName = "Swimming";
        break;

        case Cycling:
        exerciseName = "Cycling";
        break;

        default:
        exerciseName = "unknown";
    }
        printf("ExerciseType: %s \n",exerciseName);
        printf("duration :%d minutes \n", duration);
        printf("calories :%dcal \n", calories);
}
int main(){
    int duration;
    int calories;
    int choice;

    while(1){
        printf("Select the ExerciseType: \n");
        printf("1- Running \n");
        printf("2- Swimming \n");
        printf("3- Cycling \n");
        printf("0- Quit \n");

        printf("enter your choice \n");
        scanf("%d", &choice);

     if (choice == 0){
        printf("Goodbye \n");
        break;
     }
     
     if(choice < 0 || choice > 3){
        printf("it is invalid choice, choose again");
        continue;
     }

     printf("enter the duration  in minutes\n");
     scanf("%d", &duration);
    if(duration <= 0){
        printf("Your duration should be positive");
        continue;
    }
    calories = calculateCalories( (ExerciseType) choice,  duration);

    displayResults((ExerciseType) choice , duration,  calories);
    }
    return 0;
}