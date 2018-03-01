/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include"caravan.h"
#include"stdio.h"
#include "stdlib.h"

struct Node {
struct Node* next;
PackAnimal data;
};
struct CaravanImplementation{
  struct Node head;
  struct Node tail;
};
Caravan new_caravan()
{
 Caravan new_caravan = (struct CaravanImplementation*)malloc(sizeof(struct CaravanImplementation));
 free(new_caravan);
 return new_caravan;
}

int get_length(Caravan caravan)
{
  return 1;
}

void delete_caravan(Caravan caravan)
{
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{

}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
}

int get_caravan_load(Caravan caravan)
{
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
}
void optimize_load(Caravan caravan)
{

}
