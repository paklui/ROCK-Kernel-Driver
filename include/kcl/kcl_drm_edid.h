#ifndef AMDKCL_DRM_EDID_H
#define AMDKCL_DRM_EDID_H

#include <drm/drm_edid.h>

#ifndef drm_edid_encode_panel_id
#define drm_edid_encode_panel_id(vend_chr_0, vend_chr_1, vend_chr_2, product_id) \
	((((u32)(vend_chr_0) - '@') & 0x1f) << 26 | \
	 (((u32)(vend_chr_1) - '@') & 0x1f) << 21 | \
	 (((u32)(vend_chr_2) - '@') & 0x1f) << 16 | \
	 ((product_id) & 0xffff))
#endif /* drm_edid_encode_panel_id */

#ifndef DRM_EDID_RANGE_OFFSET_MIN_VFREQ
#define DRM_EDID_RANGE_OFFSET_MIN_VFREQ (1 << 0) /* 1.4 */
#define DRM_EDID_RANGE_OFFSET_MAX_VFREQ (1 << 1) /* 1.4 */
#define DRM_EDID_RANGE_OFFSET_MIN_HFREQ (1 << 2) /* 1.4 */
#define DRM_EDID_RANGE_OFFSET_MAX_HFREQ (1 << 3) /* 1.4 */
#endif

#ifndef DRM_EDID_FEATURE_CONTINUOUS_FREQ
#define DRM_EDID_FEATURE_CONTINUOUS_FREQ  (1 << 0) /* 1.4 */
#endif

#endif
