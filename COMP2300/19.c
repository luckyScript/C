 #include<stdio.h>
#define SIZE 4
void show(int *pa[], int len) {
    int i;
    for (i=0;i<len;i++) printf("%d ", *pa[i]);
    printf("\n");
}
int main() {
  int array[] = {4,7,3,8};
  int *parray[SIZE];
  int i;
  for (i=0;i<SIZE;i++) parray[i] = &array[i];
  show(parray,SIZE);
  // add your code here
  show(parray,SIZE);
  return 0;
}