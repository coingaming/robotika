deps_config := \
	/Users/ekrivich/esp/esp-idf/components/app_trace/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/aws_iot/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/bt/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/driver/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/efuse/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/esp32/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/esp_adc_cal/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/esp_event/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/esp_http_client/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/esp_http_server/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/esp_https_ota/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/espcoredump/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/ethernet/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/fatfs/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/freemodbus/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/freertos/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/heap/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/libsodium/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/log/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/lwip/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/mbedtls/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/mdns/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/mqtt/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/nvs_flash/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/openssl/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/pthread/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/spi_flash/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/spiffs/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/tcpip_adapter/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/unity/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/vfs/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/wear_levelling/Kconfig \
	/Users/ekrivich/esp/esp-idf/components/app_update/Kconfig.projbuild \
	/Users/ekrivich/esp/esp-idf/components/bootloader/Kconfig.projbuild \
	/Users/ekrivich/esp/esp-idf/components/esptool_py/Kconfig.projbuild \
	/Users/ekrivich/esp/esp-idf/components/partition_table/Kconfig.projbuild \
	/Users/ekrivich/esp/esp-idf/Kconfig

include/config/auto.conf: \
	$(deps_config)

ifneq "$(IDF_TARGET)" "esp32"
include/config/auto.conf: FORCE
endif
ifneq "$(IDF_CMAKE)" "n"
include/config/auto.conf: FORCE
endif

$(deps_config): ;
