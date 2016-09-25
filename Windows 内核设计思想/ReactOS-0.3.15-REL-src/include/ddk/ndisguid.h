/*
 * ndisguid.h
 *
 * GUIDs for NDIS drivers
 *
 * This file is part of the w32api package.
 *
 * Contributors:
 *   Created by Casper S. Hornstrup <chorns@users.sourceforge.net>
 *
 * THIS SOFTWARE IS NOT COPYRIGHTED
 *
 * This source code is offered for use in the public domain. You may
 * use, modify or distribute it freely.
 *
 * This code is distributed in the hope that it will be useful but
 * WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 * DISCLAIMED. This includes but is not limited to warranties of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

#pragma once

#include <initguid.h>
#ifdef __cplusplus
extern "C" {
#endif

DEFINE_GUID(GUID_DEVINTERFACE_NET, 0xcac88484, 0x7515, 0x4c03, 0x82, 0xe6, 0x71, 0xa8, 0x7a, 0xba, 0xc3, 0x61);
DEFINE_GUID(GUID_NDIS_802_11_ADD_KEY, 0xab8b5a62, 0x1d51, 0x49d8, 0xba, 0x5c, 0xfa, 0x98, 0x0b, 0xe0, 0x3a, 0x1d);
DEFINE_GUID(GUID_NDIS_802_11_ADD_WEP, 0x4307bff0, 0x2129, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_ASSOCIATION_INFORMATION, 0xa08d4dd0, 0x960e, 0x40bd, 0x8c, 0xf6, 0xc5, 0x38, 0xaf, 0x98, 0xf2, 0xe3);
DEFINE_GUID(GUID_NDIS_802_11_AUTHENTICATION_MODE, 0x43920a24, 0x2129, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_BSSID, 0x2504b6c2, 0x1fa5, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_BSSID_LIST, 0x69526f9a, 0x2062, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_BSSID_LIST_SCAN, 0x0d9e01e1, 0xba70, 0x11d4, 0xb6, 0x75, 0x00, 0x20, 0x48, 0x57, 0x03, 0x37);
DEFINE_GUID(GUID_NDIS_802_11_CONFIGURATION, 0x4a4df982, 0x2068, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_DESIRED_RATES, 0x452ee08e, 0x2536, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_DISASSOCIATE, 0x43671f40, 0x2129, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_FRAGMENTATION_THRESHOLD, 0x69aaa7c4, 0x2062, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_INFRASTRUCTURE_MODE, 0x697d5a7e, 0x2062, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_MEDIA_STREAM_MODE, 0x0a56af66, 0xd84b, 0x49eb, 0xa2, 0x8d, 0x52, 0x82, 0xcb, 0xb6, 0xd0, 0xcd);
DEFINE_GUID(GUID_NDIS_802_11_NETWORK_TYPES_SUPPORTED, 0x8531d6e6, 0x2041, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_NETWORK_TYPE_IN_USE, 0x857e2326, 0x2041, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_NUMBER_OF_ANTENNAS, 0x01779336, 0x2064, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_POWER_MODE, 0x85be837c, 0x2041, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_PRIVACY_FILTER, 0x6733c4e9, 0x4792, 0x11d4, 0x97, 0xf1, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_RELOAD_DEFAULTS, 0x748b14e8, 0x32ee, 0x4425, 0xb9, 0x1b, 0xc9, 0x84, 0x8c, 0x58, 0xb5, 0x5a);
DEFINE_GUID(GUID_NDIS_802_11_REMOVE_KEY, 0x73cb28e9, 0x3188, 0x42d5, 0xb5, 0x53, 0xb2, 0x12, 0x37, 0xe6, 0x08, 0x8c);
DEFINE_GUID(GUID_NDIS_802_11_REMOVE_WEP, 0x433c345c, 0x2129, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_RSSI, 0x1507db16, 0x2053, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_RSSI_TRIGGER, 0x155689b8, 0x2053, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_RTS_THRESHOLD, 0x0134d07e, 0x2064, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_RX_ANTENNA_SELECTED, 0x01ac07a2, 0x2064, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_SSID, 0x7d2a90ea, 0x2041, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_STATISTICS, 0x42bb73b0, 0x2129, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_SUPPORTED_RATES, 0x49db8722, 0x2068, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_TEST, 0x4b9ca16a, 0x6a60, 0x4e9d, 0x92, 0x0c, 0x63, 0x35, 0x95, 0x3f, 0xa0, 0xb5);
DEFINE_GUID(GUID_NDIS_802_11_TX_ANTENNA_SELECTED, 0x01dbb74a, 0x2064, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_TX_POWER_LEVEL, 0x11e6ba76, 0x2053, 0x11d4, 0x97, 0xeb, 0x00, 0xc0, 0x4f, 0x79, 0xc4, 0x03);
DEFINE_GUID(GUID_NDIS_802_11_WEP_STATUS, 0xb027a21f, 0x3cfa, 0x4125, 0x80, 0x0b, 0x3f, 0x7a, 0x18, 0xfd, 0xdc, 0xdc);
DEFINE_GUID(GUID_NDIS_802_3_CURRENT_ADDRESS, 0x44795700, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_3_MAC_OPTIONS, 0x44795703, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_3_MAXIMUM_LIST_SIZE, 0x44795702, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_3_MULTICAST_LIST, 0x44795701, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_3_PERMANENT_ADDRESS, 0x447956ff, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_3_RCV_ERROR_ALIGNMENT, 0x44795704, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_3_XMIT_MORE_COLLISIONS, 0x44795706, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_3_XMIT_ONE_COLLISION, 0x44795705, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_5_CURRENT_ADDRESS, 0x44795708, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_5_CURRENT_FUNCTIONAL, 0x44795709, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_5_CURRENT_GROUP, 0x4479570a, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_5_CURRENT_RING_STATE, 0xacf14032, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_5_CURRENT_RING_STATUS, 0x890a36ec, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_5_LAST_OPEN_STATUS, 0x4479570b, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_5_LINE_ERRORS, 0xacf14033, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_5_LOST_FRAMES, 0xacf14034, 0xa61c, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_802_5_PERMANENT_ADDRESS, 0x44795707, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_ENUMERATE_ADAPTER, 0x981f2d7f, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_ENUMERATE_ADAPTERS_EX, 0x16716917, 0x4306, 0x4be4, 0x9b, 0x5a, 0x38, 0x09, 0xae, 0x44, 0xb1, 0x25);
DEFINE_GUID(GUID_NDIS_ENUMERATE_VC, 0x981f2d82, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_DRIVER_VERSION, 0x791ad198, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_HARDWARE_STATUS, 0x791ad192, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_LINK_SPEED, 0x791ad195, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_MAC_OPTIONS, 0x791ad19a, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_MEDIA_CONNECT_STATUS, 0x791ad19b, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_MEDIA_IN_USE, 0x791ad194, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_MEDIA_SUPPORTED, 0x791ad193, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_MINIMUM_LINK_SPEED, 0x791ad19d, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_RCV_PDUS_ERROR, 0x0a214808, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_RCV_PDUS_NO_BUFFER, 0x0a214809, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_RCV_PDUS_OK, 0x0a214806, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_VENDOR_DESCRIPTION, 0x791ad197, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_VENDOR_DRIVER_VERSION, 0x791ad19c, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_VENDOR_ID, 0x791ad196, 0xe35c, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_XMIT_PDUS_ERROR, 0x0a214807, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CO_XMIT_PDUS_OK, 0x0a214805, 0xe35f, 0x11d0, 0x96, 0x92, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CURRENT_LOOKAHEAD, 0x5ec10361, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_CURRENT_PACKET_FILTER, 0x5ec10360, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_DRIVER_VERSION, 0x5ec10362, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_ENUMERATE_PORTS, 0xf1d6abe8, 0x15e4, 0x4407, 0x81, 0xb7, 0x6b, 0x83, 0x0c, 0x77, 0x7c, 0xd9);
DEFINE_GUID(GUID_NDIS_GEN_HARDWARE_STATUS, 0x5ec10354, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_INTERRUPT_MODERATION, 0xd9c8eea5, 0xf16e, 0x467c, 0x84, 0xd5, 0x63, 0x45, 0xa2, 0x2c, 0xe2, 0x13);
DEFINE_GUID(GUID_NDIS_GEN_INTERRUPT_MODERATION_PARAMETERS, 0xd789adfa, 0x9c56, 0x433b, 0xad, 0x01, 0x75, 0x74, 0xf3, 0xce, 0xdb, 0xe9);
DEFINE_GUID(GUID_NDIS_GEN_LINK_PARAMETERS, 0x8c7d3579, 0x252b, 0x4614, 0x82, 0xc5, 0xa6, 0x50, 0xda, 0xa1, 0x50, 0x49);
DEFINE_GUID(GUID_NDIS_GEN_LINK_SPEED, 0x5ec10359, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_LINK_STATE, 0xba1f4c14, 0xa945, 0x4762, 0xb9, 0x16, 0x0b, 0x55, 0x15, 0xb6, 0xf4, 0x3a);
DEFINE_GUID(GUID_NDIS_GEN_MAC_OPTIONS, 0x5ec10365, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_MAXIMUM_FRAME_SIZE, 0x5ec10358, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_MAXIMUM_LOOKAHEAD, 0x5ec10357, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_MAXIMUM_SEND_PACKETS, 0x5ec10367, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_MAXIMUM_TOTAL_SIZE, 0x5ec10363, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_MEDIA_CONNECT_STATUS, 0x5ec10366, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_MEDIA_IN_USE, 0x5ec10356, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_MEDIA_SUPPORTED, 0x5ec10355, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_PCI_DEVICE_CUSTOM_PROPERTIES, 0xaa39f5ab, 0xe260, 0x4d01, 0x82, 0xb0, 0xb7, 0x37, 0xc8, 0x80, 0xea, 0x05);
DEFINE_GUID(GUID_NDIS_GEN_PHYSICAL_MEDIUM, 0x418ca16d, 0x3937, 0x4208, 0x94, 0x0a, 0xec, 0x61, 0x96, 0x27, 0x80, 0x85);
DEFINE_GUID(GUID_NDIS_GEN_PHYSICAL_MEDIUM_EX, 0x899e7782, 0x035b, 0x43f9, 0x8b, 0xb6, 0x2b, 0x58, 0x97, 0x16, 0x12, 0xe5);
DEFINE_GUID(GUID_NDIS_GEN_PORT_AUTHENTICATION_PARAMETERS, 0xaab6ac31, 0x86fb, 0x48fb, 0x8b, 0x48, 0x63, 0xdb, 0x23, 0x5a, 0xce, 0x16);
DEFINE_GUID(GUID_NDIS_GEN_PORT_STATE, 0x6fbf2a5f, 0x8b8f, 0x4920, 0x81, 0x43, 0xe6, 0xc4, 0x60, 0xf5, 0x25, 0x24);
DEFINE_GUID(GUID_NDIS_GEN_RCV_ERROR, 0x447956fd, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_RCV_NO_BUFFER, 0x447956fe, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_RCV_OK, 0x447956fb, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_RECEIVE_BLOCK_SIZE, 0x5ec1035d, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_RECEIVE_BUFFER_SPACE, 0x5ec1035b, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_STATISTICS, 0x368c45b5, 0xc129, 0x43c1, 0x93, 0x9e, 0x7e, 0xdc, 0x2d, 0x7f, 0xe6, 0x21);
DEFINE_GUID(GUID_NDIS_GEN_TRANSMIT_BLOCK_SIZE, 0x5ec1035c, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_TRANSMIT_BUFFER_SPACE, 0x5ec1035a, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_VENDOR_DESCRIPTION, 0x5ec1035f, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_VENDOR_DRIVER_VERSION, 0x447956f9, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_VENDOR_ID, 0x5ec1035e, 0xa61a, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_VLAN_ID, 0x765dc702, 0xc5e8, 0x4b67, 0x84, 0x3b, 0x3f, 0x5a, 0x4f, 0xf2, 0x64, 0x8b);
DEFINE_GUID(GUID_NDIS_GEN_XMIT_ERROR, 0x447956fc, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_GEN_XMIT_OK, 0x447956fa, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_HD_SPLIT_CURRENT_CONFIG, 0x81d1303c, 0xab00, 0x4e49, 0x80, 0xb1, 0x5e, 0x6e, 0x0b, 0xf9, 0xbe, 0x53);
DEFINE_GUID(GUID_NDIS_HD_SPLIT_PARAMETERS, 0x8c048bea, 0x2913, 0x4458, 0xb6, 0x8e, 0x17, 0xf6, 0xc1, 0xe5, 0xc6, 0x0e);
DEFINE_GUID(GUID_NDIS_LAN_CLASS, 0xad498944, 0x762f, 0x11d0, 0x8d, 0xcb, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL, 0x981f2d81, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_NOTIFY_ADAPTER_REMOVAL, 0x981f2d80, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_NOTIFY_BIND, 0x5413531c, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_NOTIFY_DEVICE_POWER_OFF, 0x81bc8189, 0xb026, 0x46ab, 0xb9, 0x64, 0xf1, 0x82, 0xe3, 0x42, 0x93, 0x4e);
DEFINE_GUID(GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX, 0x4159353c, 0x5cd7, 0x42ce, 0x8f, 0xe4, 0xa4, 0x5a, 0x23, 0x80, 0xcc, 0x4f);
DEFINE_GUID(GUID_NDIS_NOTIFY_DEVICE_POWER_ON, 0x5f81cfd0, 0xf046, 0x4342, 0xaf, 0x61, 0x89, 0x5a, 0xce, 0xda, 0xef, 0xd9);
DEFINE_GUID(GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX, 0x2b440188, 0x92ac, 0x4f60, 0x9b, 0x2d, 0x20, 0xa3, 0x0c, 0xbb, 0x6b, 0xbe);
DEFINE_GUID(GUID_NDIS_NOTIFY_FILTER_ARRIVAL, 0x0b6d3c89, 0x5917, 0x43ca, 0xb5, 0x78, 0xd0, 0x1a, 0x79, 0x67, 0xc4, 0x1c);
DEFINE_GUID(GUID_NDIS_NOTIFY_FILTER_REMOVAL, 0x1f177cd9, 0x5955, 0x4721, 0x9f, 0x6a, 0x78, 0xeb, 0xdf, 0xae, 0xf8, 0x89);
DEFINE_GUID(GUID_NDIS_NOTIFY_UNBIND, 0x6e3ce1ec, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_NOTIFY_VC_ARRIVAL, 0x182f9e0c, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_NOTIFY_VC_REMOVAL, 0x981f2d79, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_PM_ACTIVE_CAPABILITIES, 0xb2cf76e3, 0xb3ae, 0x4394, 0xa0, 0x1f, 0x33, 0x8c, 0x98, 0x70, 0xe9, 0x39);
DEFINE_GUID(GUID_NDIS_PM_ADMIN_CONFIG, 0x1528d111, 0x708a, 0x4ca4, 0x92, 0x15, 0xc0, 0x57, 0x71, 0x16, 0x1c, 0xda);
DEFINE_GUID(GUID_NDIS_RECEIVE_FILTER_ENUM_FILTERS, 0x3f2c141d, 0x83bc, 0x11dd, 0x94, 0xb8, 0x00, 0x1d, 0x09, 0x16, 0x2b, 0xc3);
DEFINE_GUID(GUID_NDIS_RECEIVE_FILTER_ENUM_QUEUES, 0x3f2c141b, 0x83bc, 0x11dd, 0x94, 0xb8, 0x00, 0x1d, 0x09, 0x16, 0x2b, 0xc3);
DEFINE_GUID(GUID_NDIS_RECEIVE_FILTER_GLOBAL_PARAMETERS, 0x3f2c141a, 0x83bc, 0x11dd, 0x94, 0xb8, 0x00, 0x1d, 0x09, 0x16, 0x2b, 0xc3);
DEFINE_GUID(GUID_NDIS_RECEIVE_FILTER_HARDWARE_CAPABILITIES, 0x3f2c1419, 0x83bc, 0x11dd, 0x94, 0xb8, 0x00, 0x1d, 0x09, 0x16, 0x2b, 0xc3);
DEFINE_GUID(GUID_NDIS_RECEIVE_FILTER_PARAMETERS, 0x3f2c141e, 0x83bc, 0x11dd, 0x94, 0xb8, 0x00, 0x1d, 0x09, 0x16, 0x2b, 0xc3);
DEFINE_GUID(GUID_NDIS_RECEIVE_FILTER_QUEUE_PARAMETERS, 0x3f2c141c, 0x83bc, 0x11dd, 0x94, 0xb8, 0x00, 0x1d, 0x09, 0x16, 0x2b, 0xc3);
DEFINE_GUID(GUID_NDIS_RECEIVE_SCALE_CAPABILITIES, 0x26c28774, 0x4252, 0x48fe, 0xa6, 0x10, 0xa5, 0x8a, 0x39, 0x8c, 0x0e, 0xb1);
DEFINE_GUID(GUID_NDIS_RSS_ENABLED, 0x9565cd55, 0x3402, 0x4e32, 0xa5, 0xb6, 0x2f, 0x14, 0x3f, 0x2f, 0x2c, 0x30);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_ASSOCIATION_COMPLETION, 0x458bbea7, 0x45a4, 0x4ae2, 0xb1, 0x76, 0xe5, 0x1f, 0x96, 0xfc, 0x05, 0x68);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_ASSOCIATION_START, 0x3927843b, 0x6980, 0x4b48, 0xb1, 0x5b, 0x4d, 0xe5, 0x09, 0x77, 0xac, 0x40);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_CONNECTION_COMPLETION, 0x96efd9c9, 0x7f1b, 0x4a89, 0xbc, 0x04, 0x3e, 0x9e, 0x27, 0x17, 0x65, 0xf1);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_CONNECTION_START, 0x7b74299d, 0x998f, 0x4454, 0xad, 0x08, 0xc5, 0xaf, 0x28, 0x57, 0x6d, 0x1b);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_DISASSOCIATION, 0x3fbeb6fc, 0x0fe2, 0x43fd, 0xb2, 0xad, 0xbd, 0x99, 0xb5, 0xf9, 0x3e, 0x13);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_LINK_QUALITY, 0xa3285184, 0xea99, 0x48ed, 0x82, 0x5e, 0xa4, 0x26, 0xb1, 0x1c, 0x27, 0x54);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_MPDU_MAX_LENGTH_CHANGED, 0x1d6560ec, 0x8e48, 0x4a3e, 0x9f, 0xd5, 0xa0, 0x1b, 0x69, 0x8d, 0xb6, 0xc5);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_PHY_STATE_CHANGED, 0xdeb45316, 0x71b5, 0x4736, 0xbd, 0xef, 0x0a, 0x9e, 0x9f, 0x4e, 0x62, 0xdc);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_PMKID_CANDIDATE_LIST, 0x26d8b8f6, 0xdb82, 0x49eb, 0x8b, 0xf3, 0x4c, 0x13, 0x0e, 0xf0, 0x69, 0x50);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_ROAMING_COMPLETION, 0xdd9d47d1, 0x282b, 0x41e4, 0xb9, 0x24, 0x66, 0x36, 0x88, 0x17, 0xfc, 0xd3);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_ROAMING_START, 0xb2412d0d, 0x26c8, 0x4f4e, 0x93, 0xdf, 0xf7, 0xb7, 0x05, 0xa0, 0xb4, 0x33);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_SCAN_CONFIRM, 0x8500591e, 0xa0c7, 0x4efb, 0x93, 0x42, 0xb6, 0x74, 0xb0, 0x02, 0xcb, 0xe6);
DEFINE_GUID(GUID_NDIS_STATUS_DOT11_TKIPMIC_FAILURE, 0x442c2ae4, 0x9bc5, 0x4b90, 0xa8, 0x89, 0x45, 0x5e, 0xf2, 0x20, 0xf4, 0xee);
DEFINE_GUID(GUID_NDIS_STATUS_HD_SPLIT_CURRENT_CONFIG, 0x6c744b0e, 0xee9c, 0x4205, 0x90, 0xa2, 0x01, 0x5f, 0x6d, 0x65, 0xf4, 0x03);
DEFINE_GUID(GUID_NDIS_STATUS_LINK_SPEED_CHANGE, 0x981f2d85, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_STATUS_LINK_STATE, 0x64c6f797, 0x878c, 0x4311, 0x92, 0x46, 0x65, 0xdb, 0xa8, 0x9c, 0x3a, 0x61);
DEFINE_GUID(GUID_NDIS_STATUS_MEDIA_CONNECT, 0x981f2d7d, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_STATUS_MEDIA_DISCONNECT, 0x981f2d7e, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_STATUS_MEDIA_SPECIFIC_INDICATION, 0x981f2d84, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_STATUS_NETWORK_CHANGE, 0xca8a56f9, 0xce81, 0x40e6, 0xa7, 0x0f, 0xa0, 0x67, 0xa4, 0x76, 0xe9, 0xe9);
DEFINE_GUID(GUID_NDIS_STATUS_OPER_STATUS, 0xf917b663, 0x845e, 0x4d3d, 0xb6, 0xd4, 0x15, 0xeb, 0x27, 0xaf, 0x81, 0xc5);
DEFINE_GUID(GUID_NDIS_STATUS_PACKET_FILTER, 0xd47c5407, 0x2e75, 0x46dd, 0x81, 0x46, 0x1d, 0x7e, 0xd2, 0xd6, 0xab, 0x1d);
DEFINE_GUID(GUID_NDIS_STATUS_PORT_STATE, 0x1dac0dfe, 0x43e5, 0x44b7, 0xb7, 0x59, 0x7b, 0xf4, 0x6d, 0xe3, 0x2e, 0x81);
DEFINE_GUID(GUID_NDIS_STATUS_RESET_END, 0x981f2d77, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_STATUS_RESET_START, 0x981f2d76, 0xb1f3, 0x11d0, 0x8d, 0xd7, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);
DEFINE_GUID(GUID_NDIS_STATUS_TASK_OFFLOAD_CURRENT_CONFIG, 0x45049fc6, 0x54d8, 0x40c8, 0x9c, 0x3d, 0xb0, 0x11, 0xc4, 0xe7, 0x15, 0xbc);
DEFINE_GUID(GUID_NDIS_STATUS_TASK_OFFLOAD_HARDWARE_CAPABILITIES, 0xb6b8158b, 0x217c, 0x4b2a, 0xbe, 0x86, 0x6a, 0x04, 0xbe, 0xea, 0x65, 0xb8);
DEFINE_GUID(GUID_NDIS_STATUS_TCP_CONNECTION_OFFLOAD_CURRENT_CONFIG, 0xf8edaeff, 0x24e4, 0x4ae6, 0xa4, 0x13, 0x0b, 0x27, 0xf7, 0x6b, 0x24, 0x3d);
DEFINE_GUID(GUID_NDIS_STATUS_TCP_CONNECTION_OFFLOAD_HARDWARE_CAPABILITIES, 0x391969b6, 0x402c, 0x43bf, 0x89, 0x22, 0x39, 0xea, 0xe0, 0xda, 0x1b, 0xb5);
DEFINE_GUID(GUID_NDIS_TCP_CONNECTION_OFFLOAD_CURRENT_CONFIG, 0x2ee6aef1, 0x0851, 0x458b, 0xbf, 0x0d, 0x79, 0x23, 0x43, 0xd1, 0xcd, 0xe1);
DEFINE_GUID(GUID_NDIS_TCP_CONNECTION_OFFLOAD_HARDWARE_CAPABILITIES, 0x8ce71f2c, 0xd63a, 0x4390, 0xa4, 0x87, 0x18, 0xfa, 0x47, 0x26, 0x2c, 0xeb);
DEFINE_GUID(GUID_NDIS_TCP_OFFLOAD_CURRENT_CONFIG, 0x68542fed, 0x5c74, 0x461e, 0x89, 0x34, 0x91, 0xc6, 0xf9, 0xc6, 0x09, 0x60);
DEFINE_GUID(GUID_NDIS_TCP_OFFLOAD_HARDWARE_CAPABILITIES, 0xcd5f1102, 0x590f, 0x4ada, 0xab, 0x65, 0x5b, 0x31, 0xb1, 0xdc, 0x01, 0x72);
DEFINE_GUID(GUID_NDIS_TCP_OFFLOAD_PARAMETERS, 0x8ead9a22, 0x7f69, 0x4bc6, 0x94, 0x9a, 0xc8, 0x18, 0x7b, 0x07, 0x4e, 0x61);
DEFINE_GUID(GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY, 0xa14f1c97, 0x8839, 0x4f8a, 0x99, 0x96, 0xa2, 0x89, 0x96, 0xeb, 0xbf, 0x1d);
DEFINE_GUID(GUID_NIC_SWITCH_CURRENT_CAPABILITIES, 0xe76fdaf3, 0x0be7, 0x4d95, 0x87, 0xe9, 0x5a, 0xea, 0xd4, 0xb5, 0x90, 0xe9);
DEFINE_GUID(GUID_NIC_SWITCH_HARDWARE_CAPABILITIES, 0x37cab40c, 0xd1e8, 0x4301, 0x8c, 0x1d, 0x58, 0x46, 0x5e, 0x0c, 0x4c, 0x0f);
DEFINE_GUID(GUID_PM_ADD_PROTOCOL_OFFLOAD, 0x0c06c112, 0x0d93, 0x439b, 0x9e, 0x6d, 0x26, 0xbe, 0x13, 0x0c, 0x97, 0x84);
DEFINE_GUID(GUID_PM_ADD_WOL_PATTERN, 0x6fc83ba7, 0x52bc, 0x4faa, 0xac, 0x51, 0x7d, 0x2f, 0xfe, 0x63, 0xba, 0x90);
DEFINE_GUID(GUID_PM_CURRENT_CAPABILITIES, 0x3abdbd14, 0xd44a, 0x4a3f, 0x9a, 0x63, 0xa0, 0xa4, 0x2a, 0x51, 0xb1, 0x31);
DEFINE_GUID(GUID_PM_GET_PROTOCOL_OFFLOAD, 0xa6435cd9, 0x149f, 0x498e, 0x95, 0x1b, 0x2d, 0x94, 0xbe, 0xa3, 0xe3, 0xa3);
DEFINE_GUID(GUID_PM_HARDWARE_CAPABILITIES, 0xece5360d, 0x3291, 0x4a6e, 0x80, 0x44, 0x00, 0x51, 0x1f, 0xed, 0x27, 0xee);
DEFINE_GUID(GUID_PM_PARAMETERS, 0x560245d2, 0xe251, 0x409c, 0xa2, 0x80, 0x31, 0x19, 0x35, 0xbe, 0x3b, 0x28);
DEFINE_GUID(GUID_PM_PROTOCOL_OFFLOAD_LIST, 0x736ec5ab, 0xca8f, 0x4043, 0xbb, 0x58, 0xda, 0x40, 0x2a, 0x48, 0xd9, 0xcc);
DEFINE_GUID(GUID_PM_REMOVE_PROTOCOL_OFFLOAD, 0xdecd7be2, 0xa6b0, 0x43ca, 0xae, 0x45, 0xd0, 0x00, 0xd2, 0x0e, 0x52, 0x65);
DEFINE_GUID(GUID_PM_REMOVE_WOL_PATTERN, 0xa037a915, 0xc6ca, 0x4322, 0xb3, 0xe3, 0xef, 0x75, 0x4e, 0xc4, 0x98, 0xdc);
DEFINE_GUID(GUID_PM_WOL_PATTERN_LIST, 0x4022be37, 0x7ee2, 0x47be, 0xa5, 0xa5, 0x05, 0x0f, 0xc7, 0x9a, 0xfc, 0x75);
DEFINE_GUID(GUID_RECEIVE_FILTER_CURRENT_CAPABILITIES, 0x4054e80f, 0x2bc1, 0x4ccc, 0xb0, 0x33, 0x4a, 0xbc, 0x0c, 0x4a, 0x1e, 0x8c);
DEFINE_GUID(GUID_STATUS_MEDIA_SPECIFIC_INDICATION_EX, 0xaaacfca7, 0x954a, 0x4632, 0xa1, 0x6e, 0xa8, 0xa6, 0x37, 0x93, 0xa9, 0xe5);
DEFINE_GUID(UNSPECIFIED_NETWORK_GUID, 0x12ba5bde, 0x143e, 0x4c0d, 0xb6, 0x6d, 0x23, 0x79, 0xbb, 0x14, 0x19, 0x13);

#ifdef __cplusplus
}
#endif
