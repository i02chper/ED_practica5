/**
 * @file hash_table_imp.hpp
 *
 * CopyRight F. J. Madrid-Cuevas <fjmadrid@uco.es>
 *
 * Sólo se permite el uso de este código en la docencia de las asignaturas sobre
 * Estructuras de Datos de la Universidad de Córdoba.
 *
 * Está prohibido su uso para cualquier otro objetivo.
 */

#pragma once
#include <cassert>

#include "hash_table.hpp"


template<class K, class V, class KeyToInt>
HashTable<K, V, KeyToInt>::HashTable(size_t m,
                                           typename KeyToInt::Ref key_to_int,
                                           OACollisionResolution::Ref hash)
{
    assert(m == hash->m());
    //TODO

    //
    assert(!is_valid());
    assert(size()==m);
}

template<class K, class V, class KeyToInt>
typename HashTable<K, V, KeyToInt>::Ref
HashTable<K, V, KeyToInt>::create(size_t m,
                                        typename KeyToInt::Ref key_to_int,
                                        OACollisionResolution::Ref hash)
{
    return std::make_shared<HashTable<K, V, KeyToInt>>(m, key_to_int,
                                                            hash);
}

template<class K, class V, class KeyToInt>
size_t
HashTable<K, V, KeyToInt>::size() const
{
    size_t ret_v = 0;
    //TODO

    //
    return ret_v;
}

template<class K, class V, class KeyToInt>
float
HashTable<K, V, KeyToInt>::load_factor() const
{
    float ret_v = 0.0f;
    //TODO

    //
    return ret_v;
}


template<class K, class V, class KeyToInt>
bool
HashTable<K, V, KeyToInt>::has(K const& k) const
{
    bool ret_v = false;
    //TODO
    // Hint: use the find method but save/restore the state.
    
    
    //
    return ret_v;
}

template<class K, class V, class KeyToInt>
bool
HashTable<K, V, KeyToInt>::is_valid() const
{
    bool ret_v = false;
    //TODO
    // Remember: check curr_ is in the table range and the table entry is valid.

    //
    return ret_v;
}


template<class K, class V, class KeyToInt>
K
HashTable<K, V, KeyToInt>::get_key() const
{
    assert(is_valid());
    K ret_v;
    //TODO

    //
    return ret_v;
}

template<class K, class V, class KeyToInt>
V
HashTable<K, V, KeyToInt>::get_value() const
{
    assert(is_valid());
    V ret_v = V();
    //TODO

    //
    return ret_v;
}

template<class K, class V, class KeyToInt>
bool
HashTable<K, V, KeyToInt>::find(K const& k)
{
    assert(load_factor()<1.0f);
    bool is_found=false;
    //TODO

    //
    assert(!is_valid() || get_key()==k);
    return is_found;
}

template<class K, class V, class KeyToInt>
void
HashTable<K, V, KeyToInt>::insert(K const& k, V const& v)
{
    assert(load_factor()<1.0f);

    //TODO
    //locate the key.

    //
    assert(load_factor()<1.0f);
    assert(is_valid());
    assert(get_key()==k);
    assert(get_value()==v);
}

template<class K, class V, class KeyToInt>
void
HashTable<K, V, KeyToInt>::remove()
{
#ifndef NDEBUG
    assert(is_valid());    
    K old_k = get_key();
#endif
    //TODO
    //Remember: we are using a mark to sign "deleted".


    //
    assert(!is_valid());
    assert(!has(old_k));
}

template<class K, class V, class KeyToInt>
void
HashTable<K, V, KeyToInt>::set_value(const V& v)
{
    assert(is_valid());
    //TODO

    //
    assert(get_value()==v);
}

template<class K, class V, class KeyToInt>
void
HashTable<K, V, KeyToInt>::rehash()
{
    assert(is_valid()); //We assume to be call after inserting.
    auto old_curr_key = get_key();
    //TODO
    //Remember: you must restore the cursor to point at the same <key,value>.
    //Remember: rehash when load_factor > 0.5
    //Remember: we use a 2 factor to grown the current size.
    //Remember: a new hash function will be picked at from the Universal Family.
    //Hint: use the assign operator = to switch the new table with "this".

    //
    assert(load_factor()<=0.5);
    assert(is_valid() && get_key()==old_curr_key);
}

template<class K, class V, class KeyToInt>
void
HashTable<K, V, KeyToInt>::goto_begin()
{
    //TODO
    //Remember: move cursor to the first (from position 0) valid entry
    //         if there is.

    //
}

template<class K, class V, class KeyToInt>
void
HashTable<K, V, KeyToInt>::goto_next()
{
    assert(is_valid());
    //TODO
    //Remember: move cursor to the next valid position if there is.

    //
}
