#include <stdio.h>
#include <stdlib.h>





int main() {
    unsigned char Btn_state = 0x00;
    unsigned char Btn1_state = 0;
    unsigned char Btn2_state = 0;
    unsigned char Btn3_state = 0;

  printf("enter state of lamp one ");
  scanf("%i", &Btn1_state);
  //***************************lamp one************
  if (Btn1_state == 1) {
    printf("lamp one is high \n");
    Btn_state = Btn_state | 0b00000001;
    printf("Btn_state is 0x%X \n", Btn_state);
  } else if (Btn1_state == 0) {
    printf("lamp one is low \n");
  } else {
    printf("invaild number \n");
  }
  //***************************lamp two************
  printf("enter state of lamp two ");
  scanf("%i", &Btn2_state);
  if (Btn2_state == 1) {
    printf("lamp two is high \n");
    Btn_state = Btn_state | 0b00000010;
    printf("Btn_state is 0x%X \n", Btn_state);
  } else if (Btn2_state == 0) {
    printf("lamp two is low \n");
  } else {
    printf("invaild number \n");
  }
  //***************************lamp three************
  printf("enter state of lamp three ");
  scanf("%i", &Btn3_state);
  if (Btn3_state == 1) {
    printf("lamp three is high \n");
    Btn_state = Btn_state | 0b00000100;
    printf("Btn_state is 0x%X \n", Btn_state);
  } else if (Btn3_state == 0) {
    printf("lamp three is low \n");
  } else {
    printf("invaild number \n");
  }

  return 0;
}
