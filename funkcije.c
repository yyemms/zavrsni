#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include "funkcije.h"
#include "datatype.h"


struct person create_person(char* ptrName)
{
	newperson = (struct person*)malloc(sizeof(struct person));
	if (newperson == NULL)
	{
		printf("\n Memorija nije dodijeljena");
		return 0;
	}
	else
	{
		strcpy(newperson->name, ptrName);
		newperson->next = NULL;
		return *newperson;
	}
}

struct ticket create_ticket(char* tktNumber)
{
	newticket = (struct ticket*)malloc(sizeof(struct ticket));
	if (newticket == NULL)
	{
		printf("\nMemorija nije dodijeljena");
		return 0;
	}
	else
	{
		strcpy(newticket->number, tktNumber);
		newticket->next = NULL;
		return *newticket;
	}
}


void insert_person()
{
	char val[50];

	printf("\nUnesite ime osobe : ");
	scanf("%s", val);
	*newperson = create_person(val);
	if (firstPerson == lastPerson && lastPerson == NULL)
	{
		firstPerson = lastPerson = newperson;
		firstPerson->next = NULL;
		lastPerson->next = NULL;
	}
	else
	{
		lastPerson->next = newperson;
		lastPerson = newperson;
		lastPerson->next = NULL;
	}
	printf("\n----DODANO----");
}

void insert_ticket()
{
	char val[50];

	printf("\nUnesite broj karte : ");
	scanf("%s", val);
	*newticket = create_ticket(val);
	if (firstTicket == lastTicket && lastTicket == NULL)
	{
		firstTicket = lastTicket = newticket;
		firstTicket->next = NULL;
		lastTicket->next = NULL;
	}
	else
	{
		lastTicket->next = newticket;
		lastTicket = newticket;
		lastTicket->next = NULL;
	}
	printf("\n----DODANO----");
}



void display_persons()
{
	if (firstPerson == NULL)
	{

		printf(":Nema osoba na listi za prikazati\n");
	}
	else
	{
		for (ptrPerson = firstPerson; ptrPerson != NULL; ptrPerson = ptrPerson->next)
		{
			printf("%s\t", ptrPerson->name);
		}
	}
}

void display_tickets()
{
	if (firstTicket == NULL)
	{
		printf(":Nema karata na listi za prikazati\n");
	}
	else
	{
		for (ptrTicket = firstTicket; ptrTicket != NULL; ptrTicket = ptrTicket->next)
		{
			printf("%s\t", ptrTicket->number);
		}
	}
}
