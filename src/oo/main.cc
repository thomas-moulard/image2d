#include "circulator.hh"
#include "image1d.hh"

template<typename Data>
void
assign(Image<Data>& ima, Data& val)
{
  Circulator<Data>* i = ima.create_circulator ();
  i->begin ();
  Circulator<Data>* end = ima.create_circulator ();
  end->end ();

  while (*i != *end)
    {
      ima[*i] = val;
      i++;
    }

  delete end;
  delete i;
}

int main ()
{
  int v = 2;

  Image1d<int> ima(5);
  assign (ima, v);
}
