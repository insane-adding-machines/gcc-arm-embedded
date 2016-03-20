
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_math_MPN__
#define __gnu_java_math_MPN__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace math
      {
          class MPN;
      }
    }
  }
}

class gnu::java::math::MPN : public ::java::lang::Object
{

public:
  MPN();
  static jint add_1(JArray< jint > *, JArray< jint > *, jint, jint);
  static jint add_n(JArray< jint > *, JArray< jint > *, JArray< jint > *, jint);
  static jint sub_n(JArray< jint > *, JArray< jint > *, JArray< jint > *, jint);
  static jint mul_1(JArray< jint > *, JArray< jint > *, jint, jint);
  static void mul(JArray< jint > *, JArray< jint > *, jint, JArray< jint > *, jint);
  static jlong udiv_qrnnd(jlong, jint);
  static jint divmod_1(JArray< jint > *, JArray< jint > *, jint, jint);
  static jint submul_1(JArray< jint > *, jint, JArray< jint > *, jint, jint);
  static void divide(JArray< jint > *, jint, JArray< jint > *, jint);
  static jint chars_per_word(jint);
  static jint count_leading_zeros(jint);
  static jint set_str(JArray< jint > *, JArray< jbyte > *, jint, jint);
  static jint cmp(JArray< jint > *, JArray< jint > *, jint);
  static jint cmp(JArray< jint > *, jint, JArray< jint > *, jint);
  static jint rshift(JArray< jint > *, JArray< jint > *, jint, jint, jint);
  static void rshift0(JArray< jint > *, JArray< jint > *, jint, jint, jint);
  static jlong rshift_long(JArray< jint > *, jint, jint);
  static jint lshift(JArray< jint > *, jint, JArray< jint > *, jint, jint);
  static jint findLowestBit(jint);
  static jint findLowestBit(JArray< jint > *);
  static jint gcd(JArray< jint > *, JArray< jint > *, jint);
  static jint intLength(jint);
  static jint intLength(JArray< jint > *, jint);
  static ::java::lang::Class class$;
};

#endif // __gnu_java_math_MPN__