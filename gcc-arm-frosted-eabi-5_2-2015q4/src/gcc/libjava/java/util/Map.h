
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_Map__
#define __java_util_Map__

#pragma interface

#include <java/lang/Object.h>

class java::util::Map : public ::java::lang::Object
{

public:
  virtual void clear() = 0;
  virtual jboolean containsKey(::java::lang::Object *) = 0;
  virtual jboolean containsValue(::java::lang::Object *) = 0;
  virtual ::java::util::Set * entrySet() = 0;
  virtual jboolean equals(::java::lang::Object *) = 0;
  virtual ::java::lang::Object * get(::java::lang::Object *) = 0;
  virtual ::java::lang::Object * put(::java::lang::Object *, ::java::lang::Object *) = 0;
  virtual jint hashCode() = 0;
  virtual jboolean isEmpty() = 0;
  virtual ::java::util::Set * keySet() = 0;
  virtual void putAll(::java::util::Map *) = 0;
  virtual ::java::lang::Object * remove(::java::lang::Object *) = 0;
  virtual jint size() = 0;
  virtual ::java::util::Collection * values() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_util_Map__