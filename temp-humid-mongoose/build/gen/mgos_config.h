/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.12.1/apps/temp-humid-mongoose/esp32/build_contexts/build_ctx_928141448/build/gen/ /mongoose-os/fw/src/mgos_debug_udp_config.yaml /mongoose-os/fw/src/mgos_sys_config.yaml /mongoose-os/fw/platforms/esp32/src/esp32_sys_config.yaml /data/fwbuild-volumes/2.12.1/apps/temp-humid-mongoose/esp32/build_contexts/build_ctx_928141448/build/gen/mos_conf_schema.yml
 */

#pragma once

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif

struct mgos_config_debug {
  char *udp_log_addr;
  int level;
  char *file_level;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  char *mg_mgr_hexdump_file;
  int mbedtls_level;
  char *stdout_topic;
  char *stderr_topic;
};

struct mgos_config_device {
  char *id;
  char *license;
};

struct mgos_config_sys_mount {
  char *path;
  char *dev_type;
  char *dev_opts;
  char *fs_type;
  char *fs_opts;
};

struct mgos_config_sys_atca {
  int enable;
  int i2c_bus;
  int i2c_addr;
  int ecdh_slots_mask;
};

struct mgos_config_sys {
  struct mgos_config_sys_mount mount;
  char *tz_spec;
  int wdt_timeout;
  char *pref_ota_lib;
  int esp32_adc_vref;
  int esp32_adc_width;
  struct mgos_config_sys_atca atca;
};

struct mgos_config_i2c {
  int unit_no;
  int enable;
  int freq;
  int debug;
  int sda_gpio;
  int scl_gpio;
};

struct mgos_config_mqtt {
  int enable;
  char *server;
  char *client_id;
  char *user;
  char *pass;
  double reconnect_timeout_min;
  double reconnect_timeout_max;
  char *ssl_cert;
  char *ssl_key;
  char *ssl_ca_cert;
  char *ssl_cipher_suites;
  char *ssl_psk_identity;
  char *ssl_psk_key;
  int clean_session;
  int keep_alive;
  char *will_topic;
  char *will_message;
  int max_qos;
  int recv_mbuf_limit;
  int require_time;
  int cloud_events;
};

struct mgos_config_shadow {
  int enable;
  char *lib;
};

struct mgos_config_aws_greengrass {
  int enable;
  int reconnect_timeout_min;
  int reconnect_timeout_max;
};

struct mgos_config_aws {
  char *thing_name;
  struct mgos_config_aws_greengrass greengrass;
};

struct mgos_config_http {
  int enable;
  char *listen_addr;
  char *document_root;
  char *ssl_cert;
  char *ssl_key;
  char *ssl_ca_cert;
  char *upload_acl;
  char *hidden_files;
  char *auth_domain;
  char *auth_file;
};

struct mgos_config_mjs {
  int generate_jsc;
};

struct mgos_config_rpc_uart {
  int uart_no;
  int baud_rate;
  int fc_type;
  char *dst;
};

struct mgos_config_rpc {
  int enable;
  int max_frame_size;
  int max_queue_length;
  int default_out_channel_idle_close_timeout;
  char *acl_file;
  char *auth_domain;
  char *auth_file;
  struct mgos_config_rpc_uart uart;
};

struct mgos_config_wifi_ap {
  int enable;
  char *ssid;
  char *pass;
  int hidden;
  int channel;
  int max_connections;
  char *ip;
  char *netmask;
  char *gw;
  char *dhcp_start;
  char *dhcp_end;
  int trigger_on_gpio;
  int disable_after;
  char *hostname;
  int keep_enabled;
};

struct mgos_config_wifi_sta {
  int enable;
  char *ssid;
  char *pass;
  char *user;
  char *anon_identity;
  char *cert;
  char *key;
  char *ca_cert;
  char *ip;
  char *netmask;
  char *gw;
  char *nameserver;
  char *dhcp_hostname;
};

struct mgos_config_wifi {
  struct mgos_config_wifi_ap ap;
  struct mgos_config_wifi_sta sta;
  struct mgos_config_wifi_sta sta1;
  struct mgos_config_wifi_sta sta2;
  int sta_cfg_idx;
  int sta_connect_timeout;
};

struct mgos_config_board_led1 {
  int pin;
  int active_high;
};

struct mgos_config_board_led2 {
  int pin;
  int active_high;
};

struct mgos_config_board_led3 {
  int pin;
  int active_high;
};

struct mgos_config_board_btn1 {
  int pin;
  int pull_up;
};

struct mgos_config_board_btn2 {
  int pin;
  int pull_up;
};

struct mgos_config_board_btn3 {
  int pin;
  int pull_up;
};

struct mgos_config_board {
  struct mgos_config_board_led1 led1;
  struct mgos_config_board_led2 led2;
  struct mgos_config_board_led3 led3;
  struct mgos_config_board_btn1 btn1;
  struct mgos_config_board_btn2 btn2;
  struct mgos_config_board_btn3 btn3;
};

struct mgos_config_app {
  int dhtPin;
  int mqPin;
};

struct mgos_config {
  struct mgos_config_debug debug;
  struct mgos_config_device device;
  struct mgos_config_sys sys;
  char *conf_acl;
  struct mgos_config_i2c i2c;
  struct mgos_config_i2c i2c1;
  struct mgos_config_mqtt mqtt;
  struct mgos_config_mqtt mqtt1;
  struct mgos_config_shadow shadow;
  struct mgos_config_aws aws;
  struct mgos_config_http http;
  struct mgos_config_mjs mjs;
  struct mgos_config_rpc rpc;
  struct mgos_config_wifi wifi;
  struct mgos_config_board board;
  struct mgos_config_app app;
};


const struct mgos_conf_entry *mgos_config_schema();

