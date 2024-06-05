/******************************************************************************

Welcome to SPM insurence company.

*******************************************************************************/
#include <stdio.h>
void main ()
{
  int plan,quit;
  
  printf ("\t\tWELLCOME TO SSGMCE INSURENCE AGENCY\n\n");
  printf ("Do something today that your future self will thank for you.\n\n");
  printf ("Insurence plans for your good future\n");
 

  printf ("Enter the plan you want to select");
  printf ("\n 1 For Health Insurence \n 2 For Education Policy(Under 18) \n 3 For Vehicle Insurence\n ");
  scanf ("%d",&plan);
  switch (plan)
    {
    case 1:
      printf ("********Health Insurance*********\n");
     {
    int age , consideration2 ;
    char gender, pre_disease, name[200],confirm, consideration1;
    
    printf("\n\n\t\tWelcome to *****INSURANCE AGENCY***** ");
    printf("\n\nEnter First Name: ");
    scanf("%s",&name[200]);
    
    printf("\n\nEnter age of the candidate ");
    scanf("%d",&age);
    printf("\n\nEnter the gender of candidate(m/f) ");
    scanf("%c",&gender);
        
    if(age>80){
        printf("\n\nYou are not eligible for insurance ");
    }
    else if(age>=18&&age<80) 
    {
        printf("\n\nIs there any pre-disease (y/n)");
    scanf("%s",&pre_disease);
        printf("\n\nChoose the policy suitable for you  ");
       
        if(pre_disease =='y')
        {
            printf("\n\nDo you want to consider pre_disease in our policy (y/n)");
            scanf("%s", &consideration1);
            if(consideration1 =='y')
               {
                   printf("Following are some policies available for you ");
                   printf("\n\n1. Platinum Health : \nPremium - 20,000 per year \nClaim upto 5lkh \n**Additional 1,000 premium per year for pre disease \nAdditional claim of 1 lkh");
                   printf("\n\n2. Gold Health : \nPremium - 15,000 per year \nClaim upto 3lkh\n**Additional 800 premium per year for pre disease \nAdditional claim of 75,000");
                   printf("\n\n3. Silver Health : \nPremium - 10,000per year \nClaim upto 2lkh \n**Additional 600 premium for pre disease \nAdditional claim of 50,000 ");
                   printf("\n\nEnter the choice you prefer - 1/2/3 \n");
                   scanf("%d",&consideration2);
                   
                   switch(consideration2)
                   {
                       case  1 :       printf("\n You have choosen our Platinum Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                      printf("\n\n\t\tName Of Candidate - %s",name);
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 20,000 per year for 15 years");
                                      printf("\n\t\tPre disease premium - 1000 for 15 years");
                                      printf("\n\t\tTotal amount to pay - 3 lkh + 15k ");
                                      printf("\n\t\tTotal benifit - 5 lkh + 1 lkh ");
                                      printf("\n\n\t\t******THANKS******");
                        break ;              
                                      
                        case 2 :      printf("\n You have choosen our Golden Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                      printf("\n\n\t\tName Of Candidate - %s",name) ;
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Golden Health Policy");
                                      printf("\n\t\tPremium - 15,000 per year for 15 years");
                                      printf("\n\t\tPre disease premium - 800 for 15 years");
                                      printf("\n\t\tTotal amount to pay - 2 lkh + 10k ");
                                      printf("\n\t\tTotal benifit - 3 lkh + 75,000 ");
                                      printf("\n\n\t\t******THANKS******"); 
                                      
                        break ;
                        
                        case 3 :      printf("\n You have choosen our Silver Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                      printf("\n\n\t\tName Of Candidate - %s",name);
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Silver Health Policy");
                                      printf("\n\t\tPremium - 10,000 per year for 15 years");
                                      printf("\n\t\tPre disease premium - 600 for 15 years");
                                      printf("\n\t\tTotal amount to pay - 2 lkh + 9k ");
                                      printf("\n\t\tTotal benifit - 1 lkh + 50,000 ");
                                      printf("\n\n\t\t******THANKS******");                               

                                    break;  
                                
                                  
                       
                   }
               }
              else if (consideration1 =='n'){
              
                   printf("\nFollowing are some policies available for you ");
                   printf("\n\n1. Platinium Health : \nPremium - 20,000 per year \nClaim upto 5lkh ");
                   printf("\n\n2. Gold Health : \nPremium - 15,000 per year \nClaim upto 3lkh ");
                   printf("\n\n3. Silver Health : \nPremium - 10,000per year \nClaim upto 2lkh");
                   printf("\n\nEnter the choice you prefer - 1/2/3 \n");
                   scanf("%d",&consideration2);  
                   
                   switch(consideration2)
                   {
                            case 1 :  printf("\n You have choosen our Platinum Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                   printf("\n\n\t\tName Of Candidate - %s",name  );
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 20,000 per year for 15 years");
                                      printf("\n\t\tTotal amount to pay - 3 lkh  ");
                                      printf("\n\t\tTotal benifit - 5 lkh  ");
                                      printf("\n\n\t\t******THANKS******");
                            break ; 
                            
                            case 2 :  printf("\n You have choosen our Gold Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                    printf("\n\n\t\tName Of Candidate - %s",name );
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 15,000 per year for 15 years");
                                      printf("\n\t\tTotal amount to pay - 2 lkh  ");
                                      printf("\n\t\tTotal benifit - 3 lkh  ");
                                      printf("\n\n\t\t******THANKS******");
                            break ; 
                            
                            case 3 : printf("\n You have choosen our Silver Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                    printf("\n\n\t\tName Of Candidate - %s",name );
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 10,000 per year for 15 years");
                                      printf("\n\t\tTotal amount to pay - 1.50 lkh  ");
                                      printf("\n\t\tTotal benifit - 2 lkh  ");
                                      printf("\n\n\t\t******THANKS******");
                            break ; 
                       
                       
                   }
              }
        }
        else if(pre_disease =='n')
        {
                   printf("Following are some policies available for you ");
                   printf("\n1. Platinium Health : \nPremium - 20,000 per year \nClaim upto 5lkh ");
                   printf("\n\n2. Gold Health : \nPremium - 15,000 per year \nClaim upto 3lkh ");
                   printf("\n\n3. Silver Health : \nPremium - 10,000per year \nClaim upto 2lkh");
                   printf("\n\nEnter the choice you prefer - 1/2/3 \n");
                   scanf("%d",&consideration2); 
                   
                   switch(consideration2)
                   {
                            case 1 :  printf("\n You have choosen our Platinum Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                    printf("\n\n\t\tName Of Candidate - %s",name );
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 20,000 per year for 15 years");
                                      printf("\n\t\tTotal amount to pay - 3 lkh  ");
                                      printf("\n\t\tTotal benifit - 5 lkh  ");
                                      printf("\n\n\t\t******THANKS******");
                            break ; 
                            
                            case 2 :  printf("\n You have choosen our Gold Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                    printf("\n\n\t\tName Of Candidate - %s",name );
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 15,000 per year for 15 years");
                                      printf("\n\t\tTotal amount to pay - 2 lkh  ");
                                      printf("\n\t\tTotal benifit - 3 lkh  ");
                                      printf("\n\n\t\t******THANKS******");
                            break ; 
                            
                            case 3 : printf("\n You have choosen our Silver Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                     printf("\n\n\t\tName Of Candidate - %s",name);
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 10,000 per year for 15 years");
                                      printf("\n\t\tTotal amount to pay - 1.50 lkh  ");
                                      printf("\n\t\tTotal benifit - 2 lkh  ");
                                      printf("\n\n\t\t******THANKS******");
                            break ; 
                   
             }
    }
    }
    if (age<18 && age>5)
    {
                   printf("Following are some policies available for you ");
                   printf("\n\n1. Platinium Health : \nPremium - 20,000 per year \nClaim upto 5lkh + Additional benifits ");
                   printf("\n\n2. Gold Health : \nPremium - 15,000 per year \nClaim upto 3lkh + Additional benifits");
                   printf("\n\n3. Silver Health : \nPremium - 10,000per year \nClaim upto 2lkh + Additional benifits");
                   printf("\n\nEnter the choice you prefer - 1/2/3 ");
                   scanf("%d",&consideration2);
                   
                   switch(consideration2)
                   {
                            case 1 :  printf("\n You have choosen our Platinum Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                    printf("\n\n\t\tName Of Candidate - %s",name );
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 20,000 per year for 15 years");
                                      printf("\n\t\tTotal amount to pay - 3 lkh  ");
                                      printf("\n\t\tTotal benifit - 5 lkh + Additional Benifits ");
                                      printf("\n\n\t\t******THANKS******");
                            break ; 
                            
                            case 2 :  printf("\n You have choosen our Gold Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                     printf("\n\n\t\tName Of Candidate - %s",name);
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 15,000 per year for 15 years");
                                      printf("\n\t\tTotal amount to pay - 2 lkh  ");
                                      printf("\n\t\tTotal benifit - 3 lkh + Additional Benifits ");
                                      printf("\n\n\t\t******THANKS******");
                            break ; 
                            
                            case 3 : printf("\n You have choosen our Silver Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                   printf("\n\n\t\tName Of Candidate - %s",name );
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 10,000 per year for 15 years");
                                      printf("\n\t\tTotal amount to pay - 1.50 lkh  ");
                                      printf("\n\t\tTotal benifit - 2 lkh + Additional Benifits  ");
                                      printf("\n\n\t\t******THANKS******");
                            break ; 
    } 
        
    }
    
     else if (age<=5) {
        printf("Following are some policies available for you ");
        printf("\n\n1. Silver Health : \nPremium 20,000 per year upto 5 years \nFirst 30 days total claim + Additional claim upto 5lkh");
        printf("\n\n2. Silver Health : \nPremium 15,000 per year upto 5 years \nFirst 30 days total claim + Additional claim upto 3lkh");
        printf("\n\n3. Silver Health : \nPremium 10,000 per year upto 5 years \nFirst 30 days total claim + Additional claim upto 2lkh");
        printf("\n\nEnter the choice you prefer - 1/2/3 \n");
        scanf("%d",&consideration2);
        
        switch(consideration2)
                   {
                            case 1 : { printf("\n You have choosen our Platinum Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                   printf("\n\n\t\tName Of Candidate - %s",name );
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 20,000 per year for 15 years");
                                      printf("\n\t\tTotal amount to pay - 3 lkh  ");
                                      printf("\n\t\tTotal benifit - 5 lkh + First 30 days total claim  ");
                                      printf("\n\n\t\t******THANKS******");}
                            break ; 
                            
                            case 2 :  {printf("\n You have choosen our Gold Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                   printf("\n\n\t\tName Of Candidate - %s",name );
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 15,000 per year for 15 years");
                                      printf("\n\t\tTotal amount to pay - 2 lkh  ");
                                      printf("\n\t\tTotal benifit - 3 lkh + First 30 days total claim   ");
                                      printf("\n\n\t\t******THANKS******");}
                            break ; 
                            
                            case 3 : {printf("\n You have choosen our Silver Health policy");
                                
                                      printf("\n\n\t\t******RECEIPT******");
                                     printf("\n\n\t\tName Of Candidate - %s",name);
                                      printf("\n\t\tGender - %c",gender);
                                      printf("\n\t\tName of policy - Platinum Health Policy");
                                      printf("\n\t\tPremium - 10,000 per year for 15 years");
                                      printf("\n\t\tTotal amount to pay - 1.50 lkh  ");
                                      printf("\n\t\tTotal benifit - 2 lkh + First 30 days total claim ");
                                      printf("\n\n\t\t******THANKS******");}
                            break ; 
 }                  }
                   
                   
                   
     
     
     
    }


      break;
    case 2:
      printf ("education purpose policy\n");
      {
  char gender[8],a[32];
  int age,months,y;
  float x;

  printf("Enter your name\n");
  scanf("%s",a);
  printf("Enter your age\n");
  scanf("%d",&age);
  printf("\nEnter sex - m for male / f for female\n");
  scanf("%s",gender);
  
  months=age*12;
  x=216-months;
  
    if(age<18)
     { printf("you are eligible for applying policy");
     
        printf("\n 1 for silver plan is 500rs month premium\n 2 for golden is 700rs month prmium \n 3 for platinum is 1000rs month prmium \n 4 for daimondis 1500rs month prmium \n ");
       scanf("%d",&y);
        switch(y)
      {
       case 1:
	   printf ("you have selected silver plan is 500rs month\n");
	   printf("*****reciept******\n");
	   printf(" name of candidate is%s \n",a);
	   printf("you will recive %f rs when you passed 10th\n",x*115.745);
	   printf("you will recive %f rs when you passed 12th",x*349.54);
	   break;
       case 2:
       printf ("you have selected gold plan is 700rs per month\n");
       printf("*****reciept******\n");
       printf(" name of candidate is%s \n",a);
	   printf("you will recive %f rs when you passed 10th\n",x*231.5);
	   printf("you will recive %f rs when you passed 12th",x*462.8);
	   break;
       case 3:
	   printf ("you have selected platinum plan is 1000rs per month\n");
	   printf("*****reciept******\n");
	   printf(" name of candidate is%s \n",a);
	   printf("you will recive %f rs when you passed 10th\n",x*347);
	   printf("you will recive %f rs when you passed 12th",x*694);
	   break;
       case 4:
       printf ("you have selected daimond plan is 1500rs per month\n");
       printf("*****reciept******\n");
        printf(" name of candidate is%s \n",a);
	   printf("yu will recive %f rs when you passed 10th\n",x*463);
	   printf("you will recive %f rs when you passed 12th",x*1157.41);
	   break;
      }
     }
 else 
 {printf("you are not eligible");}
 
}

     
      break;
    case 3:
      printf ("vehicle insurence\n");
      {
	float val = 0;
	int catg;

	printf
	  ("Category 1, silver policy is 25 percent of the vehicle price can be recovered.\n");
	printf ("Category 2, gold is 35 percent of the vehicle price  can be recovered.\n");
	printf ("Category 3, platinum is 55 percent of the vehicle price  can be recovered.\n");
	printf ("\nPlease enter the category of Insurance Policy: ");
	scanf ("%d", &catg);
	printf ("\nPlease enter the vehicle price: ");
	scanf ("%f", &val);
	switch (catg)
	  {
	  case 1:
	    printf ("\nPremium of vehicle is: %f", val * 2 / 100);
	    printf
	      ("\n as per you premium policy accedental coverage of %f can be covered",
	       val * 25 / 100);
	    break;
	  case 2:
	    printf ("\nPremium of vehicle is: %f", val * 3 / 100);
	    printf
	      ("\n as per you premium policy accedental coverage of %f can be covered",
	       val * 35 / 100);
	    break;
	  case 3:
	    printf ("\nPremium of vehicle is: %f", val * 5 / 100);
	    printf
	      ("\n as per you premium policy accedental coverage of %f can be covered",
	       val * 55 / 100);
	    break;
	  default:
	    printf ("\nInvalid Category Selected.");
	  }
      }
      break;
    case 4:
      printf ("check your policy status ");
      {
    char add[20],agent[30],name[20],m_date[10],c_date[10], plan[30], po_status[10], pre_due[10];
    int po_num,p_term, ins_pre,term,age, sum,k;
    float bonus; 
    printf("LIC");
    printf("\t\tLife Insurance Co-op of india"); 
    printf("\nenter your name :");
    scanf("%s",name);
    printf("\nenter your plan name : ");
    scanf("%s",plan);
    printf("\nenter total sum assured : ");
    scanf("%d",&sum);
    printf("\nenter your policy number :");
    scanf("%d",&po_num);
    printf("\nenter your installment premium :");
    scanf("%d",&ins_pre);



    printf("\nenter the number of installments :");
    scanf("%d",&k);
    
    printf("enter your Age :");
    scanf("%d",&age); 
    printf("Policy term years : ");
    scanf("%d",&term);
    printf("premium paying term years:");
    scanf("%d",&p_term);
    printf("COMMENCEMENT DATE :");
    scanf("%s",c_date);
    printf("DATE OF MATURITY :");
    scanf("%s",m_date);
    printf("agent details :");
    scanf("%s",agent);
    printf("enter your address :");
    scanf("%s",add);

printf("\n\nPolicy information : \n\n");
printf("Name of the life assured : %s",name);
printf("\t \t Policy number : %d",po_num);
printf("\nyour plan name : %s",plan);
printf("\t \t installment premium : %d",ins_pre);
printf("\nSum assured : %d",sum);
 bonus=0.02*ins_pre;
 printf("\t\tbonus assured %.2f rs\n",bonus);
   
   
    printf("\n\nbilling details: \n\n");
    printf("installment premium : rs. %d",ins_pre);
    printf("\t\tAmount due : rs %d",ins_pre);
    printf("\nnumber of installments : %d",k);

 printf("\n\nother details : \n\n");

   printf("your Age : %d",age);
  
    printf("\npremium paying term :%d yrs",p_term);
    printf("\t\tCOMMENCEMENT DATE : %s",c_date);
    printf("\nDATE OF MATURITY : %s",m_date);
    printf("\t\tagent details : %s",agent);
    printf("\nenter your address : %s",add);



}
      
      break;
    case 5:
      printf ("Term life innsurence");
      {
  int i = 1;
  do
    {
      char health, gender, area;
      int age;
      
    printf("\nEnter health condndition (G for good/B for bad)");
    scanf (" %c", &health);
       
	printf("\nEnter gender (m/f)");
 scanf (" %c",&gender);
	printf("\nEnter area(c for city/v for village)");
	 	scanf (" %c",&area);
	printf("\nEnter your age");
     scanf ("%d",&age);
    

      if (health == 'G' && gender == 'm' && area == 'c' && age >= 15
	  && age <= 35)
	{
	  printf ("\nInsured\n");
	  printf ("\nPremium rate = Rs. 4 per 1,000\n");
	  printf ("\nmaximum policy amount = Rs. 2,00,000");
	}
      else
	if (health == 'G' && gender == 'f' && area == 'c' && age >= 25
	    && age <= 35)
	{
	  printf ("\nInsured");
	  printf ("\nPremium Rate = Rs. 3 per 1000");
	  printf ("\nMaximum policy amount = Rs. 1,00,000");
	}
      else
	if (health == 'B' && gender == 'm' && area == 'v' && age >= 25
	    && age <= 35)
	{
	  printf ("\nInsured");
	  printf ("\nPremium Rate = Rs. 6 per 2,000");
	  printf ("\nMaximum policy amount = Rs. 20,000");
	}
      else
	printf ("\nYou have not applied for insurance \n");
    
    }
  while (i =10);
 
}

      break;

    }

     printf("Thanks for using our Software");
   
    
 }









