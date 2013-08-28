#ifndef ITERATOR1D_HXX_
# define ITERATOR1D_HXX_

template<typename E, typename Data>
Iterator1d<E, Data>::Iterator1d (Image1d<Data>& ima) :
  ima_ (ima),
  pos_ (0)
{
}

template<typename E, typename Data>
Iterator1d<E, Data>::~Iterator1d ()
{
}

template<typename E, typename Data>
void
Iterator1d<E, Data>::impl_operatorpp ()
{
  ++this->pos_;
}

template<typename E, typename Data>
Data&
Iterator1d<E, Data>::impl_operatorstar ()
{
  return this->ima_.d_[this->pos_];
}

#endif /* !ITERATOR1D_HXX_ */
