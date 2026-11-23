/*Problem 4:
 Personal Expense Tracker Problem statement:
  Build a simple expense tracker to help a student manage a monthly budget.
   Requirements: 
   • Accept a monthly budget and record multiple expenses. 
   • Categorize expenses, such as food, travel, books, and entertainment. 
   • Calculate total spending and remaining budget. 
   • Display the category with the highest expenditure and issue a warning if the budget is exceeded.
   
   Expected output: Expense summary, category-wise totals, and budget status. */
   #include<stdio.h>
   int main(){
    double monthly_budget=0,amount,total_expenditure=0;
    double food=0,travel=0,stationary=0,entertainment=0,Miscellaneous=0;
    double remaining=0,max=0; //recording monthly budget 
    int category;         
    int choice =1;
    

    


    printf("Enter Your Monthly Budget:\n");         
    scanf("%lf", &monthly_budget);
    
     while(choice==1){
    printf("\t Enter the category of your expense :\n");               
    printf("Press 1 for recording food and dinning expenses :\n");
    printf("Press 2 for recording travel expenses :\n");
    printf("Press 3 for recording stationary and education expenses :\n");
    printf("Press 4 for recording entertainment expenses :\n");
    printf("Press 5 for recording Miscellaneous expenses :\n");
    scanf("%d", &category);
    printf("Enter the amount:\n");
       scanf("%lf",&amount);
    switch (category){
      case 1:
      food+=amount;
      break;
       
      case 2:
      travel+=amount;
      break;

      case 3:
      stationary+=amount;
      break;
       
      case 4:
      entertainment+=amount;
      break;
      
      case 5:
      Miscellaneous+=amount;
       
       default: 
       printf("Invalid Choice\n");
    }
    printf("DO you wish to continue\n ");
    printf("IF yes press 1 , IF no press 2 \n");
    scanf("%d", &choice);

  }
  total_expenditure=food +entertainment+Miscellaneous+travel+stationary;
  remaining=monthly_budget-total_expenditure;
    
  max =0;
  
  if (max <food)
      max =food;
    
   if (max<travel)
    max=travel;

   if (max<entertainment)
    max=entertainment;

   if (max<stationary)
  max=stationary;

   if (max< Miscellaneous)
  max=Miscellaneous;

   if(max<food)
  max =food;

  
  printf("----- EXPENSE STATUS -----\n");
  printf("Food and dinning =%.2lf\n",food);
  printf("Travel = %.2lf\n", travel);
  printf("Stationary= %.2lf\n", stationary);
  printf("Entertaiment =%.2lf\n" ,entertainment);
  printf("Misllaneous=%.2lf\n ",  Miscellaneous);
  
printf("----- BUDGET STATUS -----\n");
printf("The total expenditure is =%.2lf\n", total_expenditure);
printf("The remaining budget is =%.2lf\n", remaining);

  if (max ==travel)
  printf("The maximum expenditure is done in travel \n");
   
  else if (max ==entertainment)
  printf("The maximum expenditure is done in Entertainment.\n");

  else if(max==food)
  printf("The maximum expenditure is done in food and dinning.\n");

  else if(max==stationary)
  printf("The maximum expenditure is done in statonary.\n");

  else if(max==Miscellaneous)
  printf("The maximum is done in miscellaneous.\n");
  
if (total_expenditure> monthly_budget){
  printf("----- WARNING -----\n You are exeding your monthly budget \n");
}
printf("THANK YOU !!");

    return 0;

    }