 #include <assert.h>

int NONDET;

void main() {
  int i,k,n,l;

  tmpl("(le(n,i,k,l),le(n,i,k,l))");

  assume(l>0);

  for (k=1;k<n;k++){
    if(NONDET)
      for (i=l;i<n;i++)
	assert(1<=i);
    for (i=l;i<n;i++);
  }

 }
