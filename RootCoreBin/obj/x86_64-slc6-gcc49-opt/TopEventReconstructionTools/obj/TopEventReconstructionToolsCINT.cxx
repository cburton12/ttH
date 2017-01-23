#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#ifdef __llvm__
#pragma GCC diagnostic ignored "-Wunused-private-field"
#endif
// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIcodedIcburtondImultileptondIRootCoreBindIobjdIx86_64mIslc6mIgcc49mIoptdITopEventReconstructionToolsdIobjdITopEventReconstructionToolsCINT

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
#include "TopEventReconstructionTools/TopEventReconstructionToolsLoader.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_topcLcLTopEventReconstructionToolsLoader(void *p = 0);
   static void *newArray_topcLcLTopEventReconstructionToolsLoader(Long_t size, void *p);
   static void delete_topcLcLTopEventReconstructionToolsLoader(void *p);
   static void deleteArray_topcLcLTopEventReconstructionToolsLoader(void *p);
   static void destruct_topcLcLTopEventReconstructionToolsLoader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::top::TopEventReconstructionToolsLoader*)
   {
      ::top::TopEventReconstructionToolsLoader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::top::TopEventReconstructionToolsLoader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("top::TopEventReconstructionToolsLoader", ::top::TopEventReconstructionToolsLoader::Class_Version(), "TopEventReconstructionTools/TopEventReconstructionToolsLoader.h", 24,
                  typeid(::top::TopEventReconstructionToolsLoader), DefineBehavior(ptr, ptr),
                  &::top::TopEventReconstructionToolsLoader::Dictionary, isa_proxy, 4,
                  sizeof(::top::TopEventReconstructionToolsLoader) );
      instance.SetNew(&new_topcLcLTopEventReconstructionToolsLoader);
      instance.SetNewArray(&newArray_topcLcLTopEventReconstructionToolsLoader);
      instance.SetDelete(&delete_topcLcLTopEventReconstructionToolsLoader);
      instance.SetDeleteArray(&deleteArray_topcLcLTopEventReconstructionToolsLoader);
      instance.SetDestructor(&destruct_topcLcLTopEventReconstructionToolsLoader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::top::TopEventReconstructionToolsLoader*)
   {
      return GenerateInitInstanceLocal((::top::TopEventReconstructionToolsLoader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::top::TopEventReconstructionToolsLoader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace top {
//______________________________________________________________________________
atomic_TClass_ptr TopEventReconstructionToolsLoader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TopEventReconstructionToolsLoader::Class_Name()
{
   return "top::TopEventReconstructionToolsLoader";
}

//______________________________________________________________________________
const char *TopEventReconstructionToolsLoader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::TopEventReconstructionToolsLoader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TopEventReconstructionToolsLoader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::top::TopEventReconstructionToolsLoader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TopEventReconstructionToolsLoader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::TopEventReconstructionToolsLoader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TopEventReconstructionToolsLoader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::top::TopEventReconstructionToolsLoader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace top
namespace top {
//______________________________________________________________________________
void TopEventReconstructionToolsLoader::Streamer(TBuffer &R__b)
{
   // Stream an object of class top::TopEventReconstructionToolsLoader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(top::TopEventReconstructionToolsLoader::Class(),this);
   } else {
      R__b.WriteClassBuffer(top::TopEventReconstructionToolsLoader::Class(),this);
   }
}

} // namespace top
namespace ROOT {
   // Wrappers around operator new
   static void *new_topcLcLTopEventReconstructionToolsLoader(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::top::TopEventReconstructionToolsLoader : new ::top::TopEventReconstructionToolsLoader;
   }
   static void *newArray_topcLcLTopEventReconstructionToolsLoader(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::top::TopEventReconstructionToolsLoader[nElements] : new ::top::TopEventReconstructionToolsLoader[nElements];
   }
   // Wrapper around operator delete
   static void delete_topcLcLTopEventReconstructionToolsLoader(void *p) {
      delete ((::top::TopEventReconstructionToolsLoader*)p);
   }
   static void deleteArray_topcLcLTopEventReconstructionToolsLoader(void *p) {
      delete [] ((::top::TopEventReconstructionToolsLoader*)p);
   }
   static void destruct_topcLcLTopEventReconstructionToolsLoader(void *p) {
      typedef ::top::TopEventReconstructionToolsLoader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::top::TopEventReconstructionToolsLoader

namespace {
  void TriggerDictionaryInitialization_TopEventReconstructionToolsCINT_Impl() {
    static const char* headers[] = {
"TopEventReconstructionTools/TopEventReconstructionToolsLoader.h",
0
    };
    static const char* includePaths[] = {
"/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopEventReconstructionTools/Root",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopEventReconstructionTools",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.04.16-x86_64-slc6-gcc49-opt/include",
"/code/cburton/multilepton/RootCoreBin/include",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.04.16-x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.04.16-x86_64-slc6-gcc49-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopEventReconstructionTools/cmt/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace top{class __attribute__((annotate("$clingAutoload$/cvmfs/atlas.cern.ch/repo/sw/ASG/AnalysisTop/2.4.19/TopEventReconstructionTools/Root/LinkDef.h")))  TopEventReconstructionToolsLoader;}
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
  #define ROOTCORE_PACKAGE "TopEventReconstructionTools"
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TopEventReconstructionTools/TopEventReconstructionToolsLoader.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"top::TopEventReconstructionToolsLoader", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TopEventReconstructionToolsCINT",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TopEventReconstructionToolsCINT_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TopEventReconstructionToolsCINT_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TopEventReconstructionToolsCINT() {
  TriggerDictionaryInitialization_TopEventReconstructionToolsCINT_Impl();
}
