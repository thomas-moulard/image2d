#ifndef ITERATOR_HXX_
# define ITERATOR_HXX_

template <typename E, typename Data>
void
Iterator<E, Data>::operator++ ()
{
  this->exact()->impl_operatorpp ();
}

template <typename E, typename Data>
Data&
Iterator<E, Data>::operator* ()
{
  return this->exact()->impl_operatorstar ();
}

#endif /* !ITERATOR_HXX_ */
