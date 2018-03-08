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
#include "general.h"
#include "pack_animal.h"

struct Node {
  struct Node* next;
  PackAnimal data;
};

struct CaravanImplementation{
  struct Node* head;
  struct Node* tail;
  int length;
};

Caravan new_caravan()
{
  Caravan new_caravan = (Caravan)malloc(sizeof(struct CaravanImplementation));
  new_caravan->length = 0;
  new_caravan->head = 0;
  new_caravan->tail = 0;
  return new_caravan;
}

int get_length(Caravan caravan)
{
  return caravan->length;
}

void delete_caravan(Caravan caravan)
{
  struct Node* current = caravan->head;
  while (current != 0) {
    struct Node* to_delete = current;
    current = current->next;
    sfree(to_delete);
  }
  sfree(caravan);
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  if (animal == 0)
    return;

  Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = animal;
  new_node->next = 0;

  if (caravan->head == 0)
  {
    caravan->head = new_node;
    caravan->tail = new_node;
  } else {
    caravan->tail->next = new_node;
    caravan->tail = new_node;
  }
  add_to_caravan(animal, caravan);
  caravan->length++;
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
 if(caravan==0||animal==0||caravan->head==0)return;

 //char*nameinList=caravan->head.data->name;
 //char* name_to_delete=animal->name;

 if (caravan->head->data==animal)
 {
 //Idealfall,es ist gleich das erste Tier
   struct Node* to_delete=caravan->head;
     caravan->head= caravan->head->next;
     sfree(to_delete);
     caravan->length--;
     return;
 }
//Suche das Tier in der Liste
 struct Node* moving_node= caravan->head;
 /*while (moving_node->next->data != animal && moving_node->next != 0)//Suche in der Liste nach dem Tier
 {
   //Speicherzugriffsfehler  |
   //                       v
   /*moving_node = caravan->head->next;
   caravan->head->next = caravan->head->next;
   sfree(moving_node);
 }*/
 //Pürfen ob ich es gefunden habe
 if (moving_node->next->data == animal)//Gefunden in der Liste
 {
   struct Node* to_delete=moving_node->next;
   moving_node->next = moving_node->next->next;
   //movingNode = movingNode->next;
   sfree(to_delete);
   caravan->length--;
 }
}

int get_caravan_load(Caravan caravan)
{
  return 0;
}

void unload(Caravan caravan)
{
  struct Node* current = caravan->head;
   while (current->next != 0) {
    unload(current->data);
    current = current->next;
}
}

int get_caravan_speed(Caravan caravan)
{
  return 0;
}
void optimize_load(Caravan caravan)
{

}
