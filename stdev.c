#include <stdio.h>
#include <math.h>

int main()
{
  float nArray[50];
  int i, n;
  float mean, variance, standardDeviation, difference;
  float sum = 0, varsum = 0;

  printf("Please enter the amount of numbers\n");
  scanf("%d", &n);

  printf("Please enter %d numbers\n", n);
  for(i = 0; i < n; i++)
  {
    scanf("%f", &nArray[i]);
  }

  for(i = 0; i < n; i++)
  {
    sum = sum + nArray[i];
  }

  mean = sum / (float)n;

  for(i = 0; i < n; i++)
  {
    difference = nArray[i] - mean;

    varsum = varsum + pow(difference, 2);
  }

  variance = varsum / (float)n;
  standardDeviation = sqrt(variance);

  printf("Mean = %.2f\n", mean);
  printf("Standard Deviation = %.2f\n", standardDeviation);

  return 0;
}
