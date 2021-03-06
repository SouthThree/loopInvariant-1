int NONDET;

int main( int argc, char *argv[]){
  int n,l,r,i,j;

  //tmpl("(le(n,l,r,i,j),le(n,l,r,i,j),le(n,l,r,i,j))");
  tmpl("(le(n,l,r,i,j),le(n,l,r,i,j))");
  
  assume(1 <= n);
  l = n/2 + 1;
  r = n;
  if(l>1) {
    l--;
  } else {
    r--;
  }
  // invariant (r <= n)
  while(r > 1) {
    i = l;
    j = 2*l;
    while(j <= r) {
      if( j < r) {
	if( NONDET )
	  j = j + 1;
      }
      if( NONDET ) { 
      	break;
      }
      i = j;
      j = 2*j;
    }
    if(l > 1) {
      l--;
    } else {
      assert(r <= n);
      r--;
    }
  }
  return 0;
}

