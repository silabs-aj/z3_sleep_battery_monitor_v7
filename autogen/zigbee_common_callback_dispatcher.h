/***************************************************************************//**
 * @file zigbee_common_callback_dispatcher.h
 * @brief ZigBee common dispatcher declarations.
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#ifndef SL_ZIGBEE_COMMON_CALLBACK_DISPATCHER_H
#define SL_ZIGBEE_COMMON_CALLBACK_DISPATCHER_H

#include PLATFORM_HEADER
#include "stack/include/ember.h"

// Event Init
void emAfEventInit(void);
void emAfZclFrameworkCoreInitEventsCallback(uint8_t init_level);
void emAfServiceDiscoveryInitEventsCallback(uint8_t init_level);
void emAfPluginEndDeviceSupportMoveInit(uint8_t init_level);
void emAfPluginEndDeviceSupportPollingInit(uint8_t init_level);
void emAfPluginFindAndBindInitiatorInitCallback(uint8_t init_level);
void emberAfPluginInterpanInitCallback(uint8_t init_level);
void emAfPluginNetworkSteeringInitCallback(uint8_t init_level);
void emAfPluginScanDispatchInitCallback(uint8_t init_level);
void emAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateInit(uint8_t init_level);
void emAfPluginZllCommissioningClientInitCallback(uint8_t init_level);
// Local data Init
void emAfLocalDataInit(void);
void emberAfPluginCountersInitCallback(uint8_t init_level);
void emberAfPluginEndDeviceSupportInitCallback(uint8_t init_level);
void emberAfPluginInterpanInitCallback(uint8_t init_level);
// Init done
void emAfInitDone(void);
void emAfInitCallback(uint8_t init_level);
void sli_zigbee_zcl_cli_init(uint8_t init_level);
void emberAfInit(uint8_t init_level);
void emberAfPluginNetworkCreatorSecurityInitCallback(uint8_t init_level);
void emberAfPluginZllCommissioningCommonInitCallback(uint8_t init_level);
void emAfNetworkInit(uint8_t init_level);

// Tick
void emAfTick(void);
void emberAfPluginEndDeviceSupportTickCallback(void);

#endif // SL_ZIGBEE_COMMON_CALLBACK_DISPATCHER_H