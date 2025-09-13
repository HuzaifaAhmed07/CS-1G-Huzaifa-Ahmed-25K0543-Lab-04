#include <stdio.h>
int main() {
int choice;
printf("Enter a pizza size\n");
scanf("%d", &choice);
if(choice==1){
	printf("Small");
}
else if(choice==2){
	printf("Medium");
}
else if(choice==3){
	printf("Large");
}
else{
	printf("Invalid Choice");
	
}
return 0;
}
