/*****************************************************************************/
/**
 * Copyright 2020 Silicon Laboratories, Inc.
 *
 *****************************************************************************/
//
// *** Generated file. Do not edit! ***
//

#include PLATFORM_HEADER
#ifdef EZSP_HOST
#include "stack/include/ember-types.h"
#else
#include "stack/include/ember.h"
#endif // EZSP_HOST



// Incoming Message
#ifdef EZSP_HOST
void emAfIncomingMessage(
      // Incoming message type
      EmberIncomingMessageType type,
      // The aps Frame
      EmberApsFrame *apsFrame,
      // The link quality
      uint8_t lastHopLqi,
      // The energy level
      int8_t lastHopRssi,
      // The sender of the message.
      EmberNodeId sender,
      // The index of a binding that matches the message
      // matching binding.
      uint8_t bindingIndex,
      // The index of the entry in the address table
      uint8_t addressIndex,
      // The message length
      uint8_t messageLength,
      // message
      uint8_t *messageContents)
;
void emAfIncomingMessageCallback(
      // Incoming message type
      EmberIncomingMessageType type,
      // The aps Frame
      EmberApsFrame *apsFrame,
      // The link quality
      uint8_t lastHopLqi,
      // The energy level
      int8_t lastHopRssi,
      // The sender of the message.
      EmberNodeId sender,
      // The index of a binding that matches the message
      // matching binding.
      uint8_t bindingIndex,
      // The index of the entry in the address table
      uint8_t addressIndex,
      // The message length
      uint8_t messageLength,
      // message
      uint8_t *messageContents)
;
#else // !EZSP_HOST
void emAfIncomingMessage(
      // Incoming message type
      EmberIncomingMessageType type,
      // The aps Frame
      EmberApsFrame *apsFrame,
      // message
      EmberMessageBuffer message)
;
void emAfIncomingMessageCallback(
      // Incoming message type
      EmberIncomingMessageType type,
      // The aps Frame
      EmberApsFrame *apsFrame,
      // message
      EmberMessageBuffer message)
;
#endif // EZSP_HOST


// Message Sent
#ifdef EZSP_HOST
void emAfMessageSent(
      // Outgoing message type
      EmberOutgoingMessageType type,
      // Index or destination of the message
      uint16_t indexOrDestination,
      // The aps Frame
      EmberApsFrame *apsFrame,
      // Message tag
      uint8_t messageTag,
      // Message delivery status
      EmberStatus status,
      // The length of the messageContents
      uint8_t messageLength,
      // Message data
      uint8_t *messageContents)
;
void emAfMessageSentCallback(
      // Outgoing message type
      EmberOutgoingMessageType type,
      // Index or destination of the message
      uint16_t indexOrDestination,
      // The aps Frame
      EmberApsFrame *apsFrame,
      // Message tag
      uint8_t messageTag,
      // Message delivery status
      EmberStatus status,
      // The length of the messageContents
      uint8_t messageLength,
      // Message data
      uint8_t *messageContents)
;
#else // !EZSP_HOST
void emAfMessageSent(
      // Outgoing message type
      EmberOutgoingMessageType type,
      // Index or destination of the message
      uint16_t indexOrDestination,
      // The aps Frame
      EmberApsFrame *apsFrame,
      // message
      EmberMessageBuffer message,
      // Message delivery status
      EmberStatus status)
;
void emAfMessageSentCallback(
      // Outgoing message type
      EmberOutgoingMessageType type,
      // Index or destination of the message
      uint16_t indexOrDestination,
      // The aps Frame
      EmberApsFrame *apsFrame,
      // message
      EmberMessageBuffer message,
      // Message delivery status
      EmberStatus status)
;
#endif // EZSP_HOST



// Trust Center Join
void emAfTrustCenterJoin(
      // Joining node's id
      EmberNodeId newNodeId,
      // Joining node's Eui64
      EmberEUI64 newNodeEui64,
      // Status
      EmberDeviceUpdate status,
      // Parent Id of the joining node
      EmberNodeId parentOfNewNode)
;

// Mark Buffers
void emAfMarkBuffers(void)
;
void emberAfPluginNetworkSteeringMarker(void)
;

