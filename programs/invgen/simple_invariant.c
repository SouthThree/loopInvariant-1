#include <assert.h>

void main() {
  int x=0;
  int n;
  
  assume(n > 0 );
  // invariant (x <= n)
  while( x < n ){
    x++;
  }
  assert( x<=n );
}
