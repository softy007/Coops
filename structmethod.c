#include<stdio.h>
void (*funcPtr)();
void show()
{
printf("Demoi \n");
}
void main()
{
funcPtr = show;
funcPtr();

}