// Packet Handoff Incoming
void emAfPacketHandoffIncoming(
      EmberZigbeePacketType packetType,
      EmberMessageBuffer packetBuffer,
      uint8_t index,
      // Return: 
      void *data)
;

// Packet Handoff Outgoing
void emAfPacketHandoffOutgoing(
      EmberZigbeePacketType packetType,
      EmberMessageBuffer packetBuffer,
      uint8_t index,
      // Return: 
      void *data)
;

// Incoming Mfg Test Message
void emAfIncomingMfgTestMessage(
      uint8_t messageType,
      uint8_t dataLength,
      // Return: 
      uint8_t *data)
;

// Override Incoming Route Record
void emAfOverrideIncomingRouteRecord(
      EmberNodeId source,
      EmberEUI64 sourceEui,
      uint8_t relayCount,
      EmberMessageBuffer header,
      uint8_t relayListIndex,
      // Return: 
      bool *consumed)
;

// Override Append Source Route
// Return: Added bytes
void emAfOverrideAppendSourceRoute(
      EmberNodeId destination,
      // Return: 
      EmberMessageBuffer *header,
      // Return: 
      bool *consumed)
;

// Override Furthur Index For Source Route Add Entry
void emAfOverrideFurthurIndexForSourceRouteAddEntry(
      EmberNodeId id,
      // Return: 
      uint8_t *furtherIndex)
;

// Stack Status
void emAfStackStatus(
      // Stack status
      EmberStatus status)
;
void emAfStackStatusCallback(
      // Stack status
      EmberStatus status)
;
void emberAfPluginEndDeviceSupportStackStatusCallback(
      // Stack status
      EmberStatus status)
;
void emAfPluginNetworkCreatorSecurityStackStatusCallback(
      // Stack status
      EmberStatus status)
;
void emAfPluginNetworkSteeringStackStatusCallback(
      // Stack status
      EmberStatus status)
;
void emAfPluginZllCommissioningCommonStackStatusCallback(
      // Stack status
      EmberStatus status)
;

// Energy Scan Result
void emAfEnergyScanResult(
      // The 802.15.4 channel number that was scanned.
      uint8_t channel,
      // The maximum RSSI value found on the channel.
      int8_t maxRssiValue)
;
void emAfPluginScanDispatchEnergyScanResultCallback(
      // The 802.15.4 channel number that was scanned.
      uint8_t channel,
      // The maximum RSSI value found on the channel.
      int8_t maxRssiValue)
;

// Network Found
void emAfNetworkFound(
      // The parameters associated with the network found.
      EmberZigbeeNetwork *networkFound,
      // The link quality indication of the network found.
      uint8_t lqi,
      // The received signal strength indication of the network found.
      int8_t rssi)
;
void emAfPluginScanDispatchNetworkFoundCallback(
      // The parameters associated with the network found.
      EmberZigbeeNetwork *networkFound,
      // The link quality indication of the network found.
      uint8_t lqi,
      // The received signal strength indication of the network found.
      int8_t rssi)
;

// Scan Complete
void emAfScanComplete(
      // The channel on which the current error occurred. Undefined for the case
      // of EMBER_SUCCESS.
      uint8_t channel,
      // The error condition that occurred on the current channel. Value will be
      // EMBER_SUCCESS when the scan has completed.
      EmberStatus status)
;
void emAfPluginScanDispatchScanCompleteCallback(
      // The channel on which the current error occurred. Undefined for the case
      // of EMBER_SUCCESS.
      uint8_t channel,
      // The error condition that occurred on the current channel. Value will be
      // EMBER_SUCCESS when the scan has completed.
      EmberStatus status)
;

// Unused Pan Id Found
void emAfUnusedPanIdFound(
      // The unused panID which has been found.
      EmberPanId panId,
      // The channel that the unused panID was found on.
      uint8_t channel)
;

// Child Join
#ifdef EZSP_HOST
void emAfChildJoin(
      // The index of the child of interest.
      uint8_t index,
      // True if the child is joining. False the child is leaving.
      bool joining,
      // The node ID of the child.
      EmberNodeId childId,
      // The EUI64 of the child.
      EmberEUI64 childEui64,
      // The node type of the child.
      EmberNodeType childType)
