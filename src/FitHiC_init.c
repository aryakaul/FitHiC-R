// This file was automatically generated by 'Kmisc::registerFunctions()'

#include <R.h>
#include <Rinternals.h>

#include <R_ext/Rdynload.h>

SEXP FitHiC_calculate_probabilities_helper(SEXP sortedInteractionsSEXP, SEXP isOutlierSEXP, SEXP useBinningSEXP, SEXP desiredPerBinSEXP, SEXP distScalingSEXP, SEXP observedIntraInRangeSumSEXP);

R_CallMethodDef callMethods[]  = {
  {"C_FitHiC_calculate_probabilities_helper", (DL_FUNC) &FitHiC_calculate_probabilities_helper, 6},
  {NULL, NULL, 0}
};

void R_init_FitHiC(DllInfo *info) {
  R_registerRoutines(info, NULL, callMethods, NULL, NULL);
  R_useDynamicSymbols(info, FALSE);
}
