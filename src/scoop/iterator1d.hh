#ifndef ITERATOR1D_HH_
# define ITERATOR1D_HH_
# include "iterator.hh"

template<typename E, typename Data>
class Iterator1d : public Iterator<Iterator1d<E, Data>, Data>
{
public:
  typedef vtype(E, image)::vtype(E, value) dimage_t;

  Iterator1d ();
  ~Iterator1d ();

  void impl_operatorpp ();
  dimage_t& impl_operatorstar ();

  unsigned pos_get const () { return this->pos; }
private:
  dimage_t& ima_;
  unsigned pos_;
};

template<typename E, typename Data>
struct traits <Iterator1d<E, Data> >
{
  typedef Image1d<E, Data> image_vt;
};

# include "iterator1d.hxx"
#endif /* !ITERATOR1D_HH_ */
