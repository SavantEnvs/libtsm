/* At this libtsm revision test/test_common.h includes "shl_htable.h" (underscore) but the
 * shipped header is src/shared/shl-htable.h (hyphen) — an upstream typo/breakage already present
 * at this exact commit's test target. This shim (part of the mayhem/ layer, not an upstream edit)
 * just forwards to the real header so the test suite can be built.
 */
#include "shl-htable.h"