;
#else // !EZSP_HOST
void emAfChildJoin(
      // The index of the child of interest.
      uint8_t index,
      // True if the child is joining. False the child is leaving.
      bool joining)
;
#endif // EZSP_HOST



// Duty Cycle
#ifdef EZSP_HOST
void emAfDutyCycle(
      // The channel page whose duty cycle state has changed.
      uint8_t channelPage,
      // The channel number whose duty cycle state has changed.
      uint8_t channel,
      // The current duty cycle state.
      EmberDutyCycleState state,
      // The total number of connected end devices that are being monitored for
      // duty cycle.
      uint8_t totalDevices,
      // Consumed duty cycles of end devices that are being monitored. The first
      // entry always be the local stack's nodeId, and thus the total aggregate
      // duty cycle for the device.
      EmberPerDeviceDutyCycle *arrayOfDeviceDutyCycles)
;
#else // !EZSP_HOST
void emAfDutyCycle(
      // The channel page whose duty cycle state has changed.
      uint8_t channelPage,
      // The channel number whose duty cycle state has changed.
      uint8_t channel,
      // The current duty cycle state.
      EmberDutyCycleState state)
;
#endif // EZSP_HOST



// Remote Set Binding
// Return: ZDO response status.
void emAfRemoteSetBinding(
      // Return: The contents of the binding entry.
      EmberBindingTableEntry *entry)
;

// Remote Delete Binding
// Return: ZDO response status
void emAfRemoteDeleteBinding(
      // The index of the binding whose deletion was requested.
      uint8_t index)
;

// Poll Complete
void emAfPollComplete(
      // An EmberStatus value: EMBER_SUCCESS - Data was received in response to
      // the poll. EMBER_MAC_NO_DATA - No data was pending.
      // EMBER_DELIVERY_FAILED - The poll message could not be sent.
      // EMBER_MAC_NO_ACK_RECEIVED - The poll message was sent but not
      // acknowledged by the parent.
      EmberStatus status)
;
void emAfPluginEndDeviceSupportPollCompleteCallback(
      // An EmberStatus value: EMBER_SUCCESS - Data was received in response to
      // the poll. EMBER_MAC_NO_DATA - No data was pending.
      // EMBER_DELIVERY_FAILED - The poll message could not be sent.
      // EMBER_MAC_NO_ACK_RECEIVED - The poll message was sent but not
      // acknowledged by the parent.
      EmberStatus status)
;

// Poll
void emAfPoll(
      // The node ID of the child that is requesting data.
      EmberNodeId childId,
      // True if transmit expected, false otherwise.
      bool transmitExpected)
;

// Debug
void emAfDebug(
      // debug message
      EmberMessageBuffer message)
;

// Incoming Many To One Route Request
void emAfIncomingManyToOneRouteRequest(
      // The short id of the concentrator.
      EmberNodeId source,
      // The EUI64 of the concentrator.
      EmberEUI64 longId,
      // The path cost to the concentrator. The cost may decrease as additional
      // route request packets for this discovery arrive, but the callback is
      // made only once.
      uint8_t cost)
;

// Incoming Route Error
void emAfIncomingRouteError(
      // EMBER_SOURCE_ROUTE_FAILURE or EMBER_MANY_TO_ONE_ROUTE_FAILURE.
      EmberStatus status,
      // The short id of the remote node.
      EmberNodeId target)
;

// Incoming Network Status
void emAfIncomingNetworkStatus(
      // One byte over-the-air error code from network status message
      uint8_t errorCode,
      // The short ID of the remote node
      EmberNodeId target)
;

// Incoming Route Record
void emAfIncomingRouteRecord(
      // The source of the route record.
      EmberNodeId source,
      // The EUI64 of the source.
      EmberEUI64 sourceEui,
      // The number of relays in relayList.
      uint8_t relayCount,
      // Header.
      EmberMessageBuffer header,
      // The relay List Index.
      uint8_t relayListIndex)
;

// Id Conflict
void emAfIdConflict(
      // The short id for which a conflict was detected
      EmberNodeId conflictingId)
;

// Mac Passthrough Message
void emAfMacPassthroughMessage(
      // The type of MAC passthrough message received.
      EmberMacPassthroughType messageType,
      // The raw message that was received.
      EmberMessageBuffer message)
;

