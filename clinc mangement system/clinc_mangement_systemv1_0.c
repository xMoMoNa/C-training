/*
Name: clinc mangement system
Version: 1.0
Authour: Mohammed Mohsen Nassar
About: This is a core of mangement system for clinc
This project for test my progress in C language and be jonior
The test normal opration on data called CRUDS For Creat, Read, Update, Dleat and Search data
In the name of allah starting
Time take: This version project take about 30 Hour of work
*/


#include <stdio.h>
#include <stdlib.h>
#define null ((void*) 0)

typedef struct Node node;

struct Node {
	int id;
	int age;
	double slot ;
	char name[20];
	char gender;
	node *next;
};
char* showTime(int i) {
	if(i == 0) {
		return "The user has no slot";
	} else if(i==1) {
		return "The patien have slot At 02:00";
	} else if(i==2) {
		return "The patien have slot At 02:30";
	} else if(i==3) {
		return "The patien have slot At 03:00";
	} else if(i==4) {
		return "The patien have slot At 04:00";
	} else if(i==5) {
		return "The patien have slot At 04:30";
	}
}
int size=0;
double time[]= {-1, 2, 2.5, 3, 4, 4.5};

node *top = null, *header;

void addinfo(node *patient) {
	int id, check;
	char gender;
again:
	header=top;
	check=0;
	printf(">>>> please enter paatient ID: ");
	scanf("%d",&id);
	while(header != null) {
		if(id==header-> id) {
			check++;
			break;
		}
		header=header->next;
	}
	if (check) {
		printf("!! The ID is already existed please try again !!\n");
		goto again;
	} else patient-> id=id;

	printf(">>>> Please enter the name of patient: ");
	scanf("%s",&patient-> name);
	printf(">>>> Please enter the age of patient: ");
	scanf("%d",&patient-> age);
gen:
	printf(">>>> Please enter the gender of patient (\'m\' for male, \'f\' for female): ");
	scanf("%s",&gender);
	if (gender == 'm' || gender == 'f' ) patient-> gender=gender;
	else {
		printf("!! The gender isn\'t correct please try again !!\n");
		goto gen;
	}
	patient->slot = -1;
	return;
}

void add() {
	node *newpatient = (node*) malloc(1 * sizeof(node));
	if (size==0)
		newpatient->next=null;
	else
		newpatient->next=top;
	top=newpatient;
	addinfo(newpatient);
	size++;
	return;
}

