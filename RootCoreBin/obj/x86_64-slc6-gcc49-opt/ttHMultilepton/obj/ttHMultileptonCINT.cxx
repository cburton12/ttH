#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#ifdef __llvm__
#pragma GCC diagnostic ignored "-Wunused-private-field"
#endif
// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIcodedIcburtondImultileptondIRootCoreBindIobjdIx86_64mIslc6mIgcc49mIoptdIttHMultileptondIobjdIttHMultileptonCINT

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "ttHMultilepton/ttHMultileptonObjectLoader.h"
#include "ttHMultilepton/ttHMultileptonLooseObjectLoader.h"
#include "ttHMultilepton/ttHMultileptonLoader.h"
#include "ttHMultilepton/ttHMultileptonEventSaver.h"
#include "ttHMultilepton/ttHMultileptonLooseEventSaver.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ttHMultileptonObjectLoader(void *p = 0);
   static void *newArray_ttHMultileptonObjectLoader(Long_t size, void *p);
   static void delete_ttHMultileptonObjectLoader(void *p);
   static void deleteArray_ttHMultileptonObjectLoader(void *p);
   static void destruct_ttHMultileptonObjectLoader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ttHMultileptonObjectLoader*)
   {
      ::ttHMultileptonObjectLoader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ttHMultileptonObjectLoader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ttHMultileptonObjectLoader", ::ttHMultileptonObjectLoader::Class_Version(), "ttHMultilepton/ttHMultileptonObjectLoader.h", 7,
                  typeid(::ttHMultileptonObjectLoader), DefineBehavior(ptr, ptr),
                  &::ttHMultileptonObjectLoader::Dictionary, isa_proxy, 4,
                  sizeof(::ttHMultileptonObjectLoader) );
      instance.SetNew(&new_ttHMultileptonObjectLoader);
      instance.SetNewArray(&newArray_ttHMultileptonObjectLoader);
      instance.SetDelete(&delete_ttHMultileptonObjectLoader);
      instance.SetDeleteArray(&deleteArray_ttHMultileptonObjectLoader);
      instance.SetDestructor(&destruct_ttHMultileptonObjectLoader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ttHMultileptonObjectLoader*)
   {
      return GenerateInitInstanceLocal((::ttHMultileptonObjectLoader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ttHMultileptonObjectLoader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ttHMultileptonLooseObjectLoader(void *p = 0);
   static void *newArray_ttHMultileptonLooseObjectLoader(Long_t size, void *p);
   static void delete_ttHMultileptonLooseObjectLoader(void *p);
   static void deleteArray_ttHMultileptonLooseObjectLoader(void *p);
   static void destruct_ttHMultileptonLooseObjectLoader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ttHMultileptonLooseObjectLoader*)
   {
      ::ttHMultileptonLooseObjectLoader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ttHMultileptonLooseObjectLoader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ttHMultileptonLooseObjectLoader", ::ttHMultileptonLooseObjectLoader::Class_Version(), "ttHMultilepton/ttHMultileptonLooseObjectLoader.h", 7,
                  typeid(::ttHMultileptonLooseObjectLoader), DefineBehavior(ptr, ptr),
                  &::ttHMultileptonLooseObjectLoader::Dictionary, isa_proxy, 4,
                  sizeof(::ttHMultileptonLooseObjectLoader) );
      instance.SetNew(&new_ttHMultileptonLooseObjectLoader);
      instance.SetNewArray(&newArray_ttHMultileptonLooseObjectLoader);
      instance.SetDelete(&delete_ttHMultileptonLooseObjectLoader);
      instance.SetDeleteArray(&deleteArray_ttHMultileptonLooseObjectLoader);
      instance.SetDestructor(&destruct_ttHMultileptonLooseObjectLoader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ttHMultileptonLooseObjectLoader*)
   {
      return GenerateInitInstanceLocal((::ttHMultileptonLooseObjectLoader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ttHMultileptonLooseObjectLoader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ttHMultileptonLoader(void *p = 0);
   static void *newArray_ttHMultileptonLoader(Long_t size, void *p);
   static void delete_ttHMultileptonLoader(void *p);
   static void deleteArray_ttHMultileptonLoader(void *p);
   static void destruct_ttHMultileptonLoader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ttHMultileptonLoader*)
   {
      ::ttHMultileptonLoader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ttHMultileptonLoader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ttHMultileptonLoader", ::ttHMultileptonLoader::Class_Version(), "ttHMultilepton/ttHMultileptonLoader.h", 10,
                  typeid(::ttHMultileptonLoader), DefineBehavior(ptr, ptr),
                  &::ttHMultileptonLoader::Dictionary, isa_proxy, 4,
                  sizeof(::ttHMultileptonLoader) );
      instance.SetNew(&new_ttHMultileptonLoader);
      instance.SetNewArray(&newArray_ttHMultileptonLoader);
      instance.SetDelete(&delete_ttHMultileptonLoader);
      instance.SetDeleteArray(&deleteArray_ttHMultileptonLoader);
      instance.SetDestructor(&destruct_ttHMultileptonLoader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ttHMultileptonLoader*)
   {
      return GenerateInitInstanceLocal((::ttHMultileptonLoader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ttHMultileptonLoader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ttHMultileptonEventSaver(void *p = 0);
   static void *newArray_ttHMultileptonEventSaver(Long_t size, void *p);
   static void delete_ttHMultileptonEventSaver(void *p);
   static void deleteArray_ttHMultileptonEventSaver(void *p);
   static void destruct_ttHMultileptonEventSaver(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ttHMultileptonEventSaver*)
   {
      ::ttHMultileptonEventSaver *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ttHMultileptonEventSaver >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ttHMultileptonEventSaver", ::ttHMultileptonEventSaver::Class_Version(), "ttHMultilepton/ttHMultileptonEventSaver.h", 6,
                  typeid(::ttHMultileptonEventSaver), DefineBehavior(ptr, ptr),
                  &::ttHMultileptonEventSaver::Dictionary, isa_proxy, 4,
                  sizeof(::ttHMultileptonEventSaver) );
      instance.SetNew(&new_ttHMultileptonEventSaver);
      instance.SetNewArray(&newArray_ttHMultileptonEventSaver);
      instance.SetDelete(&delete_ttHMultileptonEventSaver);
      instance.SetDeleteArray(&deleteArray_ttHMultileptonEventSaver);
      instance.SetDestructor(&destruct_ttHMultileptonEventSaver);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ttHMultileptonEventSaver*)
   {
      return GenerateInitInstanceLocal((::ttHMultileptonEventSaver*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ttHMultileptonEventSaver*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ttHMultileptonLooseEventSaver(void *p = 0);
   static void *newArray_ttHMultileptonLooseEventSaver(Long_t size, void *p);
   static void delete_ttHMultileptonLooseEventSaver(void *p);
   static void deleteArray_ttHMultileptonLooseEventSaver(void *p);
   static void destruct_ttHMultileptonLooseEventSaver(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ttHMultileptonLooseEventSaver*)
   {
      ::ttHMultileptonLooseEventSaver *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ttHMultileptonLooseEventSaver >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ttHMultileptonLooseEventSaver", ::ttHMultileptonLooseEventSaver::Class_Version(), "ttHMultilepton/ttHMultileptonLooseEventSaver.h", 52,
                  typeid(::ttHMultileptonLooseEventSaver), DefineBehavior(ptr, ptr),
                  &::ttHMultileptonLooseEventSaver::Dictionary, isa_proxy, 4,
                  sizeof(::ttHMultileptonLooseEventSaver) );
      instance.SetNew(&new_ttHMultileptonLooseEventSaver);
      instance.SetNewArray(&newArray_ttHMultileptonLooseEventSaver);
      instance.SetDelete(&delete_ttHMultileptonLooseEventSaver);
      instance.SetDeleteArray(&deleteArray_ttHMultileptonLooseEventSaver);
      instance.SetDestructor(&destruct_ttHMultileptonLooseEventSaver);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ttHMultileptonLooseEventSaver*)
   {
      return GenerateInitInstanceLocal((::ttHMultileptonLooseEventSaver*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ttHMultileptonLooseEventSaver*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ttHMultileptonObjectLoader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ttHMultileptonObjectLoader::Class_Name()
{
   return "ttHMultileptonObjectLoader";
}

//______________________________________________________________________________
const char *ttHMultileptonObjectLoader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonObjectLoader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ttHMultileptonObjectLoader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonObjectLoader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ttHMultileptonObjectLoader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonObjectLoader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ttHMultileptonObjectLoader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonObjectLoader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ttHMultileptonLooseObjectLoader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ttHMultileptonLooseObjectLoader::Class_Name()
{
   return "ttHMultileptonLooseObjectLoader";
}

//______________________________________________________________________________
const char *ttHMultileptonLooseObjectLoader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonLooseObjectLoader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ttHMultileptonLooseObjectLoader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonLooseObjectLoader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ttHMultileptonLooseObjectLoader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonLooseObjectLoader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ttHMultileptonLooseObjectLoader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonLooseObjectLoader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ttHMultileptonLoader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ttHMultileptonLoader::Class_Name()
{
   return "ttHMultileptonLoader";
}

//______________________________________________________________________________
const char *ttHMultileptonLoader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonLoader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ttHMultileptonLoader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonLoader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ttHMultileptonLoader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonLoader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ttHMultileptonLoader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonLoader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ttHMultileptonEventSaver::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ttHMultileptonEventSaver::Class_Name()
{
   return "ttHMultileptonEventSaver";
}

//______________________________________________________________________________
const char *ttHMultileptonEventSaver::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonEventSaver*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ttHMultileptonEventSaver::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonEventSaver*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ttHMultileptonEventSaver::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonEventSaver*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ttHMultileptonEventSaver::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonEventSaver*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ttHMultileptonLooseEventSaver::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ttHMultileptonLooseEventSaver::Class_Name()
{
   return "ttHMultileptonLooseEventSaver";
}

//______________________________________________________________________________
const char *ttHMultileptonLooseEventSaver::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonLooseEventSaver*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ttHMultileptonLooseEventSaver::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonLooseEventSaver*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ttHMultileptonLooseEventSaver::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonLooseEventSaver*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ttHMultileptonLooseEventSaver::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ttHMultileptonLooseEventSaver*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ttHMultileptonObjectLoader::Streamer(TBuffer &R__b)
{
   // Stream an object of class ttHMultileptonObjectLoader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ttHMultileptonObjectLoader::Class(),this);
   } else {
      R__b.WriteClassBuffer(ttHMultileptonObjectLoader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ttHMultileptonObjectLoader(void *p) {
      return  p ? new(p) ::ttHMultileptonObjectLoader : new ::ttHMultileptonObjectLoader;
   }
   static void *newArray_ttHMultileptonObjectLoader(Long_t nElements, void *p) {
      return p ? new(p) ::ttHMultileptonObjectLoader[nElements] : new ::ttHMultileptonObjectLoader[nElements];
   }
   // Wrapper around operator delete
   static void delete_ttHMultileptonObjectLoader(void *p) {
      delete ((::ttHMultileptonObjectLoader*)p);
   }
   static void deleteArray_ttHMultileptonObjectLoader(void *p) {
      delete [] ((::ttHMultileptonObjectLoader*)p);
   }
   static void destruct_ttHMultileptonObjectLoader(void *p) {
      typedef ::ttHMultileptonObjectLoader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ttHMultileptonObjectLoader

//______________________________________________________________________________
void ttHMultileptonLooseObjectLoader::Streamer(TBuffer &R__b)
{
   // Stream an object of class ttHMultileptonLooseObjectLoader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ttHMultileptonLooseObjectLoader::Class(),this);
   } else {
      R__b.WriteClassBuffer(ttHMultileptonLooseObjectLoader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ttHMultileptonLooseObjectLoader(void *p) {
      return  p ? new(p) ::ttHMultileptonLooseObjectLoader : new ::ttHMultileptonLooseObjectLoader;
   }
   static void *newArray_ttHMultileptonLooseObjectLoader(Long_t nElements, void *p) {
      return p ? new(p) ::ttHMultileptonLooseObjectLoader[nElements] : new ::ttHMultileptonLooseObjectLoader[nElements];
   }
   // Wrapper around operator delete
   static void delete_ttHMultileptonLooseObjectLoader(void *p) {
      delete ((::ttHMultileptonLooseObjectLoader*)p);
   }
   static void deleteArray_ttHMultileptonLooseObjectLoader(void *p) {
      delete [] ((::ttHMultileptonLooseObjectLoader*)p);
   }
   static void destruct_ttHMultileptonLooseObjectLoader(void *p) {
      typedef ::ttHMultileptonLooseObjectLoader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ttHMultileptonLooseObjectLoader

//______________________________________________________________________________
void ttHMultileptonLoader::Streamer(TBuffer &R__b)
{
   // Stream an object of class ttHMultileptonLoader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ttHMultileptonLoader::Class(),this);
   } else {
      R__b.WriteClassBuffer(ttHMultileptonLoader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ttHMultileptonLoader(void *p) {
      return  p ? new(p) ::ttHMultileptonLoader : new ::ttHMultileptonLoader;
   }
   static void *newArray_ttHMultileptonLoader(Long_t nElements, void *p) {
      return p ? new(p) ::ttHMultileptonLoader[nElements] : new ::ttHMultileptonLoader[nElements];
   }
   // Wrapper around operator delete
   static void delete_ttHMultileptonLoader(void *p) {
      delete ((::ttHMultileptonLoader*)p);
   }
   static void deleteArray_ttHMultileptonLoader(void *p) {
      delete [] ((::ttHMultileptonLoader*)p);
   }
   static void destruct_ttHMultileptonLoader(void *p) {
      typedef ::ttHMultileptonLoader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ttHMultileptonLoader

//______________________________________________________________________________
void ttHMultileptonEventSaver::Streamer(TBuffer &R__b)
{
   // Stream an object of class ttHMultileptonEventSaver.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ttHMultileptonEventSaver::Class(),this);
   } else {
      R__b.WriteClassBuffer(ttHMultileptonEventSaver::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ttHMultileptonEventSaver(void *p) {
      return  p ? new(p) ::ttHMultileptonEventSaver : new ::ttHMultileptonEventSaver;
   }
   static void *newArray_ttHMultileptonEventSaver(Long_t nElements, void *p) {
      return p ? new(p) ::ttHMultileptonEventSaver[nElements] : new ::ttHMultileptonEventSaver[nElements];
   }
   // Wrapper around operator delete
   static void delete_ttHMultileptonEventSaver(void *p) {
      delete ((::ttHMultileptonEventSaver*)p);
   }
   static void deleteArray_ttHMultileptonEventSaver(void *p) {
      delete [] ((::ttHMultileptonEventSaver*)p);
   }
   static void destruct_ttHMultileptonEventSaver(void *p) {
      typedef ::ttHMultileptonEventSaver current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ttHMultileptonEventSaver

//______________________________________________________________________________
void ttHMultileptonLooseEventSaver::Streamer(TBuffer &R__b)
{
   // Stream an object of class ttHMultileptonLooseEventSaver.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ttHMultileptonLooseEventSaver::Class(),this);
   } else {
      R__b.WriteClassBuffer(ttHMultileptonLooseEventSaver::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ttHMultileptonLooseEventSaver(void *p) {
      return  p ? new(p) ::ttHMultileptonLooseEventSaver : new ::ttHMultileptonLooseEventSaver;
   }
   static void *newArray_ttHMultileptonLooseEventSaver(Long_t nElements, void *p) {
      return p ? new(p) ::ttHMultileptonLooseEventSaver[nElements] : new ::ttHMultileptonLooseEventSaver[nElements];
   }
   // Wrapper around operator delete
   static void delete_ttHMultileptonLooseEventSaver(void *p) {
      delete ((::ttHMultileptonLooseEventSaver*)p);
   }
   static void deleteArray_ttHMultileptonLooseEventSaver(void *p) {
      delete [] ((::ttHMultileptonLooseEventSaver*)p);
   }
   static void destruct_ttHMultileptonLooseEventSaver(void *p) {
      typedef ::ttHMultileptonLooseEventSaver current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ttHMultileptonLooseEventSaver

namespace {
  void TriggerDictionaryInitialization_ttHMultileptonCINT_Impl() {
    static const char* headers[] = {
"ttHMultilepton/ttHMultileptonObjectLoader.h",
"ttHMultilepton/ttHMultileptonLooseObjectLoader.h",
"ttHMultilepton/ttHMultileptonLoader.h",
"ttHMultilepton/ttHMultileptonEventSaver.h",
"ttHMultilepton/ttHMultileptonLooseEventSaver.h",
0
    };
    static const char* includePaths[] = {
"/code/cburton/multilepton/ttHMultilepton/Root",
"/code/cburton/multilepton/ttHMultilepton",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.04.16-x86_64-slc6-gcc49-opt/include",
"/code/cburton/multilepton/RootCoreBin/include",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.04.16-x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.04.16-x86_64-slc6-gcc49-opt/include",
"/code/cburton/multilepton/ttHMultilepton/cmt/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$/code/cburton/multilepton/ttHMultilepton/Root/LinkDef.h")))  ttHMultileptonObjectLoader;
class __attribute__((annotate("$clingAutoload$/code/cburton/multilepton/ttHMultilepton/Root/LinkDef.h")))  ttHMultileptonLooseObjectLoader;
class __attribute__((annotate("$clingAutoload$/code/cburton/multilepton/ttHMultilepton/Root/LinkDef.h")))  ttHMultileptonLoader;
class __attribute__((annotate("$clingAutoload$/code/cburton/multilepton/ttHMultilepton/Root/LinkDef.h")))  ttHMultileptonEventSaver;
class __attribute__((annotate("$clingAutoload$/code/cburton/multilepton/ttHMultilepton/Root/LinkDef.h")))  ttHMultileptonLooseEventSaver;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef ROOTCORE
  #define ROOTCORE 1
#endif
#ifndef ROOTCORE_RELEASE_SERIES
  #define ROOTCORE_RELEASE_SERIES 24
#endif
#ifndef ROOTCORE_TEST_FILE
  #define ROOTCORE_TEST_FILE "/afs/cern.ch/user/a/asgbase/patspace/xAODs/r7725/mc15_13TeV.410000.PowhegPythiaEvtGen_P2012_ttbar_hdamp172p5_nonallhad.merge.AOD.e3698_s2608_s2183_r7725_r7676/AOD.07915862._000100.pool.root.1"
#endif
#ifndef ROOTCORE_TEST_DATA
  #define ROOTCORE_TEST_DATA "/afs/cern.ch/user/a/asgbase/patspace/xAODs/r7725"
#endif
#ifndef ASG_TEST_FILE_DATA
  #define ASG_TEST_FILE_DATA "/afs/cern.ch/user/a/asgbase/patspace/xAODs/r7562/data15_13TeV.00284154.physics_Main.merge.AOD.r7562_p2521/AOD.07687819._000382.pool.root.1"
#endif
#ifndef ASG_TEST_FILE_MC
  #define ASG_TEST_FILE_MC "/afs/cern.ch/user/a/asgbase/patspace/xAODs/r7725/mc15_13TeV.410000.PowhegPythiaEvtGen_P2012_ttbar_hdamp172p5_nonallhad.merge.AOD.e3698_s2608_s2183_r7725_r7676/AOD.07915862._000100.pool.root.1"
#endif
#ifndef ASG_TEST_FILE_MCAFII
  #define ASG_TEST_FILE_MCAFII ""
#endif
#ifndef XAOD_STANDALONE
  #define XAOD_STANDALONE 1
#endif
#ifndef XAOD_ANALYSIS
  #define XAOD_ANALYSIS 1
#endif
#ifndef ASGTOOL_STANDALONE
  #define ASGTOOL_STANDALONE 1
#endif
#ifndef ASGTOOL_STANDALONE
  #define ASGTOOL_STANDALONE 1
#endif
#ifndef ROOTCORE_PACKAGE
  #define ROOTCORE_PACKAGE "ttHMultilepton"
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "ttHMultilepton/ttHMultileptonObjectLoader.h"
#include "ttHMultilepton/ttHMultileptonLooseObjectLoader.h"
#include "ttHMultilepton/ttHMultileptonLoader.h"
#include "ttHMultilepton/ttHMultileptonEventSaver.h"
#include "ttHMultilepton/ttHMultileptonLooseEventSaver.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ttHMultileptonEventSaver", payloadCode, "@",
"ttHMultileptonLoader", payloadCode, "@",
"ttHMultileptonLooseEventSaver", payloadCode, "@",
"ttHMultileptonLooseObjectLoader", payloadCode, "@",
"ttHMultileptonObjectLoader", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ttHMultileptonCINT",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ttHMultileptonCINT_Impl, {{"namespace DataVector_detail { template <typename B1, typename B2, typename B3> class VirtBases; }", 1},{"template <typename T> class DataVectorBase;", 1},{"template <typename T, typename BASE> class DataVector;", 1},{"namespace DataVector_detail { template <typename T> class DVLEltBaseInit; }", 1}}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ttHMultileptonCINT_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ttHMultileptonCINT() {
  TriggerDictionaryInitialization_ttHMultileptonCINT_Impl();
}
