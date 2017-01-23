#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#ifdef __llvm__
#pragma GCC diagnostic ignored "-Wunused-private-field"
#endif
// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIcodedIcburtondImultileptondIRootCoreBindIobjdIx86_64mIslc6mIgcc49mIoptdITopAnalysisdIobjdITopAnalysisCINT

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
#include "TopAnalysis/ObjectLoaderStandardCuts.h"
#include "TopAnalysis/EventSaverFlatNtuple.h"
#include "TopAnalysis/EventSaverxAOD.h"
#include "TopAnalysis/EventSaverxAODNext.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_topcLcLObjectLoaderBase(void *p);
   static void deleteArray_topcLcLObjectLoaderBase(void *p);
   static void destruct_topcLcLObjectLoaderBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::top::ObjectLoaderBase*)
   {
      ::top::ObjectLoaderBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::top::ObjectLoaderBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("top::ObjectLoaderBase", ::top::ObjectLoaderBase::Class_Version(), "TopAnalysis/ObjectLoaderBase.h", 18,
                  typeid(::top::ObjectLoaderBase), DefineBehavior(ptr, ptr),
                  &::top::ObjectLoaderBase::Dictionary, isa_proxy, 4,
                  sizeof(::top::ObjectLoaderBase) );
      instance.SetDelete(&delete_topcLcLObjectLoaderBase);
      instance.SetDeleteArray(&deleteArray_topcLcLObjectLoaderBase);
      instance.SetDestructor(&destruct_topcLcLObjectLoaderBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::top::ObjectLoaderBase*)
   {
      return GenerateInitInstanceLocal((::top::ObjectLoaderBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::top::ObjectLoaderBase*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_topcLcLObjectLoaderStandardCuts(void *p = 0);
   static void *newArray_topcLcLObjectLoaderStandardCuts(Long_t size, void *p);
   static void delete_topcLcLObjectLoaderStandardCuts(void *p);
   static void deleteArray_topcLcLObjectLoaderStandardCuts(void *p);
   static void destruct_topcLcLObjectLoaderStandardCuts(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::top::ObjectLoaderStandardCuts*)
   {
      ::top::ObjectLoaderStandardCuts *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::top::ObjectLoaderStandardCuts >(0);
      static ::ROOT::TGenericClassInfo 
         instance("top::ObjectLoaderStandardCuts", ::top::ObjectLoaderStandardCuts::Class_Version(), "TopAnalysis/ObjectLoaderStandardCuts.h", 16,
                  typeid(::top::ObjectLoaderStandardCuts), DefineBehavior(ptr, ptr),
                  &::top::ObjectLoaderStandardCuts::Dictionary, isa_proxy, 4,
                  sizeof(::top::ObjectLoaderStandardCuts) );
      instance.SetNew(&new_topcLcLObjectLoaderStandardCuts);
      instance.SetNewArray(&newArray_topcLcLObjectLoaderStandardCuts);
      instance.SetDelete(&delete_topcLcLObjectLoaderStandardCuts);
      instance.SetDeleteArray(&deleteArray_topcLcLObjectLoaderStandardCuts);
      instance.SetDestructor(&destruct_topcLcLObjectLoaderStandardCuts);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::top::ObjectLoaderStandardCuts*)
   {
      return GenerateInitInstanceLocal((::top::ObjectLoaderStandardCuts*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::top::ObjectLoaderStandardCuts*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_topcLcLEventSaverBase(void *p);
   static void deleteArray_topcLcLEventSaverBase(void *p);
   static void destruct_topcLcLEventSaverBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::top::EventSaverBase*)
   {
      ::top::EventSaverBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::top::EventSaverBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("top::EventSaverBase", ::top::EventSaverBase::Class_Version(), "TopAnalysis/EventSaverBase.h", 22,
                  typeid(::top::EventSaverBase), DefineBehavior(ptr, ptr),
                  &::top::EventSaverBase::Dictionary, isa_proxy, 4,
                  sizeof(::top::EventSaverBase) );
      instance.SetDelete(&delete_topcLcLEventSaverBase);
      instance.SetDeleteArray(&deleteArray_topcLcLEventSaverBase);
      instance.SetDestructor(&destruct_topcLcLEventSaverBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::top::EventSaverBase*)
   {
      return GenerateInitInstanceLocal((::top::EventSaverBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::top::EventSaverBase*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_topcLcLEventSaverFlatNtuple(void *p = 0);
   static void *newArray_topcLcLEventSaverFlatNtuple(Long_t size, void *p);
   static void delete_topcLcLEventSaverFlatNtuple(void *p);
   static void deleteArray_topcLcLEventSaverFlatNtuple(void *p);
   static void destruct_topcLcLEventSaverFlatNtuple(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::top::EventSaverFlatNtuple*)
   {
      ::top::EventSaverFlatNtuple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::top::EventSaverFlatNtuple >(0);
      static ::ROOT::TGenericClassInfo 
         instance("top::EventSaverFlatNtuple", ::top::EventSaverFlatNtuple::Class_Version(), "TopAnalysis/EventSaverFlatNtuple.h", 21,
                  typeid(::top::EventSaverFlatNtuple), DefineBehavior(ptr, ptr),
                  &::top::EventSaverFlatNtuple::Dictionary, isa_proxy, 4,
                  sizeof(::top::EventSaverFlatNtuple) );
      instance.SetNew(&new_topcLcLEventSaverFlatNtuple);
      instance.SetNewArray(&newArray_topcLcLEventSaverFlatNtuple);
      instance.SetDelete(&delete_topcLcLEventSaverFlatNtuple);
      instance.SetDeleteArray(&deleteArray_topcLcLEventSaverFlatNtuple);
      instance.SetDestructor(&destruct_topcLcLEventSaverFlatNtuple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::top::EventSaverFlatNtuple*)
   {
      return GenerateInitInstanceLocal((::top::EventSaverFlatNtuple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::top::EventSaverFlatNtuple*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_topcLcLEventSaverxAOD(void *p = 0);
   static void *newArray_topcLcLEventSaverxAOD(Long_t size, void *p);
   static void delete_topcLcLEventSaverxAOD(void *p);
   static void deleteArray_topcLcLEventSaverxAOD(void *p);
   static void destruct_topcLcLEventSaverxAOD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::top::EventSaverxAOD*)
   {
      ::top::EventSaverxAOD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::top::EventSaverxAOD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("top::EventSaverxAOD", ::top::EventSaverxAOD::Class_Version(), "TopAnalysis/EventSaverxAOD.h", 17,
                  typeid(::top::EventSaverxAOD), DefineBehavior(ptr, ptr),
                  &::top::EventSaverxAOD::Dictionary, isa_proxy, 4,
                  sizeof(::top::EventSaverxAOD) );
      instance.SetNew(&new_topcLcLEventSaverxAOD);
      instance.SetNewArray(&newArray_topcLcLEventSaverxAOD);
      instance.SetDelete(&delete_topcLcLEventSaverxAOD);
      instance.SetDeleteArray(&deleteArray_topcLcLEventSaverxAOD);
      instance.SetDestructor(&destruct_topcLcLEventSaverxAOD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::top::EventSaverxAOD*)
   {
      return GenerateInitInstanceLocal((::top::EventSaverxAOD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::top::EventSaverxAOD*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_topcLcLEventSaverxAODNext(void *p = 0);
   static void *newArray_topcLcLEventSaverxAODNext(Long_t size, void *p);
   static void delete_topcLcLEventSaverxAODNext(void *p);
   static void deleteArray_topcLcLEventSaverxAODNext(void *p);
   static void destruct_topcLcLEventSaverxAODNext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::top::EventSaverxAODNext*)
   {
      ::top::EventSaverxAODNext *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::top::EventSaverxAODNext >(0);
      static ::ROOT::TGenericClassInfo 
         instance("top::EventSaverxAODNext", ::top::EventSaverxAODNext::Class_Version(), "TopAnalysis/EventSaverxAODNext.h", 17,
                  typeid(::top::EventSaverxAODNext), DefineBehavior(ptr, ptr),
                  &::top::EventSaverxAODNext::Dictionary, isa_proxy, 4,
                  sizeof(::top::EventSaverxAODNext) );
      instance.SetNew(&new_topcLcLEventSaverxAODNext);
      instance.SetNewArray(&newArray_topcLcLEventSaverxAODNext);
      instance.SetDelete(&delete_topcLcLEventSaverxAODNext);
      instance.SetDeleteArray(&deleteArray_topcLcLEventSaverxAODNext);
      instance.SetDestructor(&destruct_topcLcLEventSaverxAODNext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::top::EventSaverxAODNext*)
   {
      return GenerateInitInstanceLocal((::top::EventSaverxAODNext*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::top::EventSaverxAODNext*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace top {
//______________________________________________________________________________
atomic_TClass_ptr ObjectLoaderBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ObjectLoaderBase::Class_Name()
{
   return "top::ObjectLoaderBase";
}

//______________________________________________________________________________
const char *ObjectLoaderBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::ObjectLoaderBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ObjectLoaderBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::ObjectLoaderBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ObjectLoaderBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::ObjectLoaderBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ObjectLoaderBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::ObjectLoaderBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace top
namespace top {
//______________________________________________________________________________
atomic_TClass_ptr ObjectLoaderStandardCuts::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ObjectLoaderStandardCuts::Class_Name()
{
   return "top::ObjectLoaderStandardCuts";
}

//______________________________________________________________________________
const char *ObjectLoaderStandardCuts::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::ObjectLoaderStandardCuts*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ObjectLoaderStandardCuts::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::ObjectLoaderStandardCuts*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ObjectLoaderStandardCuts::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::ObjectLoaderStandardCuts*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ObjectLoaderStandardCuts::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::ObjectLoaderStandardCuts*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace top
namespace top {
//______________________________________________________________________________
atomic_TClass_ptr EventSaverBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EventSaverBase::Class_Name()
{
   return "top::EventSaverBase";
}

//______________________________________________________________________________
const char *EventSaverBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EventSaverBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventSaverBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventSaverBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace top
namespace top {
//______________________________________________________________________________
atomic_TClass_ptr EventSaverFlatNtuple::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EventSaverFlatNtuple::Class_Name()
{
   return "top::EventSaverFlatNtuple";
}

//______________________________________________________________________________
const char *EventSaverFlatNtuple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverFlatNtuple*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EventSaverFlatNtuple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverFlatNtuple*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventSaverFlatNtuple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverFlatNtuple*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventSaverFlatNtuple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverFlatNtuple*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace top
namespace top {
//______________________________________________________________________________
atomic_TClass_ptr EventSaverxAOD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EventSaverxAOD::Class_Name()
{
   return "top::EventSaverxAOD";
}

//______________________________________________________________________________
const char *EventSaverxAOD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverxAOD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EventSaverxAOD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverxAOD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventSaverxAOD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverxAOD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventSaverxAOD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverxAOD*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace top
namespace top {
//______________________________________________________________________________
atomic_TClass_ptr EventSaverxAODNext::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EventSaverxAODNext::Class_Name()
{
   return "top::EventSaverxAODNext";
}

//______________________________________________________________________________
const char *EventSaverxAODNext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverxAODNext*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EventSaverxAODNext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverxAODNext*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventSaverxAODNext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverxAODNext*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventSaverxAODNext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::EventSaverxAODNext*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace top
namespace top {
//______________________________________________________________________________
void ObjectLoaderBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class top::ObjectLoaderBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(top::ObjectLoaderBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(top::ObjectLoaderBase::Class(),this);
   }
}

} // namespace top
namespace ROOT {
   // Wrapper around operator delete
   static void delete_topcLcLObjectLoaderBase(void *p) {
      delete ((::top::ObjectLoaderBase*)p);
   }
   static void deleteArray_topcLcLObjectLoaderBase(void *p) {
      delete [] ((::top::ObjectLoaderBase*)p);
   }
   static void destruct_topcLcLObjectLoaderBase(void *p) {
      typedef ::top::ObjectLoaderBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::top::ObjectLoaderBase

namespace top {
//______________________________________________________________________________
void ObjectLoaderStandardCuts::Streamer(TBuffer &R__b)
{
   // Stream an object of class top::ObjectLoaderStandardCuts.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(top::ObjectLoaderStandardCuts::Class(),this);
   } else {
      R__b.WriteClassBuffer(top::ObjectLoaderStandardCuts::Class(),this);
   }
}

} // namespace top
namespace ROOT {
   // Wrappers around operator new
   static void *new_topcLcLObjectLoaderStandardCuts(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::top::ObjectLoaderStandardCuts : new ::top::ObjectLoaderStandardCuts;
   }
   static void *newArray_topcLcLObjectLoaderStandardCuts(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::top::ObjectLoaderStandardCuts[nElements] : new ::top::ObjectLoaderStandardCuts[nElements];
   }
   // Wrapper around operator delete
   static void delete_topcLcLObjectLoaderStandardCuts(void *p) {
      delete ((::top::ObjectLoaderStandardCuts*)p);
   }
   static void deleteArray_topcLcLObjectLoaderStandardCuts(void *p) {
      delete [] ((::top::ObjectLoaderStandardCuts*)p);
   }
   static void destruct_topcLcLObjectLoaderStandardCuts(void *p) {
      typedef ::top::ObjectLoaderStandardCuts current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::top::ObjectLoaderStandardCuts

namespace top {
//______________________________________________________________________________
void EventSaverBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class top::EventSaverBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(top::EventSaverBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(top::EventSaverBase::Class(),this);
   }
}

} // namespace top
namespace ROOT {
   // Wrapper around operator delete
   static void delete_topcLcLEventSaverBase(void *p) {
      delete ((::top::EventSaverBase*)p);
   }
   static void deleteArray_topcLcLEventSaverBase(void *p) {
      delete [] ((::top::EventSaverBase*)p);
   }
   static void destruct_topcLcLEventSaverBase(void *p) {
      typedef ::top::EventSaverBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::top::EventSaverBase

namespace top {
//______________________________________________________________________________
void EventSaverFlatNtuple::Streamer(TBuffer &R__b)
{
   // Stream an object of class top::EventSaverFlatNtuple.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(top::EventSaverFlatNtuple::Class(),this);
   } else {
      R__b.WriteClassBuffer(top::EventSaverFlatNtuple::Class(),this);
   }
}

} // namespace top
namespace ROOT {
   // Wrappers around operator new
   static void *new_topcLcLEventSaverFlatNtuple(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::top::EventSaverFlatNtuple : new ::top::EventSaverFlatNtuple;
   }
   static void *newArray_topcLcLEventSaverFlatNtuple(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::top::EventSaverFlatNtuple[nElements] : new ::top::EventSaverFlatNtuple[nElements];
   }
   // Wrapper around operator delete
   static void delete_topcLcLEventSaverFlatNtuple(void *p) {
      delete ((::top::EventSaverFlatNtuple*)p);
   }
   static void deleteArray_topcLcLEventSaverFlatNtuple(void *p) {
      delete [] ((::top::EventSaverFlatNtuple*)p);
   }
   static void destruct_topcLcLEventSaverFlatNtuple(void *p) {
      typedef ::top::EventSaverFlatNtuple current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::top::EventSaverFlatNtuple

namespace top {
//______________________________________________________________________________
void EventSaverxAOD::Streamer(TBuffer &R__b)
{
   // Stream an object of class top::EventSaverxAOD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(top::EventSaverxAOD::Class(),this);
   } else {
      R__b.WriteClassBuffer(top::EventSaverxAOD::Class(),this);
   }
}

} // namespace top
namespace ROOT {
   // Wrappers around operator new
   static void *new_topcLcLEventSaverxAOD(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::top::EventSaverxAOD : new ::top::EventSaverxAOD;
   }
   static void *newArray_topcLcLEventSaverxAOD(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::top::EventSaverxAOD[nElements] : new ::top::EventSaverxAOD[nElements];
   }
   // Wrapper around operator delete
   static void delete_topcLcLEventSaverxAOD(void *p) {
      delete ((::top::EventSaverxAOD*)p);
   }
   static void deleteArray_topcLcLEventSaverxAOD(void *p) {
      delete [] ((::top::EventSaverxAOD*)p);
   }
   static void destruct_topcLcLEventSaverxAOD(void *p) {
      typedef ::top::EventSaverxAOD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::top::EventSaverxAOD

namespace top {
//______________________________________________________________________________
void EventSaverxAODNext::Streamer(TBuffer &R__b)
{
   // Stream an object of class top::EventSaverxAODNext.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(top::EventSaverxAODNext::Class(),this);
   } else {
      R__b.WriteClassBuffer(top::EventSaverxAODNext::Class(),this);
   }
}

} // namespace top
namespace ROOT {
   // Wrappers around operator new
   static void *new_topcLcLEventSaverxAODNext(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::top::EventSaverxAODNext : new ::top::EventSaverxAODNext;
   }
   static void *newArray_topcLcLEventSaverxAODNext(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::top::EventSaverxAODNext[nElements] : new ::top::EventSaverxAODNext[nElements];
   }
   // Wrapper around operator delete
   static void delete_topcLcLEventSaverxAODNext(void *p) {
      delete ((::top::EventSaverxAODNext*)p);
   }
   static void deleteArray_topcLcLEventSaverxAODNext(void *p) {
      delete [] ((::top::EventSaverxAODNext*)p);
   }
   static void destruct_topcLcLEventSaverxAODNext(void *p) {
      typedef ::top::EventSaverxAODNext current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::top::EventSaverxAODNext

namespace {
  void TriggerDictionaryInitialization_TopAnalysisCINT_Impl() {
    static const char* headers[] = {
"TopAnalysis/ObjectLoaderStandardCuts.h",
"TopAnalysis/EventSaverFlatNtuple.h",
"TopAnalysis/EventSaverxAOD.h",
"TopAnalysis/EventSaverxAODNext.h",
0
    };
    static const char* includePaths[] = {
"/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopAnalysis/Root",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopAnalysis",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.04.16-x86_64-slc6-gcc49-opt/include",
"/code/cburton/multilepton/RootCoreBin/include",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.04.16-x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.04.16-x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopAnalysis/cmt/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace top{class __attribute__((annotate("$clingAutoload$/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopAnalysis/Root/LinkDef.h")))  ObjectLoaderBase;}
namespace top{class __attribute__((annotate("$clingAutoload$/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopAnalysis/Root/LinkDef.h")))  ObjectLoaderStandardCuts;}
namespace top{class __attribute__((annotate("$clingAutoload$/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopAnalysis/Root/LinkDef.h")))  EventSaverBase;}
namespace top{class __attribute__((annotate("$clingAutoload$/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopAnalysis/Root/LinkDef.h")))  EventSaverFlatNtuple;}
namespace top{class __attribute__((annotate("$clingAutoload$/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopAnalysis/Root/LinkDef.h")))  EventSaverxAOD;}
namespace top{class __attribute__((annotate("$clingAutoload$/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopAnalysis/Root/LinkDef.h")))  EventSaverxAODNext;}
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
  #define ROOTCORE_PACKAGE "TopAnalysis"
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TopAnalysis/ObjectLoaderStandardCuts.h"
#include "TopAnalysis/EventSaverFlatNtuple.h"
#include "TopAnalysis/EventSaverxAOD.h"
#include "TopAnalysis/EventSaverxAODNext.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"top::EventSaverBase", payloadCode, "@",
"top::EventSaverFlatNtuple", payloadCode, "@",
"top::EventSaverxAOD", payloadCode, "@",
"top::EventSaverxAODNext", payloadCode, "@",
"top::ObjectLoaderBase", payloadCode, "@",
"top::ObjectLoaderStandardCuts", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TopAnalysisCINT",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TopAnalysisCINT_Impl, {{"namespace DataVector_detail { template <typename B1, typename B2, typename B3> class VirtBases; }", 1},{"template <typename T> class DataVectorBase;", 1},{"template <typename T, typename BASE> class DataVector;", 1},{"namespace DataVector_detail { template <typename T> class DVLEltBaseInit; }", 1}}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TopAnalysisCINT_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TopAnalysisCINT() {
  TriggerDictionaryInitialization_TopAnalysisCINT_Impl();
}
