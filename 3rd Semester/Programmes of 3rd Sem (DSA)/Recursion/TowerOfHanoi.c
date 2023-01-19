#include<stdio.h>
#include<stdlib.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char beg, char end, char aux_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", beg, end);
        return;
    }
    towerOfHanoi(n-1, beg, aux_rod, end);
    printf("\n Move disk %d from rod %c to rod %c", n, beg, end);
    towerOfHanoi(n-1, aux_rod, end, beg);
}
  
int main()
{
    int n = 4; // Number of disks
    
	towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}
