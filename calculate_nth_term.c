#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int, int, int, int);
int find_nth_term(int n1, int a1, int b1, int c1) {
    int x,d1,d2;
    d1=a1+b1+c1;
    d2=d1+c1+b1;
    x=d2;
    return x;


}


int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
