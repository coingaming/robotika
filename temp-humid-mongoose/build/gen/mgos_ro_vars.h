/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_ro_vars --c_global_name=mgos_sys_ro_vars --dest_dir=/data/fwbuild-volumes/2.12.1/apps/my-js-app/esp32/build_contexts/build_ctx_822100955/build/gen/ /mongoose-os/fw/src/mgos_ro_vars_schema.yaml
 */

#pragma once

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif

struct mgos_ro_vars {
  char *mac_address;
  char *arch;
  char *app;
  char *fw_version;
  char *fw_timestamp;
  char *fw_id;
};


const struct mgos_conf_entry *mgos_ro_vars_schema();

/* Parametrized accessor prototypes {{{ */
#define MGOS_RO_VARS_HAVE_MAC_ADDRESS
const char *mgos_ro_vars_get_mac_address(struct mgos_ro_vars *cfg);
#define MGOS_RO_VARS_HAVE_ARCH
const char *mgos_ro_vars_get_arch(struct mgos_ro_vars *cfg);
#define MGOS_RO_VARS_HAVE_APP
const char *mgos_ro_vars_get_app(struct mgos_ro_vars *cfg);
#define MGOS_RO_VARS_HAVE_FW_VERSION
const char *mgos_ro_vars_get_fw_version(struct mgos_ro_vars *cfg);
#define MGOS_RO_VARS_HAVE_FW_TIMESTAMP
const char *mgos_ro_vars_get_fw_timestamp(struct mgos_ro_vars *cfg);
#define MGOS_RO_VARS_HAVE_FW_ID
const char *mgos_ro_vars_get_fw_id(struct mgos_ro_vars *cfg);

void mgos_ro_vars_set_mac_address(struct mgos_ro_vars *cfg, const char *val);
void mgos_ro_vars_set_arch(struct mgos_ro_vars *cfg, const char *val);
void mgos_ro_vars_set_app(struct mgos_ro_vars *cfg, const char *val);
void mgos_ro_vars_set_fw_version(struct mgos_ro_vars *cfg, const char *val);
void mgos_ro_vars_set_fw_timestamp(struct mgos_ro_vars *cfg, const char *val);
void mgos_ro_vars_set_fw_id(struct mgos_ro_vars *cfg, const char *val);
/* }}} */

extern struct mgos_ro_vars mgos_sys_ro_vars;

static inline bool mgos_sys_ro_vars_get(const struct mg_str key, struct mg_str *value) { return mgos_config_get(key, value, &mgos_sys_ro_vars, mgos_ro_vars_schema()); }
static inline bool mgos_sys_ro_vars_set(const struct mg_str key, const struct mg_str value, bool free_strings) { return mgos_config_set(key, value, &mgos_sys_ro_vars, mgos_ro_vars_schema(), free_strings); }

#define MGOS_SYS_RO_VARS_HAVE_MAC_ADDRESS
static inline const char *mgos_sys_ro_vars_get_mac_address(void) { return mgos_ro_vars_get_mac_address(&mgos_sys_ro_vars); }
#define MGOS_SYS_RO_VARS_HAVE_ARCH
static inline const char *mgos_sys_ro_vars_get_arch(void) { return mgos_ro_vars_get_arch(&mgos_sys_ro_vars); }
#define MGOS_SYS_RO_VARS_HAVE_APP
static inline const char *mgos_sys_ro_vars_get_app(void) { return mgos_ro_vars_get_app(&mgos_sys_ro_vars); }
#define MGOS_SYS_RO_VARS_HAVE_FW_VERSION
static inline const char *mgos_sys_ro_vars_get_fw_version(void) { return mgos_ro_vars_get_fw_version(&mgos_sys_ro_vars); }
#define MGOS_SYS_RO_VARS_HAVE_FW_TIMESTAMP
static inline const char *mgos_sys_ro_vars_get_fw_timestamp(void) { return mgos_ro_vars_get_fw_timestamp(&mgos_sys_ro_vars); }
#define MGOS_SYS_RO_VARS_HAVE_FW_ID
static inline const char *mgos_sys_ro_vars_get_fw_id(void) { return mgos_ro_vars_get_fw_id(&mgos_sys_ro_vars); }

static inline void mgos_sys_ro_vars_set_mac_address(const char *val) { mgos_ro_vars_set_mac_address(&mgos_sys_ro_vars, val); }
static inline void mgos_sys_ro_vars_set_arch(const char *val) { mgos_ro_vars_set_arch(&mgos_sys_ro_vars, val); }
static inline void mgos_sys_ro_vars_set_app(const char *val) { mgos_ro_vars_set_app(&mgos_sys_ro_vars, val); }
static inline void mgos_sys_ro_vars_set_fw_version(const char *val) { mgos_ro_vars_set_fw_version(&mgos_sys_ro_vars, val); }
static inline void mgos_sys_ro_vars_set_fw_timestamp(const char *val) { mgos_ro_vars_set_fw_timestamp(&mgos_sys_ro_vars, val); }
static inline void mgos_sys_ro_vars_set_fw_id(const char *val) { mgos_ro_vars_set_fw_id(&mgos_sys_ro_vars, val); }

#ifdef __cplusplus
}
#endif
