/* LibTomCrypt, modular cryptographic library -- Tom St Denis
 *
 * LibTomCrypt is a library that provides various cryptographic
 * algorithms in a highly modular and flexible manner.
 *
 * The library is free for all purposes without any express
 * guarantee it works.
 *
 * Tom St Denis, tomstdenis@gmail.com, http://libtom.org
 */
#include "tomcrypt.h"

// workaround for nasty osx linker bug
// see https://github.com/ruslo/hunter/pull/877#issuecomment-319945897 for details
// ifdefed because "= {}" casues compile errors on windows
#ifdef __APPLE__
    ltc_math_descriptor ltc_mp = {};
#else
    ltc_math_descriptor ltc_mp;
#endif
