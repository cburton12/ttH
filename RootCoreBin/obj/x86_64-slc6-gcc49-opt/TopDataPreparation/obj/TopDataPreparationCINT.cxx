#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#ifdef __llvm__
#pragma GCC diagnostic ignored "-Wunused-private-field"
#endif
// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIcodedIcburtondImultileptondIRootCoreBindIobjdIx86_64mIslc6mIgcc49mIoptdITopDataPreparationdIobjdITopDataPreparationCINT

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
#include "TopDataPreparation/SampleXsection.h"
#include "TopDataPreparation/SampleXsectionSvc.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *SampleXsection_Dictionary();
   static void SampleXsection_TClassManip(TClass*);
   static void *new_SampleXsection(void *p = 0);
   static void *newArray_SampleXsection(Long_t size, void *p);
   static void delete_SampleXsection(void *p);
   static void deleteArray_SampleXsection(void *p);
   static void destruct_SampleXsection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SampleXsection*)
   {
      ::SampleXsection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SampleXsection));
      static ::ROOT::TGenericClassInfo 
         instance("SampleXsection", "TopDataPreparation/SampleXsection.h", 13,
                  typeid(::SampleXsection), DefineBehavior(ptr, ptr),
                  &SampleXsection_Dictionary, isa_proxy, 4,
                  sizeof(::SampleXsection) );
      instance.SetNew(&new_SampleXsection);
      instance.SetNewArray(&newArray_SampleXsection);
      instance.SetDelete(&delete_SampleXsection);
      instance.SetDeleteArray(&deleteArray_SampleXsection);
      instance.SetDestructor(&destruct_SampleXsection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SampleXsection*)
   {
      return GenerateInitInstanceLocal((::SampleXsection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::SampleXsection*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SampleXsection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::SampleXsection*)0x0)->GetClass();
      SampleXsection_TClassManip(theClass);
   return theClass;
   }

   static void SampleXsection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *SampleXsectionSvc_Dictionary();
   static void SampleXsectionSvc_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SampleXsectionSvc*)
   {
      ::SampleXsectionSvc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SampleXsectionSvc));
      static ::ROOT::TGenericClassInfo 
         instance("SampleXsectionSvc", "TopDataPreparation/SampleXsectionSvc.h", 20,
                  typeid(::SampleXsectionSvc), DefineBehavior(ptr, ptr),
                  &SampleXsectionSvc_Dictionary, isa_proxy, 4,
                  sizeof(::SampleXsectionSvc) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SampleXsectionSvc*)
   {
      return GenerateInitInstanceLocal((::SampleXsectionSvc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::SampleXsectionSvc*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SampleXsectionSvc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::SampleXsectionSvc*)0x0)->GetClass();
      SampleXsectionSvc_TClassManip(theClass);
   return theClass;
   }

   static void SampleXsectionSvc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_SampleXsection(void *p) {
      return  p ? new(p) ::SampleXsection : new ::SampleXsection;
   }
   static void *newArray_SampleXsection(Long_t nElements, void *p) {
      return p ? new(p) ::SampleXsection[nElements] : new ::SampleXsection[nElements];
   }
   // Wrapper around operator delete
   static void delete_SampleXsection(void *p) {
      delete ((::SampleXsection*)p);
   }
   static void deleteArray_SampleXsection(void *p) {
      delete [] ((::SampleXsection*)p);
   }
   static void destruct_SampleXsection(void *p) {
      typedef ::SampleXsection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SampleXsection

namespace ROOT {
} // end of namespace ROOT for class ::SampleXsectionSvc

namespace ROOT {
   static TClass *maplEintcOpairlEdoublecOdoublegRsPgR_Dictionary();
   static void maplEintcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOpairlEdoublecOdoublegRsPgR(void *p = 0);
   static void *newArray_maplEintcOpairlEdoublecOdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEintcOpairlEdoublecOdoublegRsPgR(void *p);
   static void deleteArray_maplEintcOpairlEdoublecOdoublegRsPgR(void *p);
   static void destruct_maplEintcOpairlEdoublecOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,pair<double,double> >*)
   {
      map<int,pair<double,double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,pair<double,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,pair<double,double> >", -2, "map", 96,
                  typeid(map<int,pair<double,double> >), DefineBehavior(ptr, ptr),
                  &maplEintcOpairlEdoublecOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,pair<double,double> >) );
      instance.SetNew(&new_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDelete(&delete_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,pair<double,double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<int,pair<double,double> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOpairlEdoublecOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,pair<double,double> >*)0x0)->GetClass();
      maplEintcOpairlEdoublecOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,pair<double,double> > : new map<int,pair<double,double> >;
   }
   static void *newArray_maplEintcOpairlEdoublecOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,pair<double,double> >[nElements] : new map<int,pair<double,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete ((map<int,pair<double,double> >*)p);
   }
   static void deleteArray_maplEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete [] ((map<int,pair<double,double> >*)p);
   }
   static void destruct_maplEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      typedef map<int,pair<double,double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,pair<double,double> >

