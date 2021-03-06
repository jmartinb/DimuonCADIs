/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/
#ifndef ROO_EXTCB_SHAPE
#define ROO_EXTCB_SHAPE
  
#include "RooAbsPdf.h"
#include "RooRealProxy.h"
  
class RooRealVar;
  
class RooExtCBShape : public RooAbsPdf {
 public:
  RooExtCBShape() {} ;
  RooExtCBShape(const char *name, const char *title, RooAbsReal& _m,
                RooAbsReal& _m0, RooAbsReal& _sigma,
                RooAbsReal& _alpha, RooAbsReal& _n,
                RooAbsReal& _alpha2, RooAbsReal& _n2);
  
  RooExtCBShape(const RooExtCBShape& other, const char* name = 0);
  virtual TObject* clone(const char* newname) const { return new RooExtCBShape(*this,newname); }
  
  inline virtual ~RooExtCBShape() { }
  
  virtual Int_t getAnalyticalIntegral( RooArgSet& allVars,  RooArgSet& analVars, const char* rangeName=0 ) const;
  virtual Double_t analyticalIntegral( Int_t code, const char* rangeName=0 ) const;
  
  // Optimized accept/reject generator support
  virtual Int_t getMaxVal(const RooArgSet& vars) const ;
  virtual Double_t maxVal(Int_t code) const ;
  
 protected:
  
  Double_t ApproxErf(Double_t arg) const ;
  
  RooRealProxy m;
  RooRealProxy m0;
  RooRealProxy sigma;
  RooRealProxy alpha;
  RooRealProxy n;
  RooRealProxy alpha2;
  RooRealProxy n2;
  
  Double_t evaluate() const;
  
 private:
  
  ClassDef(RooExtCBShape,1) // Extended Crystal Ball lineshape PDF
};
  
#endif
