
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_relaxng_datatype_helpers_DatatypeLibraryLoader__
#define __org_relaxng_datatype_helpers_DatatypeLibraryLoader__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace relaxng
    {
      namespace datatype
      {
          class DatatypeLibrary;
        namespace helpers
        {
            class DatatypeLibraryLoader;
            class DatatypeLibraryLoader$Service;
        }
      }
    }
  }
}

class org::relaxng::datatype::helpers::DatatypeLibraryLoader : public ::java::lang::Object
{

public:
  DatatypeLibraryLoader();
  virtual ::org::relaxng::datatype::DatatypeLibrary * createDatatypeLibrary(::java::lang::String *);
private:
  ::org::relaxng::datatype::helpers::DatatypeLibraryLoader$Service * __attribute__((aligned(__alignof__( ::java::lang::Object)))) service;
public:
  static ::java::lang::Class class$;
};

#endif // __org_relaxng_datatype_helpers_DatatypeLibraryLoader__