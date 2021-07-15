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
 * @tparam Equal função que retorna objeto booleano;
 *
 * @param first Ponteiro para o primeiro elemento do range a ser considerado
 * @param last Ponteiro para a posição logo após o último elemento do range ser considerado
 * @param value O valor a ser comparado na função
 * @param eq Função para comparar os valores ao invés dos operadores usuais
 */
 /*
 ok, parecida com equal.
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq){
  // TODO
  for (InputIt i = first; i != last; ++i){
    if (eq(*first, value)){
      return first;
    }

    ++first;
  }

  return last;
}

}
#endif
