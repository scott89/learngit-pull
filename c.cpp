#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  int num = 5;
  cout << "Input number of random values: " << endl;
  cin >> num;
  float x[num];

  srand(time(NULL));
  for(int i = 0; i<num; i++) {
    x[i]=random()*10.0/RAND_MAX;
  }
  for(int i=0; i<num-1; i++) {
    float minx = x[i];
    int minid = i;
    for(int j=i+1; j<num; j++) {
      if(x[j]<minx) {
	minx = x[j];
	minid = j;
      }
    }
    x[minid] = x[i];
    x[i] = minx;
  }

  for(int i = 0; i<num; i++)
    cout << i << "\t" << x[i] << endl;
  srand(10);
  //cout << random()*1.0/RAND_MAX;
  time_t a = time(NULL);
  for(int t = 0; t < 1000000000 ; t++) {
    cout << time(NULL) << endl;
  }
}


  