// Stack Token Changed
void emAfStackTokenChanged(
      // The address of the stack token that has changed.
      uint16_t tokenAddress)
;

// Timer
void emAfTimer(
      // Which timer generated the callback (0 or 1).
      uint8_t timerId)
;

// Counter Rollover
void emAfCounterRollover(
      // Type of Counter
      EmberCounterType type)
;

// Raw Transmit Complete
void emAfRawTransmitComplete(
      // message
      EmberMessageBuffer message,
      // EMBER_SUCCESS if the transmission was successful, or
      // EMBER_DELIVERY_FAILED if not
      EmberStatus status)
;

// Switch Network Key
void emAfSwitchNetworkKey(
      // The sequence number of the new network key.
      uint8_t sequenceNumber)
;

// Zigbee Key Establishment
void emAfZigbeeKeyEstablishment(
      // This is the IEEE address of the partner that the device successfully
      // established a key with. This value is all zeros on a failure.
      EmberEUI64 partner,
      // This is the status indicating what was established or why the key
      // establishment failed.
      EmberKeyStatus status)
;
void emberAfPluginNetworkCreatorSecurityZigbeeKeyEstablishmentCallback(
      // This is the IEEE address of the partner that the device successfully
      // established a key with. This value is all zeros on a failure.
      EmberEUI64 partner,
      // This is the status indicating what was established or why the key
      // establishment failed.
      EmberKeyStatus status)
;
void emberAfPluginUpdateTcLinkKeyZigbeeKeyEstablishmentCallback(
      // This is the IEEE address of the partner that the device successfully
      // established a key with. This value is all zeros on a failure.
      EmberEUI64 partner,
      // This is the status indicating what was established or why the key
      // establishment failed.
      EmberKeyStatus status)
;

// Generate Cbke Keys
void emAfGenerateCbkeKeys(
      // The result of the CBKE operation.
      EmberStatus status,
      // Return: The generated ephemeral public key.
      EmberPublicKeyData *ephemeralPublicKey)
;

// Calculate Smacs
void emAfCalculateSmacs(
      // The Result of the CBKE operation.
      EmberStatus status,
      // Return: The calculated value of the initiator's SMAC
      EmberSmacData *initiatorSmac,
      // Return: The calculated value of the responder's SMAC
      EmberSmacData *responderSmac)
;

// Dsa Sign
void emAfDsaSign(
      // The result of the DSA signing operation.
      EmberStatus status,
      // The message and attached which includes the original message and the
      // appended signature.
      EmberMessageBuffer signedMessage)
;

// Dsa Verify
void emAfDsaVerify(
      // The result of the DSA verification operation.
      EmberStatus status)
;

// Incoming Bootload Message
void emAfIncomingBootloadMessage(
      // The EUI64 of the sending node.
      EmberEUI64 longId,
      // The bootload message that was sent.
      EmberMessageBuffer message)
;

// Bootload Transmit Complete
void emAfBootloadTransmitComplete(
      // The bootload message that was sent.
      EmberMessageBuffer message,
      // An EmberStatus value of EMBER_SUCCESS if an ACK was received from the
      // destination or EMBER_DELIVERY_FAILED if no ACK was received.
      EmberStatus status)
;

// Zll Network Found
void emAfZllNetworkFound(
      // Return: Information about the network.
      const EmberZllNetwork *networkInfo,
      // Return: Device specific information.
      const EmberZllDeviceInfoRecord *deviceInfo)
;
void emAfZllNetworkFoundCallback(
      // Return: Information about the network.
      const EmberZllNetwork *networkInfo,
      // Return: Device specific information.
      const EmberZllDeviceInfoRecord *deviceInfo)
;

// Zll Scan Complete
void emAfZllScanComplete(
      // Status of the operation.
      EmberStatus status)
;
void emAfZllScanCompleteCallback(
      // Status of the operation.
      EmberStatus status)
;

// Zll Address Assignment
void emAfZllAddressAssignment(
      // Return: Address assignment information.
      const EmberZllAddressAssignment *addressInfo)
;
void emAfZllAddressAssignmentCallback(
      // Return: Address assignment information.
      const EmberZllAddressAssignment *addressInfo)
;

