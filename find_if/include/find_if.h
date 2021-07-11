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
 * @tparam InputIt iterator para o range.
 * @tparam UnaryPredicate função que retorna objeto booleano;
 *
 * @param first Ponteiro para o primeiro elemento do range a ser considerado
 * @param last Ponteiro para a posição logo após o último elemento do range ser considerado
 * @param p Função para testar se um valor no range satisfaz o predicado p
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p){
  for (InputIt i = first; i != last; ++i){
    if (p(*first)){
      return first;
    }

    ++first;
  }

  return last;
}

}
#endif
