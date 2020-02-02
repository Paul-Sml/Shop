#include <stdio.h>
#include <string.h>

int main(void)
{
	int choixAction=1;
	char itemSlot1[10]="vide";
	char itemSlot2[10]="vide";
	char itemSlot3[10]="vide";
	int choixItem;
	while(choixAction==1 || choixAction==2){
		printf("\n1 : Achat\n2 : Verification d'inventaire\n3 : Sortir du magasin\n");
		scanf("%d", &choixAction);
		if (choixAction==1){
			printf("\n1 : Potion\n2 : Patate\n3 : Caillou\n4 : Ne rien acheter\n");
			scanf("%d", &choixItem);
			if (choixItem==1){
				if ((strcmp(itemSlot1, "vide"))==0){
					strcpy(itemSlot1, "Potion");
				}else{if ((strcmp(itemSlot2, "vide"))==0){
						strcpy(itemSlot2, "Potion");
					}else{if ((strcmp(itemSlot3, "vide"))==0){
							strcpy(itemSlot3, "Potion");
							}}	
					}
			}
			if (choixItem==2){
				if ((strcmp(itemSlot1, "vide"))==0){
					strcpy(itemSlot1, "Patate");
				}else{if ((strcmp(itemSlot2, "vide"))==0){
						strcpy(itemSlot2, "Patate");
					}else{if ((strcmp(itemSlot3, "vide"))==0){
							strcpy(itemSlot3, "Patate");
							}}	
					}
			}
			if (choixItem==3){
				if ((strcmp(itemSlot1, "vide"))==0){
					strcpy(itemSlot1, "Caillou");
				}else{if ((strcmp(itemSlot2, "vide"))==0){
						strcpy(itemSlot2, "Caillou");
					}else{if ((strcmp(itemSlot3, "vide"))==0){
							strcpy(itemSlot3, "Caillou");
							}}	
					}
			}
		}
		if (choixAction==2){
			printf("\nInventaire\n__________\n%s\n%s\n%s\n", itemSlot1, itemSlot2, itemSlot3);
		}
	}
	return 0;
}