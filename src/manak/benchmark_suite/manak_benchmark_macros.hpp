////////////////////////////////////////////////////////////////////////////////
/// MANAK BENCHMARK MACRO
////////////////////////////////////////////////////////////////////////////////

#define _MANAK_BENCHMARK_CASE_TIS(Name, Library, Function, Tol, Iter, SP)     \
_MANAK_CASE_TIS(BenchmarkCase, Name, Library, Function, Tol, Iter, SP)

////////////////////////////////////////////////////////////////////////////////
/// MANAK AUTO BENCHMARK MACRO
////////////////////////////////////////////////////////////////////////////////

#define _MANAK_AUTO_BENCHMARK_CASE_TIS(Name, Library, Tol, Iter, SP)          \
_MANAK_AUTO_CASE_TIS(BenchmarkCase, Name, Library, Tol, Iter, SP)

////////////////////////////////////////////////////////////////////////////////
/// MANAK CREATE BENCHMARK WITH TEMPLATE MACRO
////////////////////////////////////////////////////////////////////////////////

#define _MANAK_CREATE_BENCHMARK_WITH_TEMPLATE_TIS(Name, Lib, Fun, Tol, Iter, SP)  \
_MANAK_CREATE_WITH_TEMPLATE_TIS(BenchmarkCase, Name, Lib, Fun, Tol, Iter, SP)

////////////////////////////////////////////////////////////////////////////////
/// ADD MODULE APPROPRIATE MACROS
////////////////////////////////////////////////////////////////////////////////

#ifdef MANAK_SIMPLE_MODULE
#include "simple_module_benchmark_case.hpp"

#else // MANAK_SIMPLE_MODULE
#include "module_benchmark_case.hpp"

#endif // MANAK_SIMPLE_MODULE

////////////////////////////////////////////////////////////////////////////////
/// MEASURE MACRO
////////////////////////////////////////////////////////////////////////////////

#define MEASURE(Code)                                                         \
manak::Timer::StartTimer();                                                   \
Code;                                                                         \
manak::Timer::StopTimer();
