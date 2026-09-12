                           // BY TAHA AHMED ,BSAI, 1B, 26K-0047
/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int main(){
                          // SLOTS AVAILABILITY CHECK
/////////////////////////////////////////////////////////////////////////////

// assuming the total slots and filled slots
int Total_slots=100;
int Filled_slots=67;

if (Total_slots>Filled_slots){
    printf("Slots are Available\nAvailable slots : %d\n",Total_slots-Filled_slots);
}else{
    printf("No Slots Available :(\n\n");
}


                           //MEMBERSHIP ELIGIBILITY CHECK
///////////////////////////////////////////////////////////////////////////////

int age;
printf("Enter your age: ");
scanf("%d", &age);

if (age < 16) {
    printf("You are not eligible for membership.\n");
} else {
    printf("You are eligible for membership.\n");



                              // MEMBERSHIP PLAN SELECTION
///////////////////////////////////////////////////////////////////////////////

float fee;
int plan;
float basic_plan_fee=5000;
float premium_plan_fee=8000;
float    vip_plan_fee=11000;
printf("Select a membership plan:\n");
printf("1. Basic Plan= Rs. 5000\n");
printf("2. Premium Plan= Rs. 8000\n");
printf("3. VIP Plan= Rs. 11000\n");
printf("Enter your choice (1-3) : ");
scanf("%d", &plan);
switch (plan) {
    case 1 : printf("You have selected the Basic plan.\n");
    fee=basic_plan_fee;
    break;
    case 2 : printf("You have selected the Premium Plan. \n");
    fee=premium_plan_fee;
    break;
    case 3 : printf("You have selected the VIP Plan.\n");
    fee=vip_plan_fee;
    break;
    default : printf("Choose From 1-3 only.\n");
 return 0;
}

                                  // DISCOUNT OFFER
///////////////////////////////////////////////////////////////////////////////

int duration;
printf("Enter the duration from you joined the gym (in months) : ");
scanf("%d", &duration);
if (duration>=6) {
    fee = fee-(0.1*fee); 
       printf("Discounted fee : %f\n", fee);
}else{
    printf("Not eligible for discount. Fee : %f\n", fee);
}


                             // QUESTION ABOUT PERSONAL TRAINER
///////////////////////////////////////////////////////////////////////////////
char response;
int personal_trainer_fee=1500;
printf("Do you want to hire a personal trainer for Rs.1500 only? (Y/N) : \n");
 scanf(" %c", &response);
if (response=='N'){
printf("As you have'nt opted for a personal trainer, the personal trainer fee of 1500 will not be added. Your fee is : %f\n", fee);}
    else{
        printf("You have opted for a personal trainer, your fee is : %f\n",fee+personal_trainer_fee);
        fee=fee+personal_trainer_fee;


                                // TRAINER RATING
///////////////////////////////////////////////////////////////////////////////
int rating;
printf("Please let us know what would you rate the personal trainer (1-5) : \n");
scanf("%d", &rating);
if (rating<3){
    printf("sorry to hear your AVERAGE experience with the personal trainer, we will work upon it.\n");
} else if (rating==3){
    printf("we are happy to hear a GOOD experience of yours with the trainer and we will try to make it even better.\n");
} else if (rating>3){
    printf("We are more than happy to hear your EXELLENT experience with the personal trainer, we will keep up the good work.\n");
}
}


                            // DIET CONSULTATION SERVICE
///////////////////////////////////////////////////////////////////////////////
char reply;
int diet_consultation_fee=1000;
printf("Do you want to avail the diet consultation service for only Rs.1000? (Y/N)\n");
 scanf(" %c", &reply);
if (reply=='N'){
    printf("As you have'nt opted the service your fee would be : %f\n",fee);}
    else {
        printf("You have selected the diet consultation service and your updated fee would be : %f\n",fee+diet_consultation_fee);
    fee=fee+diet_consultation_fee;
    
}


                                // MONTHLY BILL
///////////////////////////////////////////////////////////////////////////////

float tax=0.1*fee;
float Bill=(duration*fee)+tax;
printf("Your Total Bill is : %f\n", Bill);


                                // SUPPLEMENT MENU
///////////////////////////////////////////////////////////////////////////////

int supplement_menu;
printf("Enter your choice of supplements\n1. Protein\n2. Creatine\n3. BCAA\n");
scanf("%d", &supplement_menu);
switch (supplement_menu) {
    case 1 : printf("You have selected protein supplement.\n");
    break;
    case 2 : printf("You have selected creatine supplement.\n");
    break;
    case 3 : printf("You have selected BCAA supplement.\n");
    break;
    default : printf("Error!");
    return 0;
}


                                  // LATE PAYMENT PENALTY
///////////////////////////////////////////////////////////////////////////////

int date_fee_submission;
printf("Enter the date of the submission of the fee (1-31): ");
scanf("%d", &date_fee_submission);
if (date_fee_submission>10){
    printf("You have submitted the fee after the due date, a penalty of 300 Rs will be added in your bill.\n");
Bill=Bill+300;
printf("Your updated Bill is : %f\n",Bill);
}else {
    printf("You have submitted the fee within the due date, No penalty will be added to your bill.\n");
}


                                // CORPORATE MEMBER HANDLING
///////////////////////////////////////////////////////////////////////////////

char corporate_member;
printf("Are you a corporate employee? (Y/N) : \n");
 scanf(" %c", &corporate_member);
if (corporate_member=='Y'||'y'){
    printf("Since you are a corporate employee you will be getting a 20 percent discout on you Bill.\n");
Bill=0.8*Bill;
printf("Your updated Bill is : %f\n",Bill);
}
else{
    printf("Since you are'nt are corporate employee you will not be getting this discount.\n");
    Bill=Bill;
}


                               // MULTIPLE MEMBER AGE CHECK
/////////////////////////////////////////////////////////////////////////////// 

int age1, age2, age3;
printf("Enter the age of person 1 : ");
scanf("%d", &age1);
printf("Enter the age of person 2 : ");
scanf("%d", &age2);
printf("Enter the age of person 3 : ");
scanf("%d", &age3);

if (age1 > 16&&age2 > 16&&age3 > 16){
    printf("Group membership allowed.\n");
}else {
    printf("Group membership not allowed, according to the age criteria.\n");
}


                             // PAYMENT CONFIRMATION
///////////////////////////////////////////////////////////////////////////////
int payment;
printf("Have you made payment? (Y/N) : \n");
 scanf(" %c", &payment);
 if (payment='Y'){
    printf("Membership confirmed, Thank you for your payment. \n");
 }else {
    printf("Status:Pending\n");
 }


                             //FEEDBACK REWARD
///////////////////////////////////////////////////////////////////////////////

int answer;
printf("How would you rate our Gym service overall? (1-5) : \n");
scanf("%d", &answer);
if (answer>=4){
    printf("Thank you for your feedback you have been rewarded with feedback reward\n");
    printf("Get your free protein shake voucher from the counter.\n");
}else {
    printf("We are extremely sorryfor any in convinience caused, we will work upon it and try to improve.\n");
}

}

}