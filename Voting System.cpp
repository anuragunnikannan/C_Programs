#include <stdio.h>// Calling
#include <stdlib.h>//Header
#include <string.h>//Files
int number,number2,Voters;//Deaclaring global variables
char Admin_names[5][20],Admin_passwords[5][20];
int admin_id,candidate_id;
char name[100],candidates[5][20];
char voters[10][20],votes[5][20];
void input()//function to take number of Administrators as input
{
	printf("Enter the number of Administrators:-\n");
	printf("Note: The maximum number of Administrators can be 3.\n");
	printf("Enter-> ");
	scanf("%d",&number);//storing number of administrators in variable number
	if(number>3)
	{
    	printf("\nThe number of Administrators can be a maximum of 3.");
    	printf("\nPlease restart the program.");//number cannot be greater than three
	    exit(0);//terminating program
	}
	else if(number<1)
	{
		printf("\nThe number of Administrators cannot be less than 1.");
		printf("\nPlease restart the program.");//number cannot be less than one
	    exit(0);//terminating program
	}
}
void store_profiles()//function to register Administrators
{
	int j,counter=0;//declaring integer variables
	Admin_names[number][20];
    Admin_passwords[number][20];
    printf("\n\t\t\t\t--------------------------\n");
	printf("\t\t\t\t|REGISTER ADMINISTRATORS:|\n");
	printf("\t\t\t\t--------------------------\n");
	for(int i = 0;i<number;i++)//for loop take Administrator names and passwords as input
	{
		getc(stdin);//flushing input stream
		printf("\n\t\tADMINISTRATOR %d:",(i+1));
		printf("\nEnter Admin Name: ");
		gets(Admin_names[i]);//storing Administrator name in Admin_names[]
		getc(stdin);
		printf("\nEnter Password: ");
		gets(Admin_passwords[i]);//storing Administrator password in Admin_passwords[]
	    for(j=0;j<number;j++)//for loop to check if Administrators names are being repeated or not
		{
            if(strcmp(Admin_names[i],Admin_names[j])==0)//comparing Administrator names
            counter++;
		}
		if(counter>1)//when Administrator name is being repeated
		{
		    printf("\nAdmin Name is already taken. Try another one.");
		    i--;
		}
		counter=0;//resetting the value of variable counter back to zero
	}
}
void manage_administrators()//function to manage Administrators
{	
    char password[20];
	int flag = 1,condition=1,j,counter=0;//declaring integer variables
	while(flag!=0)
	{
		printf("\n1. Change Admin Name");
		printf("\n2. Change Password");
		printf("\n3. Return back to Main Menu\n");
		printf("\nEnter your choice: ");//taking choice as input
		int choice;
		scanf("%d",&choice);//storing User's choice in variable choice
		switch(choice)//switch case
		{
			case 1://for changing current logged in Administrator name
				while(condition==1)
				{
					fgetc(stdin);
					printf("\nEnter new Admin Name: ");
					fgets(name,100,stdin);//storing new Administrator name in name
					for(j=0;j<number;j++)//for loop to check if Administrators names are being repeated or not
		       		{
               	    	if(strcmp(name,Admin_names[j])==0)//comparing Administrator names
                    	counter++;
		       		}
					if(counter==1)//when new Administrator name is already taken
					{
		   				printf("\nAdmin Name is already taken. Try another one.");
					}
					else
					{
						condition=0;
						strcpy(Admin_names[admin_id], name);//copying new Administrator name
					}
					counter=0;//resetting the value of variable counter back to zero
				}
			break;
			case 2://for changing current logged in Administrator password
				fgetc(stdin);
				printf("\nEnter new Password: ");
				fgets(password,20,stdin);//storing new Administrator password in password
				strcpy(Admin_passwords[admin_id], password);//copying new Administrator password
				break;
			case 3://for going back to the main menu
				flag = 0;
				break;
			default://when none of the choice matches to the case
				printf("Invalid Choice!");
		}
	}
	printf("\nNew Admin Name: %s",Admin_names[admin_id]);//printing new Administrator name
	printf("\nNew Admin Password: %s\n",Admin_passwords[admin_id]);//printing new Administrator password
}
void register_candidates()//function to register candidates
{
	int j,counter=0;
	fgetc(stdin);
	printf("\nEnter the number of candidates: ");
	scanf("%d",&number2);//storing number of candidates in variable number2
	candidates[number2][20];
    printf("\nEnter names of candidates: \n");
	for(int i = 0;i<number2;i++)//for loop to take candidate names as input from the user
	{
		fgetc(stdin);
		printf("\nCandidate %d: ",(i+1));
		fgets(candidates[i],20,stdin);//storing candidate name in candidates
		for(j=0;j<number2;j++)//for loop to check if candidate names are being repeated or not
		{
            if(strcmp(candidates[i],candidates[j])==0)//comparing candidate names
            counter++;
		}
		if(counter>1)//when candidate name is being repeated
		{
		    printf("\nCandidate Name is already taken. Try another one.");
		    i--;
		}
		counter=0;//resetting the value of variable counter back to zero
    }
}
void manage_candidates()//function to manage candidates
{
	if(number2==0)//when candidates have not yet been registered
	{
		printf("\nPlease Register Candidates (Option 2) first in order to access this option.\n");
		return;
	}
	candidates[number2][20];
	char ca[20],caa[20];
	int flag = 1,counter=1,j,i,index;
	while(flag!=0)
	{
		printf("\n1. Replace Candidates");
		printf("\n2. Return back to Main Menu\n\n");
		printf("Enter your choice: \n");//taking choice as input from user
		int choice;
		scanf("%d",&choice);//storing choice in variable choice
		switch(choice)//switch case
		{
			case 1://to replace candidates
					fgetc(stdin);
					printf("\nEnter candidate to be replaced: ");
					fgets(ca,20,stdin);//storing candidate to be replaced in variable ca
				for(i = 0;i<number2;i++)
				{
					if(strcmp(ca, candidates[i])==0)
					{
						index=i;//storing index of candidate to be replaced
					}
				}
				for(i=0;i<number2;i++)//for loop to replace candidate
			    {
					fgetc(stdin);
					printf("\nEnter new candidate: ");
					fgets(caa,20,stdin);//storing new candidate in caa
					for(j=0;j<number2;j++)//for loop to check if candidate names are being repeated or not
					{
           				if(strcmp(caa,candidates[j])==0)//comparing candidate names
            			counter++;
					}
					if(counter>1)//when candidate name is being repeated
					{
		    			printf("\nCandidate Name is already taken. Try another one.");
		    			i--;
					}
					else
					break;
					counter=0;//resetting the value of variable counter back to zero
				}
				strcpy(candidates[index], caa);//copying new candidate in place of old candidate
				break;
			case 2://for returning back to main menu
				flag = 0;
				break;
			default://when none of the choice matches to the case
				printf("\nInvalid Choice");
		}
	}
}
void display_candidates()//function for displaying candidates
{
	if(number2==0)//when candidates have not yet been registered
	{
		printf("\nPlease Register Candidates (Option 2) first in order to access this option.\n");
		return;
	}
	printf("\nThe List of Candidates:-\n");
	candidates[number2][20];
	for(int i = 0;i<number2;i++)//for loop to print the candidates
	{
		printf("\nCandidate %d. %s",(i+1),candidates[i]);
	}
	printf("\n");
}
int voting()//function for the voting process
{
	char word[10];
	printf("\n\t\t------------------------------------------------------------");
	printf("\n\t\t| You are now about to start the voting process.           |");
	printf("\n\t\t| IF you want to make any changes then write REVERT        |");
	printf("\n\t\t| to return back to the main menu to make appropriate      |");
	printf("\n\t\t| changes. If you still want to proceed then write PROCEED |");
	printf("\n\t\t------------------------------------------------------------");
    printf("\n\nEnter-> ");
    scanf("%s",&word);//taking word as input
    if((strcmpi(word,"PROCEED"))==0)//when word has PROCEED in it
    {
    printf("\nEnter the number of voters: ");
	scanf("%d",&Voters);//storing number of voters in variable Voters
	candidates[number2][20];
	voters[Voters][20];
	votes[Voters];
	int age,i,j,counter=0,voting_choice;//declaring integer variables
	for(i=0;i<Voters;i++)//for loop for conducting the voting
	{
	    printf("\nEnter Age: ");
		scanf("%d",&age);//storing the vote in variable age
		if(age>=18)//when age is greater than equal to eighteen
		{
			fgetc(stdin);
			printf("\nEnter EPIC ID: ");
			fgets(voters[i],20,stdin);//storing EPIC ID in voters[]
			for(j=0;j<Voters;j++)//for loop to ensure that each voter votes only once
			{
          	 	if(strcmp(voters[i],voters[j])==0)//comparing voter's EPIC ID
          	    counter++;
			}
			if(counter>1)//when the voter had already casted his/her vote
			{
		   		printf("\nYou have already casted your vote.");
		 	    i--;
			}
			if(counter==1)//when the voter will vote for the first time
			{
				printf("\n\t*****Candidates*****\t");
				printf("\n");
				for(j=0;j<number2;j++)//for loop to display the candidate list
				{
	    			printf("%d. %s\n",(j+1),candidates[j]);
				}
				printf("%d. NOTA",(number2+1));//for displaying the NOTA option
				printf("\nEnter the voting choice: ");
				scanf("%d",&voting_choice);//storing voting choice in variable voting_choice
				if((voting_choice>=1)&&(voting_choice<=number2))
				{
					strcpy(votes[i],candidates[(voting_choice-1)]);
					printf("\nYour vote has been successfuly casted.\n");
				}
				else if(voting_choice==(number2+1))
				{
					strcpy(votes[i],"N");
					printf("\nYour vote has been successfuly casted.\n");
				}
				else//when entered choice does not matches the above given options
				{
					printf("\nPlease select from the above options.\n");
					i--;
				}
			}
			counter=0;//resetting the value of variable counter back to zero
		}
		else//when the entered age is less than eighteen
		{
			printf("\nAge should be at least Eighteen.\n");
			i--;
		}
	}
	printf("\n");
	return 1;
	}
	else if((strcmpi(word,"REVERT"))==0)
	return 0;
	else//when the entered word is not PROCEED or REVERT
	{
		printf("\nPlease enter either PROCEED or REVERT.\n");
		return 0;
	}
}
void results()//function to display the voting results
{
	printf("\n\t\t\t\t-----------------");
	printf("\n\t\t\t\t|    RESULTS    |");
	printf("\n\t\t\t\t-----------------");
	votes[Voters][20];
	candidates[number2][20];
	int result[number2],sorted[number2];
	int i,j,k,counter=0,nota=0,swap,flag=0,zz;//declaring integer variables
	for(i=0;i<number2;i++)//for loop to compute the result
	{
		for(j=0;j<Voters;j++)
		{
			if(strcmp(candidates[i],votes[j])==0)
			counter++;
			if((strcmp(votes[j],"N")==0) && (i==0))
			nota++;
		}
		result[i]=counter;
		counter=0;
	}
	for(i=0;i<number2;i++)
	{
		//printf("\n%d",result[i]);
		sorted[i]=result[i];
	}
	int ar[number2];
	for(i=0;i<number2;i++)//for loop to sort the results in descending order
	{
		for(j=0;j<(number2-i-1);j++)
		{
			if(sorted[j]<sorted[j+1])
			{
				swap=sorted[j];
				sorted[j]=sorted[j+1];
				sorted[j+1]=swap;
			}
		}
	}
	char array[number2][20];
	for(i=0;i<number2;i++)
	{
	    for(j=0;j<number2;j++)
	    {
	    	if(sorted[i]==result[j])
	    	{
	    		for(k=0;k<number2;k++)
	    		{
	    			if((strcmp(candidates[j],array[k])==0))
	    			flag=1;
				}
				if(flag==0)
				{
				    strcpy(array[i],candidates[j]);
				    break;
				}
				else
				{}
				flag=0;
			}
		}
	}	
	if(sorted[0]!=0)
	printf("\n\t\t\t\tWINNING CANDIDATE: %s",array[0]);//printing the name of the winning candidate
	else
	printf("\nNo vote for any of the Candidates were casted.\n");
	printf("\n\n\t------------");
	printf("\n\t|STATISTICS|");
	printf("\n\t------------");
	printf("\nCANDIDATE\tVOTES\n\n");
	for(i=0;i<number2;i++)//for loop to print the statistics
	{
		printf("%s",array[i]);
		printf("\t\t%d",sorted[i]);
		printf("\n");
	}
	printf("\n\nNOTA\t\t%d",nota);
}
int main()//main function
{
	printf("\t\t\t\t\t------------------------------\n");
	printf("\t\t\t\t\t------------------------------\n");
	printf("\t\t\t\t\t|| WELCOME TO VOTING SYSTEM ||\n");
	printf("\t\t\t\t\t------------------------------\n");
	printf("\t\t\t\t\t------------------------------\n\n\n");
	input();
	store_profiles();
	char password[100],name2[100];
	int flag=0,kl,i;//declaring integer variables
	printf("\n\t\tEnter your credentials to Login:-\n");
	printf("\nEnter Admin Name: ");
	gets(name2);//storing Administrator name in name
	printf("\nEnter Password: ");
	gets(password);//storing Administrator password in password
	for(i = 0;i<number;i++)//for loop to check if entered Administrator name and password are present or not
	{
		if((strcmp(name2, Admin_names[i])==0) && (strcmp(password, Admin_passwords[i])==0))
		{
			
			flag=1;//when present
			admin_id = i;
			break;
		}
		else
		{
			flag = 0;//when not present
		}
	}
	if(flag==1)
	{
		int flag2 = 1;
		while(flag2!=0)
		{
			printf("\n\t\tWELCOME ADMINISTRATOR %s",name2);
			printf("\n\n\tAdmin ID:- %d",(admin_id+1));
			printf("\n\t--------");
			printf("\n\t|MENU:-|\n");
			printf("\t--------");
			printf("\n1. Manage Administrators");
			printf("\n2. Register Candidates");
			printf("\n3. Manage Candidates");
			printf("\n4. Display Candidates");
			printf("\n5. Start Voting");
			printf("\n6. Terminate\n");
			printf("\nEnter your choice: ");//taking choice as input from the user
			int choice;
			scanf("%d",&choice);//storing choice in variable choice 
			switch(choice)//switch case
			{
				case 1://for managing Administrators
					manage_administrators();
					break;
				case 2://for registering candidates
					register_candidates();
					break;
				case 3://for managing candidates
					manage_candidates();
					break;
				case 4://for displaying candidates
					display_candidates();
					break;
				case 5://for voting process
					if(number2==0)
					{
						printf("\nPlease Register Candidates (Option 2) first in order to access this option.\n");
						break;
					}
					else
					{
						kl=voting();
						if(kl==0)
						break;
						else
						{
							results();
							exit(0);
						}
					}
				case 6://for terminating program
					printf("\nYou have successfully terminated from the program.");
					exit(0);//terminating program
				default:
					printf("\nInvalid Input");
			}
		}
	}
	else//when Administrator name and password is invalid
	{
		printf("\nInvalid Admin Name or Password!");
		printf("\nPlease restart the program.");
	}
	return 0;
}
