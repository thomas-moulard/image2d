#include "image1d.hh"

template<typename I>
void
assign (I& ima, typename I::data& val)
{
  typename I::circulator* i = ima.create_circulator ();
  typename I::circulator* end = ima.create_circulator ();

  while (*i != *end)
    {
      ima[*i] = val;
      ++i;
    }

  delete end;
  delete i;
}

int
main ()
{
  int v = 2;

  Image1d<int> ima (3);
  assign (ima, v);
}
