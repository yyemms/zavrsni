#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include "funkcije.h"
#include "datatype.h"
#include "funkcije.c"


/*
 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funkcije.h"
 */

int main()
{
	int ch;
	char ans = 'Y';

	while (ans == 'Y' || ans == 'y')
	{
		printf("\n---------------------------------\n");
		printf("\nUredivanje karata i reda cekanja\n");
		printf("\n---------------------------------\n");
		printf("\n1. Dodaj osobu u red čekanja");
		printf("\n2. Dodaj kartu");
		printf("\n3.Popis osoba u redu čekanja:");
		printf("\n4.Popis svih karata");
		printf("\n5.Exit\n");
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\nUnesite broj radnje koju zelite izvrsiti : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			printf("\n...Dodavanje osobe u red čekanja...\n");
			insert_person();
			break;

		case 2:
			printf("\n...Dodavanje karte...\n");
			insert_ticket();
			break;
		case 3:
			printf("\n...Prikazivanje osoba u redu cekanja od pocetka do kraja : \n");
			display_persons();
			break;
		case 4:
			printf("\n...Prikazivanje karata od pocetka do kraja :\n");
			display_tickets();
			break;

		case 5:
			printf("\n...Izlaz...\n");
			return 0;
			break;
		default:
			printf("\n...Nepostojeci odabir...\n");
			break;
		}
		printf("\n\n Zelite li nastaviti(Y/N)");
		scanf(" %c", &ans);
	}
	return 0;
}


