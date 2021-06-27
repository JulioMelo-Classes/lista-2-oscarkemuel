#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*!
 * @tparam Itr iterator para o range.
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 *
 */
template < typename Itr >
void reverse( Itr first, Itr last ){
  // iter_swap: Troca dois valores referenciados por um par de iteradores especificados.
  // [ 1, 2, 3, 4, 5, 6 ]
  // --last
  // [ > 1, 2, 3, 4, 5, 6 < ]
  // ++first
  // --last
  // [ 6, > 2, 3, 4, 5 <, 1 ]
  // ++first
  // --last
  // [ 6, 5, > 3, 4 < , 2, 1 ]
  // [ 6, 5, 4, 3, 2, 1 ]

  while (first != last && first != --last) {
    // std::cout << *first << " -> " << *last << endl;
    std::iter_swap (first,last);
    ++first;
  }
    // std::cout << endl;
};


}
#endif