char edit() {
	int id, age, flag, i=3, mode, slot; //mode of edit
	char *name, gender;
	node* check;

tryagain:
	flag=0;
	printf(">>>> Please enter patien\'s ID: ");
	scanf("%d",&id);
	header=top;

	while(header!= null) {
		if(id==header->id) {
			flag++;
			break;
		}
		header = header->next;
	}
	if(i==0) {
		goto end;
	}
	if(flag == 0) {
		printf("--------------------------------------------------------------\n");
		printf("!! ID isn\'t exist please try again, %d try left !!\n",i-1);
		printf("--------------------------------------------------------------\n");
		i--;
		goto tryagain;
	}
	printf("\nWhat you want to edit?\n");
retryedit:
	printf("0| don\'t edit anything\n");
	printf("1| The ID is: %d\n", header->id);
	printf("2| The name is: %s\n", header->name);
	printf("3| The age is: %d\n", header->age);
	if(header->gender=='m')
		printf("4| The gemder is: male\n");
	else
		printf("4| The gender is: female\n");
	if(header->slot == -1) {
		printf("5| The user has no slot\n");
	} else {
		printf("5| The user have slot At 0%d:%d0\n", (int)header->slot, 60*(header->slot - (int)header->slot) );
	}
	/*Start edit*/
	printf("---------------\n");
	printf(">>>> Please enter the edit number: ");
	scanf("%d", &mode);
	if (mode<0||mode>5) {
		printf("--------------------------------------------------------------\n");
		printf("!! The edit number is incorrect, Please try again !!\n");
		printf("--------------------------------------------------------------\n");
		goto retryedit;
	} else {
		flag = 0;
		switch(mode) {
			case 0:
				printf("\n+---------------+---------------------+--------------------+\n");
				printf("+-----------------+ Return to main menu +--------------------+\n");
				printf("+-----------------+---------------------+--------------------+\n");
				break;
			case 1:
retry_edit_id:
				check=top;
				flag=0;
				printf(">>>> Edit id to: ");
				scanf("%d", &id);
				while(check!=null) {
					if(check->id==id) {
						printf("--------------------------------------------------------------\n");
						printf("!! The id is exist please chose another id !!\n");
						printf("--------------------------------------------------------------\n");
						flag++;
						goto retry_edit_id;
					}
					if(!flag) break;
					check=check->next;
				}
				header->id=id;
				printf("--------------------------------------------------------------\n");
				printf(">>>> The id is edit successfuly  <<<<\n");
				printf("--------------------------------------------------------------\n");
				printf("\nWhat do you want edit next?\n");
				printf("---------------\n");
				goto retryedit;
				goto retryedit;
				break;
			case 2:
				printf(">>>> Edit name to: ");
				scanf("%s", &header->name);
				printf("--------------------------------------------------------------\n");
				printf(">>>> The name is edit successfuly  <<<<\n");
				printf("--------------------------------------------------------------\n");
				printf("\nWhat do you want edit next?\n");
				printf("---------------\n");
				goto retryedit;
				break;
			case 3:
				printf(">>>> Edit age to: ");
				scanf("%d",&age);
				header-> age = age;
				printf("--------------------------------------------------------------\n");
				printf(">>>> The age is edit successfuly  <<<<\n");
				printf("--------------------------------------------------------------\n");
				printf("\nWhat do you want edit next?\n");
				printf("---------------\n");
				goto retryedit;
				break;
			case 4:
retry_edit_gen:
				printf(">>>> Edit gender to (\'m\' for male, \'f\' for female): ");
				scanf("%s",&gender);
				if (gender == 'm' || gender == 'f' ) {
					header-> gender=gender;
					printf("--------------------------------------------------------------\n");
					printf(">>>> The gender is edit successfuly  <<<<\n");
					printf("--------------------------------------------------------------\n");
					printf("\nWhat do you want edit next?\n");
					printf("--------------------------------------------------------------\n");
					goto retryedit;
				} else {
					printf("--------------------------------------------------------------\n");
					printf("!! The gender isn\'t correct please try again !!\n");
					printf("--------------------------------------------------------------\n");
					goto retry_edit_gen;
				}
				break;
			case 5:
retry_sutible_slot:
				printf("The avaliable slot is\n1| 02:00\n2| 02:30\n3| 03:00\n4| 04:00\n5| 04:30\n");
				printf("---------------\n");
				printf(">>>> please enter the number of the sutible slot for you: ");
				scanf("%d",&slot);
				if (slot<1||slot>5) {
					printf("!! The slot is incorrect, Please try again !!\n");
					goto retry_sutible_slot;
				}
				header->slot = time[slot];
				printf("--------------------------------------------------------------\n");
				printf(">>>> The Slot is edit successfuly  <<<<\n");
				printf("--------------------------------------------------------------\n");
				printf("\nWhat do you want edit next?\n");
				printf("--------------------------------------------------------------\n");
				goto retryedit;
				//2, 2.5, 3, 4, 4.5
				break;
			default:
				break;
		}
	}
end:
	return flag;
}
void reseve (char reserv_canselReserv) {	//for reserv send 1 for cancel reserve send 2
	int flag, i=3, slot, id;
	node* check;
tryagain:
	flag=0;
	printf("---------------\n");
	printf(">>>> Please enter patien\'s ID: ");
	scanf("%d",&id);

	header=top;
	while(header!= null) {
		if(id==header->id) {
			flag++;
			break;
		}
		header = header->next;
	}
	if(i==0) {
		printf("--------------------------------------------------------------\n");
		printf("!! faild to reserv !!");
		printf("--------------------------------------------------------------\n");
		goto end_reserv;
	}
	if(flag == 0) {
		printf("--------------------------------------------------------------\n");
		printf("!! ID isn\'t exist please try again, %d try left !!\n",i-1);
		printf("--------------------------------------------------------------\n");
		i--;
		goto tryagain;
	}
	switch(reserv_canselReserv) {
		case 1:
retry_sutible_slot:
			printf("The avaliable slot is\n1| 02:00\n2| 02:30\n3| 03:00\n4| 04:00\n5| 04:30\n");
			printf("---------------\n");
			printf(">>>> please enter the number of the sutible slot for you: ");
			scanf("%d",&slot);
			if (slot<1||slot>5) {
				printf("--------------------------------------------------------------\n");
				printf("!! The slot is incorrect, Please try again !!\n");
				printf("--------------------------------------------------------------\n");
				goto retry_sutible_slot;
			}
			header->slot = time[slot];		//2, 2.5, 3, 4, 4.5
			printf("--------------------------------------------------------------\n");
			printf(">>>> The reserve is edit successfuly  <<<<\nWhat do you want edit next?\n");
			printf("--------------------------------------------------------------\n");
			break;
		case 2:
			header->slot = time[0];
			printf("--------------------------------------------------------------\n");
			printf(">>>> The reserve cansel successfuly  <<<<\n");
			printf("--------------------------------------------------------------\n");
			break;
		default:
			break;
	}
end_reserv:
	return;
}



