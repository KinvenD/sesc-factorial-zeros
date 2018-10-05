#include <stdio.h>
#include <math.h>

int main() {
  int z = 0; 
  int a = 5;
  int count = 0;
  scanf("%d", &z);
  while((z/a) >= 1){
    count += (z/a);
    a*=5;
  }
  printf("%d", count);
  return 0;
}
