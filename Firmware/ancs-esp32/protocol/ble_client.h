#ifndef __BLE_CLIENT_H__
#define __BLE_CLIENT_H__

#include "esp_gattc_api.h"
#include "esp_gap_ble_api.h"

#define PROFILE_NUM 1
#define APP_PROFILE_ID_0 0


#ifdef __cplusplus
extern "C"
{
#endif

struct ble_gattc_profiles_s
{
    esp_gattc_cb_t gattc_cb;
    uint16_t gattc_if;
    uint16_t app_id;
    uint16_t conn_id;
    uint16_t service_start_handle;
    uint16_t service_end_handle;
    uint16_t notification_source_handle;
    uint16_t data_source_handle;
    uint16_t contol_point_handle;
    esp_bd_addr_t remote_bda;
    uint16_t MTU_size;
};

class BLEClient
{
    private:
        ble_gattc_profiles_s ble_gattc_profiles[PROFILE_NUM];
        esp_gap_ble_cb_t ble_gap_cb;
        esp_gattc_cb_t ble_gattc_cb;
    public:
        void mw_ble_gattc_profiles_init(uint16_t gattc_if, esp_gattc_cb_t *gattc_cb);
        void mw_ble_client_init(const char *ble_device_name);
};

#ifdef __cplusplus
}
#endif

#endif

