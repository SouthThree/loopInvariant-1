#include <stdio.h>
#include <assert.h>

int main(int argc, int argv[]) {
  int n, i, k;

  assume(n >= 0);
  k = n;
  i = 0;
  // invariant (k + i/2 == n && i <= n + 1)
  while( i < n ) {
    tmpl("(le(i,j,k,n),le(i,j,k,n))");
    k--;
    i = i + 2;
  }

  int j = 0;
  // invariant (j + k >= (n - 1)/2)
  while( j < n/2 ) {
    tmpl("(le(i,j,k,n),le(i,j,k,n))");
    assert(k > 0);
    k--;
    j++;
  }
  return 0;
}
