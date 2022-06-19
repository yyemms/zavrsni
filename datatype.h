#pragma once
#define _CRT_SECURE_NO_WARNINGS
#ifndef DATATYPE_H
#define DATATYPE_H

struct person
{
	char name[50];
	struct person* next;
};

struct ticket
{
	char number[50];
	struct ticket* next;
};

struct person* create_person(char* ptrName);
struct ticket* create_ticket(char* tktNumber);
//	struct ticket* create_ticket(char* );

void insert_person();
void insert_ticket();
void display_persons();
void display_tickets();

struct person* newperson;
struct person* ptrPerson;
struct ticket* newticket;
struct ticket* ptrTicket;

struct person* firstPerson = NULL;
struct person* lastPerson = NULL;
struct ticket* firstTicket = NULL;
struct ticket* lastTicket = NULL;

struct person* create_person(char* ptrName);
struct ticket* create_ticket(char* tktNumber);

#endif
