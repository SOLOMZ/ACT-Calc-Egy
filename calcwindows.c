//BY SOLO (WINDOWS VERSION)
#include <stdio.h>
#include <windows.h>

int calca(int t[], int numb);
int sleept = 99999;
int calcats(int acvg); const int maxsat = 1600; const int maxact = 36; const int maxgpa = 40; int v;
double govuno(double sat1s, double sat2s, double gpas, double diff);
int main (void)
{

   int choice; int st=0;
   printf("Choose your test!\n 1: Non-Subject Test\n 2: Subject Test\n 3: Score to Tansiq\n : "); scanf_s("%d", &choice); switch(choice){ case 1 :
  printf("Enter your ACT 1 Math score: ");int act1[3]; scanf_s("%d", &act1[st]); st++;
  printf("Enter your ACT 1 English score: ");scanf_s("%d", &act1[st]); st++;
  printf("Enter your ACT 1 Reading score: ");scanf_s("%d", &act1[st]); st++; int act1avg; int sat1avg; act1avg = calca(act1,st); sat1avg=calcats(act1avg); st=0;
  printf("\nYour ACT 1 score is: %d and your ACT 1 score translated to SAT 1 is: %d\n\n", act1avg, sat1avg); Sleep(sleept); break;
  case 2 :
 printf("Enter your ACT 2 Math score: ");int act2[2]; scanf_s("%d", &act2[st]); st++;
  printf("Enter your ACT 2 Biology/Chemistry/Physics score: ");scanf_s("%d", &act2[st]); st++;
  int act2avg; int sat2avg; act2avg = calca(act2,st); sat2avg=calcats(act2avg); st=0;
  printf("\nYour ACT 2 score is: %d and your ACT 2 score translated to SAT 2 is: %d\n\n", act2avg, sat2avg); Sleep(sleept); break;
  case 3 :
                        printf("Enter your SAT 1 score: ");int SAT1; scanf_s("%d", &SAT1);
                        printf("Enter your SAT 2 score: ");int SAT2; scanf_s("%d", &SAT2);
                        printf("Enter your GPA: ");int gpa; scanf_s("%d", &gpa); const int maxgv = 124;
                        printf("\nThis score is for which university type?:\n 1: Government University\n 2: Private University\n : "); scanf_s("%d", &choice);
                        switch(choice){ case 1 : v = 69; break; case 2 : v = 75; break;}; if(SAT1 < 1090){v=60;};
                        printf("\nYour score is: %lf and the maximum is %d!\n\n", govuno(SAT1, SAT2, gpa, v), maxgv); Sleep(sleept); break;

  }
 return 0;
};
int calca(int t[],int numb){int i; int avg = 0; for(i=0;i<numb;i++){avg+=t[i];}; return avg/i;};
int calcats(int acvg){ /*int thrs=180*/;return acvg*(maxsat/maxact)/*+thrs*/;};
double govuno(double sat1s, double sat2s, double gpas, double diff){double sat1t; double sat2t; sat1t=(sat1s*diff)/maxsat; sat2t=(sat2s*15)/maxsat; return sat1t+sat2t+gpas;};





