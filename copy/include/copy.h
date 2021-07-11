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
 *
 * @param first Ponteiro para o primeiro elemento do range a ser considerado
 * @param last Ponteiro para a posição logo após o último elemento do range ser considerado
 * @param d_first O inicio do range onde os elementos devem ser copiados.
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first){
    // TODO
    InputIt d_last = d_first;

    while(true){
      // std::cout << *first << " -> " << *last << " " << *d_first << endl;
      if(first != last){
        *d_last = *first;

        ++d_last;
        ++first;
      }else {
        break;
      }
    }

    return d_last;
}

}
#endif