void viewPatientRecord(node *patient) {
	header=patient;
	printf("1| The ID is: %d\n", header->id);
	printf("2| The name is: %s\n", header->name);
	printf("3| The age is: %d\n", header->age);
	if(header->gender=='m')
		printf("4| The gemder is: male\n");
	else
		printf("4| The gender is: female\n");
//	if(header->slot == -1){
//		printf("5| The user has no slot\n");
//	}
//	else{
//		printf("5| The user have slot At 0%d:%d0\n", (int)header->slot, 60*(header->slot - (int)header->slot) );
//	}
	return;
}

void viewReserve(node *patient) {
	header=patient;
	if(header->slot == -1) {
		printf("--------------------------------------------------------------\n");
		printf(">>>> The patien has no slot\n");
		printf("--------------------------------------------------------------\n");
	} else {
		printf("--------------------------------------------------------------\n");
		printf(">>>> The patien have slot At 0%d:%d0\n", (int)header->slot, 60*(header->slot - (int)header->slot) );
		printf("--------------------------------------------------------------\n");
	}
	return;
}

int main (void) {
	printf("+-----------------------------------------------+\n");
	printf("+     Welcome to clinc mangment system v1.0     +\n");
	printf("+-----------------------------------------------+\n");
	int mode=0, password, i=0, choise, flag, id;
	top=null;
up:
	printf("\nPlease enter your mode:\n1| For admin mode\n2| For user mode\n0| To exit\n---------------\nYour choice is: ");
	scanf("%d",&mode);
	printf ("---------------\n");
	switch (mode) {
		case 0:
			printf("+------------------------+------+----------------------------+\n");
			printf("+------------------------+ exit +----------------------------+\n");
			printf("+------------------------+------+----------------------------+\n");
			goto exit;
		case 1:
			printf("Welcome admin!\nPlease enter password: ");
			scanf("%d",&password);
			for (i=2; i>0; i--) {
				if (password != 1234) {
					printf("Incorrect password (%d try left)\nPlease enter password again: ",i);
					scanf("%d",&password);
				} else {
					printf("\nWelcom to clinc mangement system (admin mode)\n---------------------------------------------\n");
					break;
				}
			}
			if (i==0) {
				printf("!! Incorrect password !!\n>>>> log out");
				break;
			}
			while(1) {
				printf("press:\n0| To return to main list enter\n1| To add new patient record\n2| To edit patient record\n");
				printf("3| To reserve a slot with the doctor\n4| To cancel reservation\n");
				printf ("---------------\n");
				printf("Your choice is: ");
choise_input1:
				scanf("%d",&choise);
				printf("--------------------------------------------------------------\n\n");
				switch (choise) {
					case 0:
						printf("+-----------------+---------------------+--------------------+\n");
						printf("+-----------------+ Return to main menu +--------------------+\n");
						printf("+-----------------+---------------------+--------------------+\n");
						i=3;
						goto up;
					case 1:
						add();
						printf("--------------------------------------------------------------\n");
						printf(">>>> New patient added <<<<\n");
						printf("--------------------------------------------------------------\n\n");
						break;
					case 2:
						edit();
						printf("--------------------------------------------------------------\n");
						printf(">>>> Edit done <<<<\n");
						printf("--------------------------------------------------------------\n\n");

						break;
					case 3:
						reseve(1);
						printf("--------------------------------------------------------------\n");
						printf(">>>> Reserve a slot with the doctor done <<<<\n");
						printf("--------------------------------------------------------------\n\n");
						break;
					case 4:
						reseve(2);
						printf("--------------------------------------------------------------\n");
						printf(">>>> Reserve canceled <<<<\n");
						printf("--------------------------------------------------------------\n\n");
						break;
					default:
						printf("---------------------------------------------------------------------------\n");
						printf("!! Incorrect choise please enter correct !!\nchoise again: ");
						goto choise_input1;
				}
			}
			break;
		case 2:
			printf("Welcom user to clinc mangement system (user mode)\n");
			printf("--------------------------------------------------------------\n");
			while(1) {
retry_user:
				flag=0;
				printf(">>>> Please enter patien\'s ID: ");
				scanf("%d",&id);
				header=top;

				while(header!= null) {
					if(id==header->id) {
						flag++;
						break;
					}
					header = header->next;
				}
				if(i==0) {
					printf("+-----------------+---------------------+--------------------+\n");
					printf("+-----------------+ Return to Home menu +--------------------+\n");
					printf("+-----------------+---------------------+--------------------+\n");
					goto down;
				}
				if(flag == 0) {
					printf("--------------------------------------------------------------\n");
					printf("!! ID isn\'t exist please try again, %d try left !!\n",i-1);
					printf("--------------------------------------------------------------\n");
					i--;
					goto retry_user;
				}
				printf("press:\n0| To return to main list\n1| To view patient record\n2| To view today\'s reservations\nyour choise is: ");
choise_input2:
				scanf("%d",&choise);
				printf("--------------------------------------------------------------\n");
				switch (choise) {
					case 0:
						printf("+-----------------+---------------------+--------------------+\n");
						printf("+-----------------+ Return to main menu +--------------------+\n");
						printf("+-----------------+---------------------+--------------------+\n");
						i=0;
						goto down;
						break;
					case 1:
						viewPatientRecord(header);
						printf("--------------------------------------------------------------\n");
						break;
					case 2:
						viewReserve(header);
						printf("--------------------------------------------------------------\n");
						break;
					default:
						printf("--------------------------------------------------------------\n");
						printf("!! Incorrect choise please enter !!\nchoise again: ");
						printf("--------------------------------------------------------------\n");
						goto choise_input2;
				}
			}
			break;
		default:
			for (i=2; i>0; i--) {
				printf("--------------------------------------------------------------\n");
				printf("!! Incorrect choice please enter again! (%d try left) !!\n",i);
				printf("--------------------------------------------------------------\n");
down:
				printf("Please enter mode\nFor admin mode enter:1\nFor user mode enter: 2\n---------------\nYour choice is: ");
				scanf("%d",&mode);
				printf ("---------------\n");
				if (mode==1 || mode==2) goto up;
				else if(mode==0) goto exit;
			}
			printf("--------------------------------------------------------------\n");
			printf("!! Incorrect choice !!\n >>>> log out\n");
			printf("--------------------------------------------------------------\n");
			break;
	}
exit:
	return 0;
}
