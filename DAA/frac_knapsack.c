#include <stdio.h>
#include <conio.h>

void display(float A[], int n, char *str)
{
  printf("%s{", str);
  for (int i = 0; i < n; i++)
  {
    printf("%f  ", A[i]);
  }
  printf("}\n");
}
void mysort(float *, float *, float *, int);

void main()
{
  float weight[5] = {20.0, 60.0, 10.0, 80.0, 100.0};
  float value[5] = {100.0, 400.0, 200.0, 800.0, 50.0};
  float k_capacity = 180.0, cur_w = 0.0, tmp, cur_v = 0.0, fr = 0.0;

  int i, j;
  float vwratio[5];
  for (i = 0; i < 5; i++)
  {
    vwratio[i] = value[i] / weight[i];
  }
  mysort(vwratio, weight, value, 5);
  display(weight, 5, "weight");
  display(value, 5, "value");
  display(vwratio, 5, "vwratio");
  printf("\n\nItem: \t\tFraction choosen\t\t Value\n");

  for (i = 0; i < 5; i++)
  {
    if (cur_w < k_capacity)
    {
      if (weight[i] <= k_capacity - cur_w)
      {

        cur_w = cur_w + weight[i];
        cur_v = cur_v + value[i];
        printf("\n\n%d\t\t%d/%d\t\t%f\n", i, 1, 1, value[i]);
      }
      else
      {
        fr = k_capacity - cur_w;
        cur_w = k_capacity;
        cur_v = cur_v + fr * vwratio[i];
        printf("\n\n%d\t\t%d/%d\t\t%f\n", i, (int)fr, (int)weight[i], fr * vwratio[i]);
      }
    }
  }
  // SHow
  printf("\n\n Total profit: %f", cur_v);
}

void mysort(float vwratio[], float weight[], float value[], int n)
{
  int i, j;
  float tmp;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (vwratio[j] < vwratio[j + 1])
      {
        tmp = vwratio[j];
        vwratio[j] = vwratio[j + 1];
        vwratio[j + 1] = tmp;
        tmp = value[j];
        value[j] = value[j + 1];
        value[j + 1] = tmp;
        tmp = weight[j];
        weight[j] = weight[j + 1];
        weight[j + 1] = tmp;
      }
    }
  }
}
