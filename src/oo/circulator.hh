#ifndef CIRCULATOR_HH_
# define CIRCULATOR_HH_
# include "image.hh"

template<typename Data>
class Circulator
{
public:
  Circulator () {}

  virtual ~Circulator () {}

  virtual void begin () = 0;
  virtual void end () = 0;
  virtual void next () = 0;

  virtual bool operator== (Circulator<Data>& c) = 0;
  virtual bool operator!= (Circulator<Data>& c) = 0;
};

# include "circulator.hxx"
#endif /* !CIRCULATOR_HH_ */
