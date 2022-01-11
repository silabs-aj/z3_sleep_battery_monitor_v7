/*******************************************************************************
 * @file zigbee_af_cluster_funtions.h
 * @brief Cluster action callback definitions
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
//
// *** Generated file. Do not edit! ***
//

#include "af.h"


void emberAfIdentifyClusterServerInitCallback (uint8_t endpoint);
void emberAfIdentifyClusterServerAttributeChangedCallback (uint8_t endpoint, EmberAfAttributeId attributeId);

// Array of cluster function (aka cluster action callbacks) stuctures.
// First entry is a dummy, otherwise an empty array would fail IAR builds
#define GENERATED_FUNCTION_STRUCTURES_ARRAY  { \
  {0x8000, 0x00, 0x00}, \
  { 3, \
  CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION ,\
  (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerInitCallback, \
  },\
  { 3, \
  CLUSTER_MASK_SERVER | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION ,\
  (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerAttributeChangedCallback, \
  },\
  }


// The following structure is not used anywhere in the code, its purpose is 
// compile-time detection of duplicate cluster action callbacks.
// Only a single instance of a given callback type (e.g. default_response_function)
// can exist for a given cluster and side (client/server).
// A compilation error in this structure indicates a duplicate "cluster_functions"
// template contribution.

struct unused_structure {
int clust_3_server_init_function; 
int clust_3_server_attribute_changed_function; 
};
