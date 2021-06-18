/* Enter your solutions in this file */
#include <stdio.h>

int max(int a[], int b) {
  int c = a[0];
    for (int i=1; i < b;i++) {
      if (a[i] > c) {
        c = a[i];
      }
    }
    return c;
  }

int min(int a[], int b) {
    int c = a[0];
    for (int i=1; i< b; i++) {
        if (a[i] < c) {
            c = a[i];
        }
    }
    return c;
}

float average(int a[], int b) {
  int s = 0;
  float ave = 0;
  for (int i=0; i < b ; i++) {
    s += a[i];
  }
  ave = s/b;
  return ave;
}

int mode(int a[], int b) {
  int maxcount = 0;
  int maxnum = 0;
  for (int i = 0; i < b; i++) {
    int count = 0;
    for (int j = 0; j < b; j++) {
      if (a[i]== a[j]) {
        count += 1;
      }
    }
    if (count > maxcount) {
      maxcount = count;
      maxnum = a[i];
    }
  }
  return maxnum;
}

int factors(int a, int b[]){
  int j = 0,c = 0;
  for (int i=2; i <= a ; i++) {
    while (a%i == 0) {
      b[j] = i;
      a /= i;
      j++;
      c++;
      }
  }
  return c;
}
