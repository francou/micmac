// File Automatically generated by eLiSe
#include "StdAfx.h"


class cEqAppui_PTInc_M2CFishEye_10_5_5: public cElCompiledFonc
{
   public :

      cEqAppui_PTInc_M2CFishEye_10_5_5();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetFishEye_10_5_5_State_0_0(double);
      void SetScNorm(double);
      void SetXIm(double);
      void SetYIm(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocFishEye_10_5_5_State_0_0;
      double mLocScNorm;
      double mLocXIm;
      double mLocYIm;
};
