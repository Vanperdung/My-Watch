#include "ble_client.h"

void BLEClient::mw_ble_gattc_profiles_init(uint8_t profile_idx, uint16_t gattc_if, esp_gattc_cb_t *gattc_cb)
{
    ble_gattc_profiles[profile_idx].gattc_if = gattc_if;
    ble_gattc_profiles[profile_idx].gattc_cb = 
}

void BLEClient::mw_ble_client_init