// Zll Touch Link Target
void emAfZllTouchLinkTarget(
      // Return: Information about the network.
      const EmberZllNetwork *networkInfo)
;
void emAfPluginZllCommissioningServerZllTouchLinkTargetCallback(
      // Return: Information about the network.
      const EmberZllNetwork *networkInfo)
;

// Mac Filter Match Message
void emAfMacFilterMatchMessage(
      // Return: macFilterMatchStruct.
      const EmberMacFilterMatchStruct *macFilterMatchStruct)
;
void emAfPluginInterpanMacFilterMatchMessageCallback(
      // Return: macFilterMatchStruct.
      const EmberMacFilterMatchStruct *macFilterMatchStruct)
;

// D Gp Sent
void emAfDGpSent(
      // An EmberStatus value indicating success or the reason for failure.
      EmberStatus status,
      // The handle of the GPDF.
      uint8_t gpepHandle)
;

// Pan Id Conflict
// Return: An EmberStatus value indicating success or the reason for failure.
void emAfPanIdConflict(
      // Number of conflict reports
      int8_t conflictCount)
;

// Orphan Notification
void emAfOrphanNotification(
      // The 8 byte EUI64 of the sender.
      EmberEUI64 longId)
;

// Counter
void emAfCounter(
      // Type of Counter
      EmberCounterType type,
      // Counter Info and value
      EmberCounterInfo Info)
;
void emAfPluginCountersCounterCallback(
      // Type of Counter
      EmberCounterType type,
      // Counter Info and value
      EmberCounterInfo Info)
;

// Mac Passthrough Filter
// Return: True if mac passthrough filter was matched. False otherwise.
void emAfMacPassthroughFilter(
      // Return: Mac Header of the matched messgae
      uint8_t *macHeader)
;

// Generate Cbke Keys Handler283k1
void emAfGenerateCbkeKeysHandler283k1(
      // The result of the CBKE operation.
      EmberStatus status,
      // Return: The generated ephemeral public key.
      EmberPublicKey283k1Data *ephemeralPublicKey)
;

// Calculate Smacs Handler283k1
void emAfCalculateSmacsHandler283k1(
      // The Result of the CBKE operation.
      EmberStatus status,
      // Return: The calculated value of the initiator's SMAC
      EmberSmacData *initiatorSmac,
      // Return: The calculated value of the responder's SMAC
      EmberSmacData *responderSmac)
;

// Gpep Incoming Message
void emAfGpepIncomingMessage(
      // The status of the GPDF receive.
      EmberStatus status,
      // The gpdLink value of the received GPDF.
      uint8_t gpdLink,
      // The GPDF sequence number.
      uint8_t sequenceNumber,
      // The address of the source GPD.
      EmberGpAddress *addr,
      // The security level of the received GPDF.
      EmberGpSecurityLevel gpdfSecurityLevel,
      // The securityKeyType used to decrypt/authenticate the incoming GPDF.
      EmberGpKeyType gpdfSecurityKeyType,
      // Whether the incoming GPDF had the auto-commissioning bit set.
      bool autoCommissioning,
      // Bidirectional information represented in bitfields, where bit0 holds
      // the rxAfterTx of incoming gpdf and bit1 holds if tx queue is available
      // for outgoing gpdf.
      uint8_t bidirectionalInfo,
      // The security frame counter of the incoming GDPF.
      uint32_t gpdSecurityFrameCounter,
      // The gpdCommandId of the incoming GPDF.
      uint8_t gpdCommandId,
      // The received MIC of the GPDF.
      uint32_t mic,
      // The proxy table index of the corresponding proxy table entry to the
      // incoming GPDF.
      uint8_t proxyTableIndex,
      // The length of the GPD command payload.
      uint8_t gpdCommandPayloadLength,
      // The GPD command payload.
      uint8_t *gpdCommandPayload)
;

// Rtos Idle
// Return: True or False.
void emAfRtosIdle(
      // Return: Idle time duration
      uint32_t *idleTimeMs)
;

// Rtos Stack Wakeup Isr
void emAfRtosStackWakeupIsr(void)
;

// Radio Needs Calibrating
void emAfRadioNeedsCalibrating(void)
;

// Scan Error
void emAfScanError(
      // The error status of a scan
      EmberStatus status)
;