/* Parametrized accessor prototypes {{{ */
#define MGOS_CONFIG_HAVE_DEBUG
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_LEVEL
int         mgos_config_get_debug_level(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_FILE_LEVEL
const char *mgos_config_get_debug_file_level(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_UART
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_UART
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_TOPIC
const char *mgos_config_get_debug_stdout_topic(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_TOPIC
const char *mgos_config_get_debug_stderr_topic(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEVICE
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEVICE_ID
const char *mgos_config_get_device_id(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEVICE_LICENSE
const char *mgos_config_get_device_license(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_MOUNT
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_MOUNT_PATH
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_MOUNT_DEV_TYPE
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_MOUNT_DEV_OPTS
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_MOUNT_FS_TYPE
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_MOUNT_FS_OPTS
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_TZ_SPEC
const char *mgos_config_get_sys_tz_spec(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_WDT_TIMEOUT
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_PREF_OTA_LIB
const char *mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_ESP32_ADC_VREF
int         mgos_config_get_sys_esp32_adc_vref(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_ESP32_ADC_WIDTH
int         mgos_config_get_sys_esp32_adc_width(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_ATCA
const struct mgos_config_sys_atca *mgos_config_get_sys_atca(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_ATCA_ENABLE
int         mgos_config_get_sys_atca_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
int         mgos_config_get_sys_atca_i2c_bus(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
int         mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
int         mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_CONF_ACL
const char *mgos_config_get_conf_acl(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C
const struct mgos_config_i2c *mgos_config_get_i2c(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C_UNIT_NO
int         mgos_config_get_i2c_unit_no(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C_ENABLE
int         mgos_config_get_i2c_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C_FREQ
int         mgos_config_get_i2c_freq(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C_DEBUG
int         mgos_config_get_i2c_debug(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C_SDA_GPIO
int         mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C_SCL_GPIO
int         mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1
const struct mgos_config_i2c *mgos_config_get_i2c1(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1_UNIT_NO
int         mgos_config_get_i2c1_unit_no(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1_ENABLE
int         mgos_config_get_i2c1_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1_FREQ
int         mgos_config_get_i2c1_freq(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1_DEBUG
int         mgos_config_get_i2c1_debug(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1_SDA_GPIO
int         mgos_config_get_i2c1_sda_gpio(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1_SCL_GPIO
int         mgos_config_get_i2c1_scl_gpio(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT
const struct mgos_config_mqtt *mgos_config_get_mqtt(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_ENABLE
int         mgos_config_get_mqtt_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_SERVER
const char *mgos_config_get_mqtt_server(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_CLIENT_ID
const char *mgos_config_get_mqtt_client_id(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_USER
const char *mgos_config_get_mqtt_user(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_PASS
const char *mgos_config_get_mqtt_pass(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MIN
double      mgos_config_get_mqtt_reconnect_timeout_min(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MAX
double      mgos_config_get_mqtt_reconnect_timeout_max(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_SSL_CERT
const char *mgos_config_get_mqtt_ssl_cert(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_SSL_KEY
const char *mgos_config_get_mqtt_ssl_key(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_SSL_CA_CERT
const char *mgos_config_get_mqtt_ssl_ca_cert(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_SSL_CIPHER_SUITES
const char *mgos_config_get_mqtt_ssl_cipher_suites(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_SSL_PSK_IDENTITY
const char *mgos_config_get_mqtt_ssl_psk_identity(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_SSL_PSK_KEY
const char *mgos_config_get_mqtt_ssl_psk_key(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_CLEAN_SESSION
int         mgos_config_get_mqtt_clean_session(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_KEEP_ALIVE
int         mgos_config_get_mqtt_keep_alive(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_WILL_TOPIC
const char *mgos_config_get_mqtt_will_topic(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_WILL_MESSAGE
const char *mgos_config_get_mqtt_will_message(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_MAX_QOS
int         mgos_config_get_mqtt_max_qos(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_RECV_MBUF_LIMIT
int         mgos_config_get_mqtt_recv_mbuf_limit(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_REQUIRE_TIME
int         mgos_config_get_mqtt_require_time(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT_CLOUD_EVENTS
int         mgos_config_get_mqtt_cloud_events(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1
const struct mgos_config_mqtt *mgos_config_get_mqtt1(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_ENABLE
int         mgos_config_get_mqtt1_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_SERVER
const char *mgos_config_get_mqtt1_server(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_CLIENT_ID
const char *mgos_config_get_mqtt1_client_id(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_USER
const char *mgos_config_get_mqtt1_user(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_PASS
const char *mgos_config_get_mqtt1_pass(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MIN
double      mgos_config_get_mqtt1_reconnect_timeout_min(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MAX
double      mgos_config_get_mqtt1_reconnect_timeout_max(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CERT
const char *mgos_config_get_mqtt1_ssl_cert(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_SSL_KEY
const char *mgos_config_get_mqtt1_ssl_key(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CA_CERT
const char *mgos_config_get_mqtt1_ssl_ca_cert(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CIPHER_SUITES
const char *mgos_config_get_mqtt1_ssl_cipher_suites(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_SSL_PSK_IDENTITY
const char *mgos_config_get_mqtt1_ssl_psk_identity(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_SSL_PSK_KEY
const char *mgos_config_get_mqtt1_ssl_psk_key(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_CLEAN_SESSION
int         mgos_config_get_mqtt1_clean_session(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_KEEP_ALIVE
int         mgos_config_get_mqtt1_keep_alive(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_WILL_TOPIC
const char *mgos_config_get_mqtt1_will_topic(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_WILL_MESSAGE
const char *mgos_config_get_mqtt1_will_message(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_MAX_QOS
int         mgos_config_get_mqtt1_max_qos(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_RECV_MBUF_LIMIT
int         mgos_config_get_mqtt1_recv_mbuf_limit(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_REQUIRE_TIME
int         mgos_config_get_mqtt1_require_time(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MQTT1_CLOUD_EVENTS
int         mgos_config_get_mqtt1_cloud_events(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SHADOW
const struct mgos_config_shadow *mgos_config_get_shadow(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SHADOW_ENABLE
int         mgos_config_get_shadow_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SHADOW_LIB
const char *mgos_config_get_shadow_lib(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_AWS
const struct mgos_config_aws *mgos_config_get_aws(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_AWS_THING_NAME
const char *mgos_config_get_aws_thing_name(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_AWS_GREENGRASS
const struct mgos_config_aws_greengrass *mgos_config_get_aws_greengrass(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_AWS_GREENGRASS_ENABLE
int         mgos_config_get_aws_greengrass_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_AWS_GREENGRASS_RECONNECT_TIMEOUT_MIN
int         mgos_config_get_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_AWS_GREENGRASS_RECONNECT_TIMEOUT_MAX
int         mgos_config_get_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_HTTP
const struct mgos_config_http *mgos_config_get_http(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_HTTP_ENABLE
int         mgos_config_get_http_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_HTTP_LISTEN_ADDR
const char *mgos_config_get_http_listen_addr(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_HTTP_DOCUMENT_ROOT
const char *mgos_config_get_http_document_root(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_HTTP_SSL_CERT
const char *mgos_config_get_http_ssl_cert(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_HTTP_SSL_KEY
const char *mgos_config_get_http_ssl_key(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_HTTP_SSL_CA_CERT
const char *mgos_config_get_http_ssl_ca_cert(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_HTTP_UPLOAD_ACL
const char *mgos_config_get_http_upload_acl(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_HTTP_HIDDEN_FILES
const char *mgos_config_get_http_hidden_files(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_HTTP_AUTH_DOMAIN
const char *mgos_config_get_http_auth_domain(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_HTTP_AUTH_FILE
const char *mgos_config_get_http_auth_file(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MJS
const struct mgos_config_mjs *mgos_config_get_mjs(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_MJS_GENERATE_JSC
int         mgos_config_get_mjs_generate_jsc(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC
const struct mgos_config_rpc *mgos_config_get_rpc(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC_ENABLE
int         mgos_config_get_rpc_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
int         mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
int         mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
int         mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC_ACL_FILE
const char *mgos_config_get_rpc_acl_file(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC_AUTH_DOMAIN
const char *mgos_config_get_rpc_auth_domain(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC_AUTH_FILE
const char *mgos_config_get_rpc_auth_file(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC_UART
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC_UART_UART_NO
int         mgos_config_get_rpc_uart_uart_no(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC_UART_BAUD_RATE
int         mgos_config_get_rpc_uart_baud_rate(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC_UART_FC_TYPE
int         mgos_config_get_rpc_uart_fc_type(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_RPC_UART_DST
const char *mgos_config_get_rpc_uart_dst(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI
const struct mgos_config_wifi *mgos_config_get_wifi(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_ENABLE
int         mgos_config_get_wifi_ap_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_SSID
const char *mgos_config_get_wifi_ap_ssid(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_PASS
const char *mgos_config_get_wifi_ap_pass(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_HIDDEN
int         mgos_config_get_wifi_ap_hidden(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_CHANNEL
int         mgos_config_get_wifi_ap_channel(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
int         mgos_config_get_wifi_ap_max_connections(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_IP
const char *mgos_config_get_wifi_ap_ip(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_NETMASK
const char *mgos_config_get_wifi_ap_netmask(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_GW
const char *mgos_config_get_wifi_ap_gw(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_START
const char *mgos_config_get_wifi_ap_dhcp_start(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_END
const char *mgos_config_get_wifi_ap_dhcp_end(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
int         mgos_config_get_wifi_ap_trigger_on_gpio(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
int         mgos_config_get_wifi_ap_disable_after(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_HOSTNAME
const char *mgos_config_get_wifi_ap_hostname(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
int         mgos_config_get_wifi_ap_keep_enabled(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_ENABLE
int         mgos_config_get_wifi_sta_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_SSID
const char *mgos_config_get_wifi_sta_ssid(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_PASS
const char *mgos_config_get_wifi_sta_pass(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_USER
const char *mgos_config_get_wifi_sta_user(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
const char *mgos_config_get_wifi_sta_anon_identity(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_CERT
const char *mgos_config_get_wifi_sta_cert(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_KEY
const char *mgos_config_get_wifi_sta_key(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_CA_CERT
const char *mgos_config_get_wifi_sta_ca_cert(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_IP
const char *mgos_config_get_wifi_sta_ip(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_NETMASK
const char *mgos_config_get_wifi_sta_netmask(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_GW
const char *mgos_config_get_wifi_sta_gw(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_NAMESERVER
const char *mgos_config_get_wifi_sta_nameserver(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
const char *mgos_config_get_wifi_sta_dhcp_hostname(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta1(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_ENABLE
int         mgos_config_get_wifi_sta1_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_SSID
const char *mgos_config_get_wifi_sta1_ssid(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_PASS
const char *mgos_config_get_wifi_sta1_pass(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_USER
const char *mgos_config_get_wifi_sta1_user(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
const char *mgos_config_get_wifi_sta1_anon_identity(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_CERT
const char *mgos_config_get_wifi_sta1_cert(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_KEY
const char *mgos_config_get_wifi_sta1_key(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_CA_CERT
const char *mgos_config_get_wifi_sta1_ca_cert(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_IP
const char *mgos_config_get_wifi_sta1_ip(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_NETMASK
const char *mgos_config_get_wifi_sta1_netmask(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_GW
const char *mgos_config_get_wifi_sta1_gw(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
const char *mgos_config_get_wifi_sta1_nameserver(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
const char *mgos_config_get_wifi_sta1_dhcp_hostname(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta2(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_ENABLE
int         mgos_config_get_wifi_sta2_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_SSID
const char *mgos_config_get_wifi_sta2_ssid(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_PASS
const char *mgos_config_get_wifi_sta2_pass(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_USER
const char *mgos_config_get_wifi_sta2_user(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
const char *mgos_config_get_wifi_sta2_anon_identity(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_CERT
const char *mgos_config_get_wifi_sta2_cert(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_KEY
const char *mgos_config_get_wifi_sta2_key(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_CA_CERT
const char *mgos_config_get_wifi_sta2_ca_cert(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_IP
const char *mgos_config_get_wifi_sta2_ip(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_NETMASK
const char *mgos_config_get_wifi_sta2_netmask(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_GW
const char *mgos_config_get_wifi_sta2_gw(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
const char *mgos_config_get_wifi_sta2_nameserver(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
const char *mgos_config_get_wifi_sta2_dhcp_hostname(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_CFG_IDX
int         mgos_config_get_wifi_sta_cfg_idx(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
int         mgos_config_get_wifi_sta_connect_timeout(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD
const struct mgos_config_board *mgos_config_get_board(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_LED1
const struct mgos_config_board_led1 *mgos_config_get_board_led1(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_LED1_PIN
int         mgos_config_get_board_led1_pin(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_LED1_ACTIVE_HIGH
int         mgos_config_get_board_led1_active_high(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_LED2
const struct mgos_config_board_led2 *mgos_config_get_board_led2(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_LED2_PIN
int         mgos_config_get_board_led2_pin(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_LED2_ACTIVE_HIGH
int         mgos_config_get_board_led2_active_high(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_LED3
const struct mgos_config_board_led3 *mgos_config_get_board_led3(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_LED3_PIN
int         mgos_config_get_board_led3_pin(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_LED3_ACTIVE_HIGH
int         mgos_config_get_board_led3_active_high(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_BTN1
const struct mgos_config_board_btn1 *mgos_config_get_board_btn1(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_BTN1_PIN
int         mgos_config_get_board_btn1_pin(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_BTN1_PULL_UP
int         mgos_config_get_board_btn1_pull_up(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_BTN2
const struct mgos_config_board_btn2 *mgos_config_get_board_btn2(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_BTN2_PIN
int         mgos_config_get_board_btn2_pin(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_BTN2_PULL_UP
int         mgos_config_get_board_btn2_pull_up(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_BTN3
const struct mgos_config_board_btn3 *mgos_config_get_board_btn3(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_BTN3_PIN
int         mgos_config_get_board_btn3_pin(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BOARD_BTN3_PULL_UP
int         mgos_config_get_board_btn3_pull_up(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_APP
const struct mgos_config_app *mgos_config_get_app(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_APP_DHTPIN
int         mgos_config_get_app_dhtPin(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_APP_MQPIN
int         mgos_config_get_app_mqPin(struct mgos_config *cfg);

void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_device_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_device_license(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_esp32_adc_vref(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_esp32_adc_width(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_i2c_bus(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int         val);
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val);
void mgos_config_set_i2c_unit_no(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c1_unit_no(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c1_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c1_freq(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c1_debug(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c1_sda_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c1_scl_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double      val);
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double      val);
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_require_time(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_cloud_events(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt1_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt1_server(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_client_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_reconnect_timeout_min(struct mgos_config *cfg, double      val);
void mgos_config_set_mqtt1_reconnect_timeout_max(struct mgos_config *cfg, double      val);
void mgos_config_set_mqtt1_ssl_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_ssl_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_ssl_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_ssl_cipher_suites(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_ssl_psk_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_ssl_psk_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_clean_session(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt1_keep_alive(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt1_will_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_will_message(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_max_qos(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt1_recv_mbuf_limit(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt1_require_time(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt1_cloud_events(struct mgos_config *cfg, int         val);
void mgos_config_set_shadow_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_shadow_lib(struct mgos_config *cfg, const char *val);
void mgos_config_set_aws_thing_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_aws_greengrass_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg, int         val);
void mgos_config_set_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg, int         val);
void mgos_config_set_http_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_http_listen_addr(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_document_root(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_ssl_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_ssl_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_ssl_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_upload_acl(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_hidden_files(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_auth_domain(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_auth_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_board_led1_pin(struct mgos_config *cfg, int         val);
void mgos_config_set_board_led1_active_high(struct mgos_config *cfg, int         val);
void mgos_config_set_board_led2_pin(struct mgos_config *cfg, int         val);
void mgos_config_set_board_led2_active_high(struct mgos_config *cfg, int         val);
void mgos_config_set_board_led3_pin(struct mgos_config *cfg, int         val);
void mgos_config_set_board_led3_active_high(struct mgos_config *cfg, int         val);
void mgos_config_set_board_btn1_pin(struct mgos_config *cfg, int         val);
void mgos_config_set_board_btn1_pull_up(struct mgos_config *cfg, int         val);
void mgos_config_set_board_btn2_pin(struct mgos_config *cfg, int         val);
void mgos_config_set_board_btn2_pull_up(struct mgos_config *cfg, int         val);
void mgos_config_set_board_btn3_pin(struct mgos_config *cfg, int         val);
void mgos_config_set_board_btn3_pull_up(struct mgos_config *cfg, int         val);
void mgos_config_set_app_dhtPin(struct mgos_config *cfg, int         val);
void mgos_config_set_app_mqPin(struct mgos_config *cfg, int         val);
/* }}} */

extern struct mgos_config mgos_sys_config;

static inline bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) { return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema()); }
static inline bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) { return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings); }

#define MGOS_SYS_CONFIG_HAVE_DEBUG
static inline const struct mgos_config_debug *mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
static inline const char *mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_LEVEL
static inline int         mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FILE_LEVEL
static inline const char *mgos_sys_config_get_debug_file_level(void) { return mgos_config_get_debug_file_level(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_UART
static inline int         mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_UART
static inline int         mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
static inline int         mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
static inline const char *mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
static inline int         mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_TOPIC
static inline const char *mgos_sys_config_get_debug_stdout_topic(void) { return mgos_config_get_debug_stdout_topic(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_TOPIC
static inline const char *mgos_sys_config_get_debug_stderr_topic(void) { return mgos_config_get_debug_stderr_topic(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEVICE
static inline const struct mgos_config_device *mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEVICE_ID
static inline const char *mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEVICE_LICENSE
static inline const char *mgos_sys_config_get_device_license(void) { return mgos_config_get_device_license(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS
static inline const struct mgos_config_sys *mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT
static inline const struct mgos_config_sys_mount *mgos_sys_config_get_sys_mount(void) { return mgos_config_get_sys_mount(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_PATH
static inline const char *mgos_sys_config_get_sys_mount_path(void) { return mgos_config_get_sys_mount_path(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_DEV_TYPE
static inline const char *mgos_sys_config_get_sys_mount_dev_type(void) { return mgos_config_get_sys_mount_dev_type(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_DEV_OPTS
static inline const char *mgos_sys_config_get_sys_mount_dev_opts(void) { return mgos_config_get_sys_mount_dev_opts(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_FS_TYPE
static inline const char *mgos_sys_config_get_sys_mount_fs_type(void) { return mgos_config_get_sys_mount_fs_type(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_FS_OPTS
static inline const char *mgos_sys_config_get_sys_mount_fs_opts(void) { return mgos_config_get_sys_mount_fs_opts(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_TZ_SPEC
static inline const char *mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_WDT_TIMEOUT
static inline int         mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_PREF_OTA_LIB
static inline const char *mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_ESP32_ADC_VREF
static inline int         mgos_sys_config_get_sys_esp32_adc_vref(void) { return mgos_config_get_sys_esp32_adc_vref(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_ESP32_ADC_WIDTH
static inline int         mgos_sys_config_get_sys_esp32_adc_width(void) { return mgos_config_get_sys_esp32_adc_width(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA
static inline const struct mgos_config_sys_atca *mgos_sys_config_get_sys_atca(void) { return mgos_config_get_sys_atca(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ENABLE
static inline int         mgos_sys_config_get_sys_atca_enable(void) { return mgos_config_get_sys_atca_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
static inline int         mgos_sys_config_get_sys_atca_i2c_bus(void) { return mgos_config_get_sys_atca_i2c_bus(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
static inline int         mgos_sys_config_get_sys_atca_i2c_addr(void) { return mgos_config_get_sys_atca_i2c_addr(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
static inline int         mgos_sys_config_get_sys_atca_ecdh_slots_mask(void) { return mgos_config_get_sys_atca_ecdh_slots_mask(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_CONF_ACL
static inline const char *mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C
static inline const struct mgos_config_i2c *mgos_sys_config_get_i2c(void) { return mgos_config_get_i2c(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C_UNIT_NO
static inline int         mgos_sys_config_get_i2c_unit_no(void) { return mgos_config_get_i2c_unit_no(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C_ENABLE
static inline int         mgos_sys_config_get_i2c_enable(void) { return mgos_config_get_i2c_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C_FREQ
static inline int         mgos_sys_config_get_i2c_freq(void) { return mgos_config_get_i2c_freq(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C_DEBUG
static inline int         mgos_sys_config_get_i2c_debug(void) { return mgos_config_get_i2c_debug(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C_SDA_GPIO
static inline int         mgos_sys_config_get_i2c_sda_gpio(void) { return mgos_config_get_i2c_sda_gpio(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C_SCL_GPIO
static inline int         mgos_sys_config_get_i2c_scl_gpio(void) { return mgos_config_get_i2c_scl_gpio(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1
static inline const struct mgos_config_i2c *mgos_sys_config_get_i2c1(void) { return mgos_config_get_i2c1(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1_UNIT_NO
static inline int         mgos_sys_config_get_i2c1_unit_no(void) { return mgos_config_get_i2c1_unit_no(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1_ENABLE
static inline int         mgos_sys_config_get_i2c1_enable(void) { return mgos_config_get_i2c1_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1_FREQ
static inline int         mgos_sys_config_get_i2c1_freq(void) { return mgos_config_get_i2c1_freq(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1_DEBUG
static inline int         mgos_sys_config_get_i2c1_debug(void) { return mgos_config_get_i2c1_debug(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1_SDA_GPIO
static inline int         mgos_sys_config_get_i2c1_sda_gpio(void) { return mgos_config_get_i2c1_sda_gpio(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1_SCL_GPIO
static inline int         mgos_sys_config_get_i2c1_scl_gpio(void) { return mgos_config_get_i2c1_scl_gpio(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT
static inline const struct mgos_config_mqtt *mgos_sys_config_get_mqtt(void) { return mgos_config_get_mqtt(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_ENABLE
static inline int         mgos_sys_config_get_mqtt_enable(void) { return mgos_config_get_mqtt_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_SERVER
static inline const char *mgos_sys_config_get_mqtt_server(void) { return mgos_config_get_mqtt_server(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLIENT_ID
static inline const char *mgos_sys_config_get_mqtt_client_id(void) { return mgos_config_get_mqtt_client_id(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_USER
static inline const char *mgos_sys_config_get_mqtt_user(void) { return mgos_config_get_mqtt_user(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_PASS
static inline const char *mgos_sys_config_get_mqtt_pass(void) { return mgos_config_get_mqtt_pass(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MIN
static inline double      mgos_sys_config_get_mqtt_reconnect_timeout_min(void) { return mgos_config_get_mqtt_reconnect_timeout_min(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MAX
static inline double      mgos_sys_config_get_mqtt_reconnect_timeout_max(void) { return mgos_config_get_mqtt_reconnect_timeout_max(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CERT
static inline const char *mgos_sys_config_get_mqtt_ssl_cert(void) { return mgos_config_get_mqtt_ssl_cert(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_KEY
static inline const char *mgos_sys_config_get_mqtt_ssl_key(void) { return mgos_config_get_mqtt_ssl_key(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CA_CERT
static inline const char *mgos_sys_config_get_mqtt_ssl_ca_cert(void) { return mgos_config_get_mqtt_ssl_ca_cert(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CIPHER_SUITES
static inline const char *mgos_sys_config_get_mqtt_ssl_cipher_suites(void) { return mgos_config_get_mqtt_ssl_cipher_suites(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_PSK_IDENTITY
static inline const char *mgos_sys_config_get_mqtt_ssl_psk_identity(void) { return mgos_config_get_mqtt_ssl_psk_identity(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_PSK_KEY
static inline const char *mgos_sys_config_get_mqtt_ssl_psk_key(void) { return mgos_config_get_mqtt_ssl_psk_key(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLEAN_SESSION
static inline int         mgos_sys_config_get_mqtt_clean_session(void) { return mgos_config_get_mqtt_clean_session(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_KEEP_ALIVE
static inline int         mgos_sys_config_get_mqtt_keep_alive(void) { return mgos_config_get_mqtt_keep_alive(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_TOPIC
static inline const char *mgos_sys_config_get_mqtt_will_topic(void) { return mgos_config_get_mqtt_will_topic(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_MESSAGE
static inline const char *mgos_sys_config_get_mqtt_will_message(void) { return mgos_config_get_mqtt_will_message(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_MAX_QOS
static inline int         mgos_sys_config_get_mqtt_max_qos(void) { return mgos_config_get_mqtt_max_qos(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECV_MBUF_LIMIT
static inline int         mgos_sys_config_get_mqtt_recv_mbuf_limit(void) { return mgos_config_get_mqtt_recv_mbuf_limit(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_REQUIRE_TIME
static inline int         mgos_sys_config_get_mqtt_require_time(void) { return mgos_config_get_mqtt_require_time(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLOUD_EVENTS
static inline int         mgos_sys_config_get_mqtt_cloud_events(void) { return mgos_config_get_mqtt_cloud_events(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1
static inline const struct mgos_config_mqtt *mgos_sys_config_get_mqtt1(void) { return mgos_config_get_mqtt1(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_ENABLE
static inline int         mgos_sys_config_get_mqtt1_enable(void) { return mgos_config_get_mqtt1_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SERVER
static inline const char *mgos_sys_config_get_mqtt1_server(void) { return mgos_config_get_mqtt1_server(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLIENT_ID
static inline const char *mgos_sys_config_get_mqtt1_client_id(void) { return mgos_config_get_mqtt1_client_id(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_USER
static inline const char *mgos_sys_config_get_mqtt1_user(void) { return mgos_config_get_mqtt1_user(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_PASS
static inline const char *mgos_sys_config_get_mqtt1_pass(void) { return mgos_config_get_mqtt1_pass(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MIN
static inline double      mgos_sys_config_get_mqtt1_reconnect_timeout_min(void) { return mgos_config_get_mqtt1_reconnect_timeout_min(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MAX
static inline double      mgos_sys_config_get_mqtt1_reconnect_timeout_max(void) { return mgos_config_get_mqtt1_reconnect_timeout_max(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CERT
static inline const char *mgos_sys_config_get_mqtt1_ssl_cert(void) { return mgos_config_get_mqtt1_ssl_cert(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_KEY
static inline const char *mgos_sys_config_get_mqtt1_ssl_key(void) { return mgos_config_get_mqtt1_ssl_key(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CA_CERT
static inline const char *mgos_sys_config_get_mqtt1_ssl_ca_cert(void) { return mgos_config_get_mqtt1_ssl_ca_cert(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CIPHER_SUITES
static inline const char *mgos_sys_config_get_mqtt1_ssl_cipher_suites(void) { return mgos_config_get_mqtt1_ssl_cipher_suites(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_PSK_IDENTITY
static inline const char *mgos_sys_config_get_mqtt1_ssl_psk_identity(void) { return mgos_config_get_mqtt1_ssl_psk_identity(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_PSK_KEY
static inline const char *mgos_sys_config_get_mqtt1_ssl_psk_key(void) { return mgos_config_get_mqtt1_ssl_psk_key(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLEAN_SESSION
static inline int         mgos_sys_config_get_mqtt1_clean_session(void) { return mgos_config_get_mqtt1_clean_session(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_KEEP_ALIVE
static inline int         mgos_sys_config_get_mqtt1_keep_alive(void) { return mgos_config_get_mqtt1_keep_alive(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_TOPIC
static inline const char *mgos_sys_config_get_mqtt1_will_topic(void) { return mgos_config_get_mqtt1_will_topic(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_MESSAGE
static inline const char *mgos_sys_config_get_mqtt1_will_message(void) { return mgos_config_get_mqtt1_will_message(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_MAX_QOS
static inline int         mgos_sys_config_get_mqtt1_max_qos(void) { return mgos_config_get_mqtt1_max_qos(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECV_MBUF_LIMIT
static inline int         mgos_sys_config_get_mqtt1_recv_mbuf_limit(void) { return mgos_config_get_mqtt1_recv_mbuf_limit(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_REQUIRE_TIME
static inline int         mgos_sys_config_get_mqtt1_require_time(void) { return mgos_config_get_mqtt1_require_time(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLOUD_EVENTS
static inline int         mgos_sys_config_get_mqtt1_cloud_events(void) { return mgos_config_get_mqtt1_cloud_events(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SHADOW
static inline const struct mgos_config_shadow *mgos_sys_config_get_shadow(void) { return mgos_config_get_shadow(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SHADOW_ENABLE
static inline int         mgos_sys_config_get_shadow_enable(void) { return mgos_config_get_shadow_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SHADOW_LIB
static inline const char *mgos_sys_config_get_shadow_lib(void) { return mgos_config_get_shadow_lib(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_AWS
static inline const struct mgos_config_aws *mgos_sys_config_get_aws(void) { return mgos_config_get_aws(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_AWS_THING_NAME
static inline const char *mgos_sys_config_get_aws_thing_name(void) { return mgos_config_get_aws_thing_name(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_AWS_GREENGRASS
static inline const struct mgos_config_aws_greengrass *mgos_sys_config_get_aws_greengrass(void) { return mgos_config_get_aws_greengrass(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_AWS_GREENGRASS_ENABLE
static inline int         mgos_sys_config_get_aws_greengrass_enable(void) { return mgos_config_get_aws_greengrass_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_AWS_GREENGRASS_RECONNECT_TIMEOUT_MIN
static inline int         mgos_sys_config_get_aws_greengrass_reconnect_timeout_min(void) { return mgos_config_get_aws_greengrass_reconnect_timeout_min(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_AWS_GREENGRASS_RECONNECT_TIMEOUT_MAX
static inline int         mgos_sys_config_get_aws_greengrass_reconnect_timeout_max(void) { return mgos_config_get_aws_greengrass_reconnect_timeout_max(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_HTTP
static inline const struct mgos_config_http *mgos_sys_config_get_http(void) { return mgos_config_get_http(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_HTTP_ENABLE
static inline int         mgos_sys_config_get_http_enable(void) { return mgos_config_get_http_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_HTTP_LISTEN_ADDR
static inline const char *mgos_sys_config_get_http_listen_addr(void) { return mgos_config_get_http_listen_addr(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_HTTP_DOCUMENT_ROOT
static inline const char *mgos_sys_config_get_http_document_root(void) { return mgos_config_get_http_document_root(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_HTTP_SSL_CERT
static inline const char *mgos_sys_config_get_http_ssl_cert(void) { return mgos_config_get_http_ssl_cert(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_HTTP_SSL_KEY
static inline const char *mgos_sys_config_get_http_ssl_key(void) { return mgos_config_get_http_ssl_key(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_HTTP_SSL_CA_CERT
static inline const char *mgos_sys_config_get_http_ssl_ca_cert(void) { return mgos_config_get_http_ssl_ca_cert(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_HTTP_UPLOAD_ACL
static inline const char *mgos_sys_config_get_http_upload_acl(void) { return mgos_config_get_http_upload_acl(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_HTTP_HIDDEN_FILES
static inline const char *mgos_sys_config_get_http_hidden_files(void) { return mgos_config_get_http_hidden_files(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_HTTP_AUTH_DOMAIN
static inline const char *mgos_sys_config_get_http_auth_domain(void) { return mgos_config_get_http_auth_domain(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_HTTP_AUTH_FILE
static inline const char *mgos_sys_config_get_http_auth_file(void) { return mgos_config_get_http_auth_file(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MJS
static inline const struct mgos_config_mjs *mgos_sys_config_get_mjs(void) { return mgos_config_get_mjs(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_MJS_GENERATE_JSC
static inline int         mgos_sys_config_get_mjs_generate_jsc(void) { return mgos_config_get_mjs_generate_jsc(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC
static inline const struct mgos_config_rpc *mgos_sys_config_get_rpc(void) { return mgos_config_get_rpc(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC_ENABLE
static inline int         mgos_sys_config_get_rpc_enable(void) { return mgos_config_get_rpc_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
static inline int         mgos_sys_config_get_rpc_max_frame_size(void) { return mgos_config_get_rpc_max_frame_size(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
static inline int         mgos_sys_config_get_rpc_max_queue_length(void) { return mgos_config_get_rpc_max_queue_length(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
static inline int         mgos_sys_config_get_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC_ACL_FILE
static inline const char *mgos_sys_config_get_rpc_acl_file(void) { return mgos_config_get_rpc_acl_file(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_DOMAIN
static inline const char *mgos_sys_config_get_rpc_auth_domain(void) { return mgos_config_get_rpc_auth_domain(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_FILE
static inline const char *mgos_sys_config_get_rpc_auth_file(void) { return mgos_config_get_rpc_auth_file(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC_UART
static inline const struct mgos_config_rpc_uart *mgos_sys_config_get_rpc_uart(void) { return mgos_config_get_rpc_uart(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_UART_NO
static inline int         mgos_sys_config_get_rpc_uart_uart_no(void) { return mgos_config_get_rpc_uart_uart_no(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_BAUD_RATE
static inline int         mgos_sys_config_get_rpc_uart_baud_rate(void) { return mgos_config_get_rpc_uart_baud_rate(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_FC_TYPE
static inline int         mgos_sys_config_get_rpc_uart_fc_type(void) { return mgos_config_get_rpc_uart_fc_type(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_DST
static inline const char *mgos_sys_config_get_rpc_uart_dst(void) { return mgos_config_get_rpc_uart_dst(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI
static inline const struct mgos_config_wifi *mgos_sys_config_get_wifi(void) { return mgos_config_get_wifi(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP
static inline const struct mgos_config_wifi_ap *mgos_sys_config_get_wifi_ap(void) { return mgos_config_get_wifi_ap(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_ENABLE
static inline int         mgos_sys_config_get_wifi_ap_enable(void) { return mgos_config_get_wifi_ap_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_SSID
static inline const char *mgos_sys_config_get_wifi_ap_ssid(void) { return mgos_config_get_wifi_ap_ssid(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_PASS
static inline const char *mgos_sys_config_get_wifi_ap_pass(void) { return mgos_config_get_wifi_ap_pass(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HIDDEN
static inline int         mgos_sys_config_get_wifi_ap_hidden(void) { return mgos_config_get_wifi_ap_hidden(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_CHANNEL
static inline int         mgos_sys_config_get_wifi_ap_channel(void) { return mgos_config_get_wifi_ap_channel(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
static inline int         mgos_sys_config_get_wifi_ap_max_connections(void) { return mgos_config_get_wifi_ap_max_connections(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_IP
static inline const char *mgos_sys_config_get_wifi_ap_ip(void) { return mgos_config_get_wifi_ap_ip(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_NETMASK
static inline const char *mgos_sys_config_get_wifi_ap_netmask(void) { return mgos_config_get_wifi_ap_netmask(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_GW
static inline const char *mgos_sys_config_get_wifi_ap_gw(void) { return mgos_config_get_wifi_ap_gw(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_START
static inline const char *mgos_sys_config_get_wifi_ap_dhcp_start(void) { return mgos_config_get_wifi_ap_dhcp_start(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_END
static inline const char *mgos_sys_config_get_wifi_ap_dhcp_end(void) { return mgos_config_get_wifi_ap_dhcp_end(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
static inline int         mgos_sys_config_get_wifi_ap_trigger_on_gpio(void) { return mgos_config_get_wifi_ap_trigger_on_gpio(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
static inline int         mgos_sys_config_get_wifi_ap_disable_after(void) { return mgos_config_get_wifi_ap_disable_after(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HOSTNAME
static inline const char *mgos_sys_config_get_wifi_ap_hostname(void) { return mgos_config_get_wifi_ap_hostname(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
static inline int         mgos_sys_config_get_wifi_ap_keep_enabled(void) { return mgos_config_get_wifi_ap_keep_enabled(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta(void) { return mgos_config_get_wifi_sta(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ENABLE
static inline int         mgos_sys_config_get_wifi_sta_enable(void) { return mgos_config_get_wifi_sta_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_SSID
static inline const char *mgos_sys_config_get_wifi_sta_ssid(void) { return mgos_config_get_wifi_sta_ssid(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_PASS
static inline const char *mgos_sys_config_get_wifi_sta_pass(void) { return mgos_config_get_wifi_sta_pass(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_USER
static inline const char *mgos_sys_config_get_wifi_sta_user(void) { return mgos_config_get_wifi_sta_user(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
static inline const char *mgos_sys_config_get_wifi_sta_anon_identity(void) { return mgos_config_get_wifi_sta_anon_identity(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CERT
static inline const char *mgos_sys_config_get_wifi_sta_cert(void) { return mgos_config_get_wifi_sta_cert(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_KEY
static inline const char *mgos_sys_config_get_wifi_sta_key(void) { return mgos_config_get_wifi_sta_key(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CA_CERT
static inline const char *mgos_sys_config_get_wifi_sta_ca_cert(void) { return mgos_config_get_wifi_sta_ca_cert(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_IP
static inline const char *mgos_sys_config_get_wifi_sta_ip(void) { return mgos_config_get_wifi_sta_ip(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NETMASK
static inline const char *mgos_sys_config_get_wifi_sta_netmask(void) { return mgos_config_get_wifi_sta_netmask(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_GW
static inline const char *mgos_sys_config_get_wifi_sta_gw(void) { return mgos_config_get_wifi_sta_gw(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NAMESERVER
static inline const char *mgos_sys_config_get_wifi_sta_nameserver(void) { return mgos_config_get_wifi_sta_nameserver(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
static inline const char *mgos_sys_config_get_wifi_sta_dhcp_hostname(void) { return mgos_config_get_wifi_sta_dhcp_hostname(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta1(void) { return mgos_config_get_wifi_sta1(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ENABLE
static inline int         mgos_sys_config_get_wifi_sta1_enable(void) { return mgos_config_get_wifi_sta1_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_SSID
static inline const char *mgos_sys_config_get_wifi_sta1_ssid(void) { return mgos_config_get_wifi_sta1_ssid(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_PASS
static inline const char *mgos_sys_config_get_wifi_sta1_pass(void) { return mgos_config_get_wifi_sta1_pass(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_USER
static inline const char *mgos_sys_config_get_wifi_sta1_user(void) { return mgos_config_get_wifi_sta1_user(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
static inline const char *mgos_sys_config_get_wifi_sta1_anon_identity(void) { return mgos_config_get_wifi_sta1_anon_identity(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CERT
static inline const char *mgos_sys_config_get_wifi_sta1_cert(void) { return mgos_config_get_wifi_sta1_cert(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_KEY
static inline const char *mgos_sys_config_get_wifi_sta1_key(void) { return mgos_config_get_wifi_sta1_key(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CA_CERT
static inline const char *mgos_sys_config_get_wifi_sta1_ca_cert(void) { return mgos_config_get_wifi_sta1_ca_cert(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_IP
static inline const char *mgos_sys_config_get_wifi_sta1_ip(void) { return mgos_config_get_wifi_sta1_ip(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NETMASK
static inline const char *mgos_sys_config_get_wifi_sta1_netmask(void) { return mgos_config_get_wifi_sta1_netmask(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_GW
static inline const char *mgos_sys_config_get_wifi_sta1_gw(void) { return mgos_config_get_wifi_sta1_gw(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
static inline const char *mgos_sys_config_get_wifi_sta1_nameserver(void) { return mgos_config_get_wifi_sta1_nameserver(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
static inline const char *mgos_sys_config_get_wifi_sta1_dhcp_hostname(void) { return mgos_config_get_wifi_sta1_dhcp_hostname(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta2(void) { return mgos_config_get_wifi_sta2(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ENABLE
static inline int         mgos_sys_config_get_wifi_sta2_enable(void) { return mgos_config_get_wifi_sta2_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_SSID
static inline const char *mgos_sys_config_get_wifi_sta2_ssid(void) { return mgos_config_get_wifi_sta2_ssid(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_PASS
static inline const char *mgos_sys_config_get_wifi_sta2_pass(void) { return mgos_config_get_wifi_sta2_pass(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_USER
static inline const char *mgos_sys_config_get_wifi_sta2_user(void) { return mgos_config_get_wifi_sta2_user(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
static inline const char *mgos_sys_config_get_wifi_sta2_anon_identity(void) { return mgos_config_get_wifi_sta2_anon_identity(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CERT
static inline const char *mgos_sys_config_get_wifi_sta2_cert(void) { return mgos_config_get_wifi_sta2_cert(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_KEY
static inline const char *mgos_sys_config_get_wifi_sta2_key(void) { return mgos_config_get_wifi_sta2_key(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CA_CERT
static inline const char *mgos_sys_config_get_wifi_sta2_ca_cert(void) { return mgos_config_get_wifi_sta2_ca_cert(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_IP
static inline const char *mgos_sys_config_get_wifi_sta2_ip(void) { return mgos_config_get_wifi_sta2_ip(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NETMASK
static inline const char *mgos_sys_config_get_wifi_sta2_netmask(void) { return mgos_config_get_wifi_sta2_netmask(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_GW
static inline const char *mgos_sys_config_get_wifi_sta2_gw(void) { return mgos_config_get_wifi_sta2_gw(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
static inline const char *mgos_sys_config_get_wifi_sta2_nameserver(void) { return mgos_config_get_wifi_sta2_nameserver(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
static inline const char *mgos_sys_config_get_wifi_sta2_dhcp_hostname(void) { return mgos_config_get_wifi_sta2_dhcp_hostname(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CFG_IDX
static inline int         mgos_sys_config_get_wifi_sta_cfg_idx(void) { return mgos_config_get_wifi_sta_cfg_idx(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
static inline int         mgos_sys_config_get_wifi_sta_connect_timeout(void) { return mgos_config_get_wifi_sta_connect_timeout(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD
static inline const struct mgos_config_board *mgos_sys_config_get_board(void) { return mgos_config_get_board(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1
static inline const struct mgos_config_board_led1 *mgos_sys_config_get_board_led1(void) { return mgos_config_get_board_led1(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1_PIN
static inline int         mgos_sys_config_get_board_led1_pin(void) { return mgos_config_get_board_led1_pin(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1_ACTIVE_HIGH
static inline int         mgos_sys_config_get_board_led1_active_high(void) { return mgos_config_get_board_led1_active_high(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2
static inline const struct mgos_config_board_led2 *mgos_sys_config_get_board_led2(void) { return mgos_config_get_board_led2(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2_PIN
static inline int         mgos_sys_config_get_board_led2_pin(void) { return mgos_config_get_board_led2_pin(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2_ACTIVE_HIGH
static inline int         mgos_sys_config_get_board_led2_active_high(void) { return mgos_config_get_board_led2_active_high(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3
static inline const struct mgos_config_board_led3 *mgos_sys_config_get_board_led3(void) { return mgos_config_get_board_led3(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3_PIN
static inline int         mgos_sys_config_get_board_led3_pin(void) { return mgos_config_get_board_led3_pin(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3_ACTIVE_HIGH
static inline int         mgos_sys_config_get_board_led3_active_high(void) { return mgos_config_get_board_led3_active_high(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1
static inline const struct mgos_config_board_btn1 *mgos_sys_config_get_board_btn1(void) { return mgos_config_get_board_btn1(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1_PIN
static inline int         mgos_sys_config_get_board_btn1_pin(void) { return mgos_config_get_board_btn1_pin(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1_PULL_UP
static inline int         mgos_sys_config_get_board_btn1_pull_up(void) { return mgos_config_get_board_btn1_pull_up(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2
static inline const struct mgos_config_board_btn2 *mgos_sys_config_get_board_btn2(void) { return mgos_config_get_board_btn2(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2_PIN
static inline int         mgos_sys_config_get_board_btn2_pin(void) { return mgos_config_get_board_btn2_pin(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2_PULL_UP
static inline int         mgos_sys_config_get_board_btn2_pull_up(void) { return mgos_config_get_board_btn2_pull_up(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3
static inline const struct mgos_config_board_btn3 *mgos_sys_config_get_board_btn3(void) { return mgos_config_get_board_btn3(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3_PIN
static inline int         mgos_sys_config_get_board_btn3_pin(void) { return mgos_config_get_board_btn3_pin(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3_PULL_UP
static inline int         mgos_sys_config_get_board_btn3_pull_up(void) { return mgos_config_get_board_btn3_pull_up(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_APP
static inline const struct mgos_config_app *mgos_sys_config_get_app(void) { return mgos_config_get_app(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_APP_DHTPIN
static inline int         mgos_sys_config_get_app_dhtPin(void) { return mgos_config_get_app_dhtPin(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_APP_MQPIN
static inline int         mgos_sys_config_get_app_mqPin(void) { return mgos_config_get_app_mqPin(&mgos_sys_config); }

static inline void mgos_sys_config_set_debug_udp_log_addr(const char *val) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_level(int         val) { mgos_config_set_debug_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_file_level(const char *val) { mgos_config_set_debug_file_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stdout_uart(int         val) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stderr_uart(int         val) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int         val) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char *val) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mbedtls_level(int         val) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stdout_topic(const char *val) { mgos_config_set_debug_stdout_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stderr_topic(const char *val) { mgos_config_set_debug_stderr_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_device_id(const char *val) { mgos_config_set_device_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_device_license(const char *val) { mgos_config_set_device_license(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_path(const char *val) { mgos_config_set_sys_mount_path(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_type(const char *val) { mgos_config_set_sys_mount_dev_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_opts(const char *val) { mgos_config_set_sys_mount_dev_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_type(const char *val) { mgos_config_set_sys_mount_fs_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_opts(const char *val) { mgos_config_set_sys_mount_fs_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_tz_spec(const char *val) { mgos_config_set_sys_tz_spec(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_wdt_timeout(int         val) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char *val) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_esp32_adc_vref(int         val) { mgos_config_set_sys_esp32_adc_vref(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_esp32_adc_width(int         val) { mgos_config_set_sys_esp32_adc_width(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_enable(int         val) { mgos_config_set_sys_atca_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_i2c_bus(int         val) { mgos_config_set_sys_atca_i2c_bus(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_i2c_addr(int         val) { mgos_config_set_sys_atca_i2c_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_ecdh_slots_mask(int         val) { mgos_config_set_sys_atca_ecdh_slots_mask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_conf_acl(const char *val) { mgos_config_set_conf_acl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_unit_no(int         val) { mgos_config_set_i2c_unit_no(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_enable(int         val) { mgos_config_set_i2c_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_freq(int         val) { mgos_config_set_i2c_freq(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_debug(int         val) { mgos_config_set_i2c_debug(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_sda_gpio(int         val) { mgos_config_set_i2c_sda_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_scl_gpio(int         val) { mgos_config_set_i2c_scl_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c1_unit_no(int         val) { mgos_config_set_i2c1_unit_no(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c1_enable(int         val) { mgos_config_set_i2c1_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c1_freq(int         val) { mgos_config_set_i2c1_freq(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c1_debug(int         val) { mgos_config_set_i2c1_debug(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c1_sda_gpio(int         val) { mgos_config_set_i2c1_sda_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c1_scl_gpio(int         val) { mgos_config_set_i2c1_scl_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_enable(int         val) { mgos_config_set_mqtt_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_server(const char *val) { mgos_config_set_mqtt_server(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_client_id(const char *val) { mgos_config_set_mqtt_client_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_user(const char *val) { mgos_config_set_mqtt_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_pass(const char *val) { mgos_config_set_mqtt_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_min(double      val) { mgos_config_set_mqtt_reconnect_timeout_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_max(double      val) { mgos_config_set_mqtt_reconnect_timeout_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_cert(const char *val) { mgos_config_set_mqtt_ssl_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_key(const char *val) { mgos_config_set_mqtt_ssl_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_ca_cert(const char *val) { mgos_config_set_mqtt_ssl_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_cipher_suites(const char *val) { mgos_config_set_mqtt_ssl_cipher_suites(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_psk_identity(const char *val) { mgos_config_set_mqtt_ssl_psk_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_psk_key(const char *val) { mgos_config_set_mqtt_ssl_psk_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_clean_session(int         val) { mgos_config_set_mqtt_clean_session(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_keep_alive(int         val) { mgos_config_set_mqtt_keep_alive(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_will_topic(const char *val) { mgos_config_set_mqtt_will_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_will_message(const char *val) { mgos_config_set_mqtt_will_message(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_max_qos(int         val) { mgos_config_set_mqtt_max_qos(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_recv_mbuf_limit(int         val) { mgos_config_set_mqtt_recv_mbuf_limit(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_require_time(int         val) { mgos_config_set_mqtt_require_time(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_cloud_events(int         val) { mgos_config_set_mqtt_cloud_events(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_enable(int         val) { mgos_config_set_mqtt1_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_server(const char *val) { mgos_config_set_mqtt1_server(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_client_id(const char *val) { mgos_config_set_mqtt1_client_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_user(const char *val) { mgos_config_set_mqtt1_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_pass(const char *val) { mgos_config_set_mqtt1_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_reconnect_timeout_min(double      val) { mgos_config_set_mqtt1_reconnect_timeout_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_reconnect_timeout_max(double      val) { mgos_config_set_mqtt1_reconnect_timeout_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_ssl_cert(const char *val) { mgos_config_set_mqtt1_ssl_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_ssl_key(const char *val) { mgos_config_set_mqtt1_ssl_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_ssl_ca_cert(const char *val) { mgos_config_set_mqtt1_ssl_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_ssl_cipher_suites(const char *val) { mgos_config_set_mqtt1_ssl_cipher_suites(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_ssl_psk_identity(const char *val) { mgos_config_set_mqtt1_ssl_psk_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_ssl_psk_key(const char *val) { mgos_config_set_mqtt1_ssl_psk_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_clean_session(int         val) { mgos_config_set_mqtt1_clean_session(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_keep_alive(int         val) { mgos_config_set_mqtt1_keep_alive(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_will_topic(const char *val) { mgos_config_set_mqtt1_will_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_will_message(const char *val) { mgos_config_set_mqtt1_will_message(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_max_qos(int         val) { mgos_config_set_mqtt1_max_qos(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_recv_mbuf_limit(int         val) { mgos_config_set_mqtt1_recv_mbuf_limit(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_require_time(int         val) { mgos_config_set_mqtt1_require_time(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_cloud_events(int         val) { mgos_config_set_mqtt1_cloud_events(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_shadow_enable(int         val) { mgos_config_set_shadow_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_shadow_lib(const char *val) { mgos_config_set_shadow_lib(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_thing_name(const char *val) { mgos_config_set_aws_thing_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_greengrass_enable(int         val) { mgos_config_set_aws_greengrass_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_greengrass_reconnect_timeout_min(int         val) { mgos_config_set_aws_greengrass_reconnect_timeout_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_greengrass_reconnect_timeout_max(int         val) { mgos_config_set_aws_greengrass_reconnect_timeout_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_enable(int         val) { mgos_config_set_http_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_listen_addr(const char *val) { mgos_config_set_http_listen_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_document_root(const char *val) { mgos_config_set_http_document_root(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_ssl_cert(const char *val) { mgos_config_set_http_ssl_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_ssl_key(const char *val) { mgos_config_set_http_ssl_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_ssl_ca_cert(const char *val) { mgos_config_set_http_ssl_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_upload_acl(const char *val) { mgos_config_set_http_upload_acl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_hidden_files(const char *val) { mgos_config_set_http_hidden_files(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_auth_domain(const char *val) { mgos_config_set_http_auth_domain(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_auth_file(const char *val) { mgos_config_set_http_auth_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mjs_generate_jsc(int         val) { mgos_config_set_mjs_generate_jsc(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_enable(int         val) { mgos_config_set_rpc_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_max_frame_size(int         val) { mgos_config_set_rpc_max_frame_size(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_max_queue_length(int         val) { mgos_config_set_rpc_max_queue_length(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_default_out_channel_idle_close_timeout(int         val) { mgos_config_set_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_acl_file(const char *val) { mgos_config_set_rpc_acl_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_auth_domain(const char *val) { mgos_config_set_rpc_auth_domain(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_auth_file(const char *val) { mgos_config_set_rpc_auth_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_uart_no(int         val) { mgos_config_set_rpc_uart_uart_no(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_baud_rate(int         val) { mgos_config_set_rpc_uart_baud_rate(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_fc_type(int         val) { mgos_config_set_rpc_uart_fc_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_dst(const char *val) { mgos_config_set_rpc_uart_dst(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_enable(int         val) { mgos_config_set_wifi_ap_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_ssid(const char *val) { mgos_config_set_wifi_ap_ssid(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_pass(const char *val) { mgos_config_set_wifi_ap_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_hidden(int         val) { mgos_config_set_wifi_ap_hidden(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_channel(int         val) { mgos_config_set_wifi_ap_channel(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_max_connections(int         val) { mgos_config_set_wifi_ap_max_connections(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_ip(const char *val) { mgos_config_set_wifi_ap_ip(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_netmask(const char *val) { mgos_config_set_wifi_ap_netmask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_gw(const char *val) { mgos_config_set_wifi_ap_gw(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_dhcp_start(const char *val) { mgos_config_set_wifi_ap_dhcp_start(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_dhcp_end(const char *val) { mgos_config_set_wifi_ap_dhcp_end(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_trigger_on_gpio(int         val) { mgos_config_set_wifi_ap_trigger_on_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_disable_after(int         val) { mgos_config_set_wifi_ap_disable_after(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_hostname(const char *val) { mgos_config_set_wifi_ap_hostname(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_keep_enabled(int         val) { mgos_config_set_wifi_ap_keep_enabled(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_enable(int         val) { mgos_config_set_wifi_sta_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_ssid(const char *val) { mgos_config_set_wifi_sta_ssid(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_pass(const char *val) { mgos_config_set_wifi_sta_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_user(const char *val) { mgos_config_set_wifi_sta_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_anon_identity(const char *val) { mgos_config_set_wifi_sta_anon_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_cert(const char *val) { mgos_config_set_wifi_sta_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_key(const char *val) { mgos_config_set_wifi_sta_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_ca_cert(const char *val) { mgos_config_set_wifi_sta_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_ip(const char *val) { mgos_config_set_wifi_sta_ip(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_netmask(const char *val) { mgos_config_set_wifi_sta_netmask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_gw(const char *val) { mgos_config_set_wifi_sta_gw(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_nameserver(const char *val) { mgos_config_set_wifi_sta_nameserver(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_dhcp_hostname(const char *val) { mgos_config_set_wifi_sta_dhcp_hostname(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_enable(int         val) { mgos_config_set_wifi_sta1_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_ssid(const char *val) { mgos_config_set_wifi_sta1_ssid(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_pass(const char *val) { mgos_config_set_wifi_sta1_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_user(const char *val) { mgos_config_set_wifi_sta1_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_anon_identity(const char *val) { mgos_config_set_wifi_sta1_anon_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_cert(const char *val) { mgos_config_set_wifi_sta1_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_key(const char *val) { mgos_config_set_wifi_sta1_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_ca_cert(const char *val) { mgos_config_set_wifi_sta1_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_ip(const char *val) { mgos_config_set_wifi_sta1_ip(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_netmask(const char *val) { mgos_config_set_wifi_sta1_netmask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_gw(const char *val) { mgos_config_set_wifi_sta1_gw(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_nameserver(const char *val) { mgos_config_set_wifi_sta1_nameserver(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_dhcp_hostname(const char *val) { mgos_config_set_wifi_sta1_dhcp_hostname(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_enable(int         val) { mgos_config_set_wifi_sta2_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_ssid(const char *val) { mgos_config_set_wifi_sta2_ssid(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_pass(const char *val) { mgos_config_set_wifi_sta2_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_user(const char *val) { mgos_config_set_wifi_sta2_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_anon_identity(const char *val) { mgos_config_set_wifi_sta2_anon_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_cert(const char *val) { mgos_config_set_wifi_sta2_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_key(const char *val) { mgos_config_set_wifi_sta2_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_ca_cert(const char *val) { mgos_config_set_wifi_sta2_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_ip(const char *val) { mgos_config_set_wifi_sta2_ip(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_netmask(const char *val) { mgos_config_set_wifi_sta2_netmask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_gw(const char *val) { mgos_config_set_wifi_sta2_gw(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_nameserver(const char *val) { mgos_config_set_wifi_sta2_nameserver(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_dhcp_hostname(const char *val) { mgos_config_set_wifi_sta2_dhcp_hostname(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_cfg_idx(int         val) { mgos_config_set_wifi_sta_cfg_idx(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_connect_timeout(int         val) { mgos_config_set_wifi_sta_connect_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_board_led1_pin(int         val) { mgos_config_set_board_led1_pin(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_board_led1_active_high(int         val) { mgos_config_set_board_led1_active_high(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_board_led2_pin(int         val) { mgos_config_set_board_led2_pin(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_board_led2_active_high(int         val) { mgos_config_set_board_led2_active_high(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_board_led3_pin(int         val) { mgos_config_set_board_led3_pin(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_board_led3_active_high(int         val) { mgos_config_set_board_led3_active_high(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_board_btn1_pin(int         val) { mgos_config_set_board_btn1_pin(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_board_btn1_pull_up(int         val) { mgos_config_set_board_btn1_pull_up(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_board_btn2_pin(int         val) { mgos_config_set_board_btn2_pin(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_board_btn2_pull_up(int         val) { mgos_config_set_board_btn2_pull_up(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_board_btn3_pin(int         val) { mgos_config_set_board_btn3_pin(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_board_btn3_pull_up(int         val) { mgos_config_set_board_btn3_pull_up(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_app_dhtPin(int         val) { mgos_config_set_app_dhtPin(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_app_mqPin(int         val) { mgos_config_set_app_mqPin(&mgos_sys_config, val); }

#ifdef __cplusplus
}
#endif