namespace ROOT {
   static TClass *maplEintcOSampleXsectioncLcLshoweringgR_Dictionary();
   static void maplEintcOSampleXsectioncLcLshoweringgR_TClassManip(TClass*);
   static void *new_maplEintcOSampleXsectioncLcLshoweringgR(void *p = 0);
   static void *newArray_maplEintcOSampleXsectioncLcLshoweringgR(Long_t size, void *p);
   static void delete_maplEintcOSampleXsectioncLcLshoweringgR(void *p);
   static void deleteArray_maplEintcOSampleXsectioncLcLshoweringgR(void *p);
   static void destruct_maplEintcOSampleXsectioncLcLshoweringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,SampleXsection::showering>*)
   {
      map<int,SampleXsection::showering> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,SampleXsection::showering>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,SampleXsection::showering>", -2, "map", 96,
                  typeid(map<int,SampleXsection::showering>), DefineBehavior(ptr, ptr),
                  &maplEintcOSampleXsectioncLcLshoweringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,SampleXsection::showering>) );
      instance.SetNew(&new_maplEintcOSampleXsectioncLcLshoweringgR);
      instance.SetNewArray(&newArray_maplEintcOSampleXsectioncLcLshoweringgR);
      instance.SetDelete(&delete_maplEintcOSampleXsectioncLcLshoweringgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOSampleXsectioncLcLshoweringgR);
      instance.SetDestructor(&destruct_maplEintcOSampleXsectioncLcLshoweringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,SampleXsection::showering> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<int,SampleXsection::showering>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOSampleXsectioncLcLshoweringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,SampleXsection::showering>*)0x0)->GetClass();
      maplEintcOSampleXsectioncLcLshoweringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOSampleXsectioncLcLshoweringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOSampleXsectioncLcLshoweringgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,SampleXsection::showering> : new map<int,SampleXsection::showering>;
   }
   static void *newArray_maplEintcOSampleXsectioncLcLshoweringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,SampleXsection::showering>[nElements] : new map<int,SampleXsection::showering>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOSampleXsectioncLcLshoweringgR(void *p) {
      delete ((map<int,SampleXsection::showering>*)p);
   }
   static void deleteArray_maplEintcOSampleXsectioncLcLshoweringgR(void *p) {
      delete [] ((map<int,SampleXsection::showering>*)p);
   }
   static void destruct_maplEintcOSampleXsectioncLcLshoweringgR(void *p) {
      typedef map<int,SampleXsection::showering> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,SampleXsection::showering>

namespace {
  void TriggerDictionaryInitialization_TopDataPreparationCINT_Impl() {
    static const char* headers[] = {
"TopDataPreparation/SampleXsection.h",
"TopDataPreparation/SampleXsectionSvc.h",
0
    };
    static const char* includePaths[] = {
"/code/cburton/multilepton/TopDataPreparation/Root",
"/code/cburton/multilepton/TopDataPreparation",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.04.16-x86_64-slc6-gcc49-opt/include",
"/code/cburton/multilepton/RootCoreBin/include",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.04.16-x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.04.16-x86_64-slc6-gcc49-opt/include",
"/code/cburton/multilepton/TopDataPreparation/cmt/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TopDataPreparation/SampleXsection.h")))  SampleXsection;
class __attribute__((annotate("$clingAutoload$TopDataPreparation/SampleXsectionSvc.h")))  SampleXsectionSvc;
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
#ifndef ROOTCORE_PACKAGE
  #define ROOTCORE_PACKAGE "TopDataPreparation"
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TopDataPreparation/SampleXsection.h"
#include "TopDataPreparation/SampleXsectionSvc.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"SampleXsection", payloadCode, "@",
"SampleXsectionSvc", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TopDataPreparationCINT",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TopDataPreparationCINT_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TopDataPreparationCINT_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TopDataPreparationCINT() {
  TriggerDictionaryInitialization_TopDataPreparationCINT_Impl();
}
